/**
 * This program is free software, you can redistribute it and/or modify it.
 * Copyright (c) 2025 Huawei Technologies Co., Ltd.
 * This file is a part of the CANN Open Software.
 * Licensed under CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING
 * BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. See LICENSE in the root of
 * the software repository for the full text of the License.
 */

/*!
 * \file reduce_tiling.cpp
 * \brief atvoss reduce template tiling
 */

#include "op_common/atvoss/reduce/reduce_tiling.h"
#include "op_common/op_host/util/math_util.h"

namespace Ops {
namespace Base {

using namespace ReduceOpTmpl;

// float数据类型, UB间reduce缓存为16K时,最大能支持的A, 公式CACHE_BUF_SIZE = MAX_INNER_A * log2(Ro)
// log2(Ro)支持最大取值为32
constexpr static int32_t MAX_INNER_A = 512; // 单位字节
constexpr static double THRES_HOLD = 0.95;
constexpr static int32_t A_STEP_LEN = 4;
constexpr static int32_t AXES_STEP = 2; // A轴和R轴循环遍历的步长

/**
 * Ensure that the returned shape is non-scalar.
 * When the dim num of shape is 0, this shape is considered to express a scalar.
 * This function returns the original shape when it receives a non-scalar shape,
 * and returns the vector shape that returns a {1} when it receives a scalar shape
 * @param in_shape input shape
 * @return non-scalar shape
 */
inline const gert::Shape& EnsureNotScalar(const gert::Shape& inShape)
{
    if (inShape.IsScalar()) {
        static const gert::Shape scalarShape= {1};
        return scalarShape;
    }
    return inShape;
}

namespace ReduceOpTmpl {
static bool CheckAllReduce(gert::TilingContext* context, int32_t outIdx)
{
    auto out = context->GetOutputShape(outIdx);
    OP_CHECK_IF(out == nullptr, OP_LOGE(context, "out is nullptr"), return false);
    gert::Shape outShape = EnsureNotScalar(out->GetStorageShape());
    return (outShape.GetShapeSize() == 1L);
}

ge::graphStatus GetInputShape(gert::TilingContext* context, int32_t idx, std::vector<int64_t>& shape)
{
    auto xInput = context->GetInputShape(idx);
    OP_CHECK_NULL_WITH_CONTEXT(context, xInput);
    gert::Shape xInputShape = EnsureNotScalar(xInput->GetStorageShape());
    size_t shapeSize = xInputShape.GetDimNum();
    OP_CHECK_IF(
        (shapeSize >= static_cast<size_t>(MAX_DIM)),
        OP_LOGE(context->GetNodeName(), "shape dim size:%zu is over max dim, cannot support.", shapeSize),
        return ge::GRAPH_FAILED);

    shape.resize(shapeSize);
    for (size_t i = 0; i < shapeSize; i++) {
        shape[i] = xInputShape.GetDim(i);
        if (shape[i] < 0) {
            OP_LOGE(context->GetNodeName(), "shape dim:%zu size:%ld cannot support dynamic.", i, shape[i]);
            return ge::GRAPH_FAILED;
        }
    }
    return ge::GRAPH_SUCCESS;
}

ge::graphStatus GetInputDtype(gert::TilingContext* context, int32_t idx, ge::DataType& dtype)
{
    auto inputDesc = context->GetInputDesc(idx);
    OP_CHECK_NULL_WITH_CONTEXT(context, inputDesc);
    dtype = inputDesc->GetDataType();
    return ge::GRAPH_SUCCESS;
}

ge::graphStatus GetInputParam(gert::TilingContext* context, ReduceOpInputParam& opInput, int32_t inputIdx)
{
    OP_CHECK_IF(
        (GetInputDtype(context, inputIdx, opInput.inputDtype) == ge::GRAPH_FAILED),
        OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get input dtype failed"), return ge::GRAPH_FAILED);

    OP_CHECK_IF(
        (GetInputShape(context, inputIdx, opInput.shape) == ge::GRAPH_FAILED),
        OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get input shape failed"), return ge::GRAPH_FAILED);
    return ge::GRAPH_SUCCESS;
}

ge::graphStatus GetInputParam(
    gert::TilingContext* context, ReduceOpInputParam& opInput, int32_t inputIdx, int32_t axesIdx, int32_t outIdx)
{
    ge::DataType axesDtype;
    ge::graphStatus status = GetInputDtype(context, axesIdx, axesDtype);
    OP_CHECK_IF(
        (status == ge::GRAPH_FAILED), OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get axes dtype failed"),
        return ge::GRAPH_FAILED);
    OP_CHECK_IF(
        (GetInputDtype(context, inputIdx, opInput.inputDtype) == ge::GRAPH_FAILED),
        OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get input dtype failed"), return ge::GRAPH_FAILED);
    OP_CHECK_IF(
        (GetInputShape(context, inputIdx, opInput.shape) == ge::GRAPH_FAILED),
        OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get input shape failed"), return ge::GRAPH_FAILED);
    if (CheckAllReduce(context, outIdx)) {
        // all reduce 场景不读取const data
        opInput.axes.resize(opInput.shape.size());
        for (size_t i = 0; i < opInput.shape.size(); i++) {
            opInput.axes[i] = i;
        }
    } else {
        if (axesDtype == ge::DT_INT32) {
            status = GetConstInputData<int32_t>(context, axesIdx, opInput.axes);
        } else if (axesDtype == ge::DT_INT64) {
            status = GetConstInputData<int64_t>(context, axesIdx, opInput.axes);
        } else {
            OP_LOGE(context->GetNodeName(), "only support const input dtype in [int32, int64]");
            status = ge::GRAPH_FAILED;
        }
        OP_CHECK_IF(
            (status == ge::GRAPH_FAILED), OP_LOGE(context->GetNodeName(), "ReduceOpTmpl get axes const input failed"),
            return ge::GRAPH_FAILED);
    }
    return ge::GRAPH_SUCCESS;
}

} // namespace ReduceOpTmpl

static void MakeWrapDim(const std::vector<int64_t>& shape, std::vector<int64_t>& axes)
{
    // EnsureNotScalar at least return 1-D Tensor, so shapeSize cannot be 0
    size_t shapeSize = shape.size();
    for (size_t i = 0; i < axes.size(); i++) {
        if (axes[i] < 0) {
            axes[i] += shapeSize;
        }
    }
    std::sort(axes.begin(), axes.end());
}

static inline void AssembleUnit(ReduceTilingUnit& unit, int32_t idx, uint64_t inner, uint64_t outer, uint64_t step)
{
    unit.idx = idx;
    unit.inner = inner;
    unit.outer = outer;
    unit.step = step;
}

template <class Pattern>
bool ReduceOpTiling::IsAxisA(int32_t idx)
{
    if (Pattern::FirstA) {
        return idx % CONST2 == 0;
    } else {
        return idx % CONST2 == 1;
    }
}

void ReduceOpTiling::PrintTilingData()
{
    OP_LOGI(
        context_->GetNodeName(),
        "TilingData: factorACntPerCore:%lu, factorATotalCnt:%lu, ubFactorA:%lu, factorRCntPerCore:%lu, "
        "factorRTotalCnt:%lu, ubFactorR:%lu, groupR:%lu, outSize:%lu, basicBlock:%lu, resultBlock:%lu, "
        "meanVar:%lf, blockDim:%u",
        tilingData_->factorACntPerCore, tilingData_->factorATotalCnt, tilingData_->ubFactorA,
        tilingData_->factorRCntPerCore, tilingData_->factorRTotalCnt, tilingData_->ubFactorR, tilingData_->groupR,
        tilingData_->outSize, tilingData_->basicBlock, tilingData_->resultBlock, tilingData_->meanVar,
        context_->GetBlockDim());
}

uint64_t ReduceOpTiling::Ratio()
{
    if (opDag_.memLevel == MemLevel::LEVEL_2) {
        return CeilDiv(opDag_.maxInputBytes, static_cast<uint64_t>(ge::GetSizeByDataType(opInput_.inputDtype)));
    }
    return 1UL;
}

// check axes value range in [-dimNum, dimNum)
ge::graphStatus ReduceOpTiling::AxesCheck(const std::vector<int64_t>& shape, const std::vector<int64_t>& axes)
{
    int64_t shapeSize = static_cast<int64_t>(shape.size());
    int64_t axesSize = static_cast<int64_t>(axes.size());
    OP_CHECK_IF(
        (axesSize > shapeSize),
        OP_LOGE(context_->GetNodeName(), "illegal axes size:%ld over shape size:%ld", axesSize, shapeSize),
        return ge::GRAPH_FAILED);

    for (int64_t i = 0; i < axesSize; i++) {
        OP_CHECK_IF(
            (axes[i] >= shapeSize || axes[i] < 0),
            OP_LOGE(
                context_->GetNodeName(), "illegal axis:%ld dim:%ld out of shape range:[0, %ld)", i, axes[i], shapeSize),
            return ge::GRAPH_FAILED);
    }
    return ge::GRAPH_SUCCESS;
}

ge::graphStatus ReduceOpTiling::ParamCheck(ReduceOpInputParam& opInput)
{
    int32_t dtypeSize = ge::GetSizeByDataType(opInput.inputDtype);
    OP_CHECK_IF(dtypeSize <= 0, OP_LOGE(context_->GetNodeName(), "illegal dtype"), return ge::GRAPH_FAILED);
    OP_LOGD(
        context_->GetNodeName(), "origin shape is:%s, axes:%s", ReduceOpTmpl::VectorToString(opInput.shape).c_str(),
        ReduceOpTmpl::VectorToString(opInput.axes).c_str());
    MakeWrapDim(opInput.shape, opInput.axes);
    OP_CHECK_IF(
        (AxesCheck(opInput.shape, opInput.axes) == ge::GRAPH_FAILED), OP_LOGE(context_->GetNodeName(), "illegal axes"),
        return ge::GRAPH_FAILED);
    return ge::GRAPH_SUCCESS;
}

ge::graphStatus ReduceOpTiling::PreProcessOptionalParam()
{
    if (tilingData_ == nullptr) {
        tilingData_ = context_->GetTilingData<ReduceOpTilingData>();
        OP_CHECK_IF(
            tilingData_ == nullptr, OP_LOGE(context_->GetNodeName(), "get tilingdata ptr failed"),
            return ge::GRAPH_FAILED);
    }
    OP_CHECK_IF(
        (memset_s(tilingData_, sizeof(ReduceOpTilingData), 0, sizeof(ReduceOpTilingData)) != EOK),
        OP_LOGE(context_->GetNodeName(), "memset tilingdata failed"), return ge::GRAPH_FAILED);

    if (compileInfo_ == nullptr) {
        ReduceOpCompileInfo* compileInfo = new ReduceOpCompileInfo();
        compileInfoMalloc_ = true;
        compileInfo->vectorCoreNum = GetAivCoreNum(context_);
        OP_CHECK_IF(compileInfo->vectorCoreNum == 0, OP_LOGE(context_, "aiv core num is 0"), return ge::GRAPH_FAILED);
        compileInfo->ubSize = GetUbSize(context_);
        OP_CHECK_IF(compileInfo->ubSize == 0, OP_LOGE(context_, "ub size is 0"), return ge::GRAPH_FAILED);
        compileInfo->cacheLineSize = GetCacheLineSize(context_);
        OP_CHECK_IF(compileInfo->cacheLineSize == 0, OP_LOGE(context_, "cacheline is 0"), return ge::GRAPH_FAILED);
        compileInfo->ubBlockSize = GetUbBlockSize(context_);
        OP_CHECK_IF(compileInfo->ubBlockSize == 0, OP_LOGE(context_, "ub block size is 0"), return ge::GRAPH_FAILED);
        compileInfo->vRegSize = GetVRegSize(context_);
        OP_CHECK_IF(compileInfo->vRegSize == 0, OP_LOGE(context_, "vreg is 0"), return ge::GRAPH_FAILED);
        compileInfo_ = compileInfo;
    }
    return ge::GRAPH_SUCCESS;
}

// elimniate dim and axes where dim = 1
void ReduceOpTiling::EliminateOne(
    const std::vector<int64_t>& oriShape, std::vector<int64_t>& axes, uint64_t* shape, int32_t& shapeSize)
{
    int32_t dstIdx = 1; // shape中第一个数给了1, 跳过第一个数
    for (size_t i = 0; i < axes.size(); i++) {
        // 前面补了一维，所有的axes需要加1
        axes[i] = axes[i] + 1;
    }
    int32_t eraseNum = 0;
    for (size_t i = 0; i < oriShape.size(); i++) {
        auto iter = std::find(axes.begin(), axes.end(), i + 1);
        if (oriShape[i] != 1) {
            shape[dstIdx++] = oriShape[i];
            if (iter != axes.end()) {
                *iter = *iter - eraseNum;
            }
        } else {
            eraseNum++;
            if (iter != axes.end()) {
                axes.erase(iter);
            }
        }
    }
    shapeSize = dstIdx;
    OP_LOGD(
        context_->GetNodeName(), "after EliminateOne, shape is:%s, axes:%s",
        ReduceOpTmpl::VectorToString(shape, shapeSize).c_str(), ReduceOpTmpl::VectorToString(axes).c_str());
}

// merge continuous r axes and a axes
void ReduceOpTiling::MergeAxis(std::vector<int64_t>& axes, uint64_t* shape, int32_t& shapeSize)
{
    int32_t tmpSize = 0;
    for (int32_t i = 0; i < shapeSize;) {
        auto iter0 = std::find(axes.begin(), axes.end(), i);
        bool isRAxis0 = iter0 != axes.end();
        uint64_t s = shape[i];
        int32_t j = i + 1;
        for (; j < shapeSize; j++) {
            auto iter1 = std::find(axes.begin(), axes.end(), j);
            bool isRAxis1 = iter1 != axes.end();
            if (isRAxis0 != isRAxis1) {
                break;
            }
            s *= shape[j];
            if (isRAxis1) {
                // 连续的R轴, 需要擦除后续R轴的索引
                axes.erase(iter1);
            }
        }
        i = j;
        shape[tmpSize++] = s;
        if (isRAxis0) {
            *iter0 = tmpSize - 1;
        }
    }
    for (int32_t i = tmpSize; i < shapeSize; i++) {
        shape[i] = 0;
    }
    shapeSize = tmpSize;
    OP_LOGD(
        context_->GetNodeName(), "after MergeAxis, shape is:%s, axes:%s",
        ReduceOpTmpl::VectorToString(shape, shapeSize).c_str(), ReduceOpTmpl::VectorToString(axes).c_str());
}

template <class Pattern>
bool ReduceOpTiling::IsEmtpyTensor(const uint64_t* shape)
{
    for (int32_t i = 0; i < Pattern::Dim; i++) {
        if (shape[i] == 0) {
            return true;
        }
    }
    return false;
}

template <class Pattern>
uint64_t ReduceOpTiling::CaculateReduceSize(const uint64_t* shape)
{
    uint64_t dSize = ge::GetSizeByDataType(opInput_.inputDtype);
    uint64_t ubBlockSize = compileInfo_->ubBlockSize / dSize;
    int32_t dim = Pattern::TailA ? Pattern::Dim - AXES_STEP : Pattern::Dim - CONST1;
    uint64_t r = 1;
    for (int32_t i = dim; i > -1; i = i - AXES_STEP) {
        if (i == Pattern::Dim - 1) {
            r = r * CeilAlign(shape[i], ubBlockSize);
        } else {
            r = r * shape[i];
        }
    }
    return r;
}

// pad dim = 1 in front of actual dim
template <class Pattern>
void ReduceOpTiling::PadDimOne(uint64_t* shape)
{
    // TailA pad to ARARARARA, TailR pad to ARARARAR
    int32_t padNum = Pattern::TailA ? CONST9 - Pattern::Dim : CONST8 - Pattern::Dim;
    int32_t maxDim = Pattern::TailA ? CONST9 : CONST8;
    if (padNum == 0) {
        return;
    }
    for (int32_t i = 0; i < Pattern::Dim; ++i) {
        shape[maxDim - 1 - i] = shape[Pattern::Dim - 1 - i];
    }
    for (int32_t i = 0; i < padNum; ++i) {
        shape[i] = 1;
    }
}

void ReduceOpTiling::TransformShape(
    const std::vector<int64_t>& oriShape, std::vector<int64_t>& axes, uint64_t* shape, int32_t& shapeSize)
{
    shape[0] = 1UL;
    EliminateOne(oriShape, axes, shape, shapeSize);
    MergeAxis(axes, shape, shapeSize);
}

void ReduceOpTiling::DoReduceTiling(ReduceTilingKey& key)
{
    uint64_t newShape[MAX_DIM] = {0};
    int32_t newShapeSize = 0;
    TransformShape(opInput_.shape, opInput_.axes, newShape, newShapeSize);

    DoTilingMatchPattern(newShape, newShapeSize);

    CalcUserWorkSpace();

    GetTilingKey(key);

    PrintTilingData();
}

/*
 * cacheLine切分找到硬件cacheLine大小的位置
 * 例如: float32, shape:(2, 35, 7), cacheLine:256B
 * cacheLine切分找到axis:1, step:10, outer:4
 */
template <class Pattern>
void ReduceOpTiling::ComputeCacheLineBlock(const uint64_t* shape)
{
    uint64_t dSize = ge::GetSizeByDataType(opInput_.inputDtype);
    uint64_t cacheSize = compileInfo_->cacheLineSize / dSize;
    uint64_t ubBlockSize = compileInfo_->ubBlockSize / dSize;
    uint64_t cacheLineShape = 1;
    uint64_t cacheLineStep = 1;
    uint64_t cacheLineOuter = 1;
    uint64_t aInCacheLine = 1;
    uint64_t rInCacheLine = 1;
    for (int32_t i = Pattern::Dim - 1; i > -1; --i) {
        cacheLineShape *= shape[i];
        if (cacheLineShape > cacheSize) {
            cacheLineShape /= shape[i];
            cacheLineStep = CeilDiv(cacheSize, cacheLineShape);
            cacheLineShape *= cacheLineStep;
            cacheLineOuter = CeilDiv(shape[i], cacheLineStep);
            cBlock_.axis = i;
            break;
        } else {
            cacheLineStep = shape[i];
            cBlock_.axis = i;
        }
    }

    for (int32_t i = Pattern::Dim - 1; i > cBlock_.axis; --i) {
        if (i == Pattern::Dim - 1) {
            if (IsAxisA<Pattern>(i)) {
                aInCacheLine = aInCacheLine * CeilAlign(shape[i], ubBlockSize);
            } else {
                rInCacheLine = rInCacheLine * CeilAlign(shape[i], ubBlockSize);
            }
        } else {
            if (IsAxisA<Pattern>(i)) {
                aInCacheLine = aInCacheLine * shape[i];
            } else {
                rInCacheLine = rInCacheLine * shape[i];
            }
        }
    }
    if (IsAxisA<Pattern>(cBlock_.axis)) {
        aInCacheLine *= cacheLineStep;
    } else {
        rInCacheLine *= cacheLineStep;
    }

    cBlock_.cacheLineStep = cacheLineStep;
    cBlock_.cacheLineOuter = cacheLineOuter;
    cBlock_.aSize = aInCacheLine;
    cBlock_.rSize = rInCacheLine;
    OP_LOGD(
        context_->GetNodeName(), "cacheLine Block axis:%d, cacheLineStep:%lu, cacheLineOuter:%lu, aSize:%lu, rSize:%lu",
        cBlock_.axis, cBlock_.cacheLineStep, cBlock_.cacheLineOuter, cBlock_.aSize, cBlock_.rSize);
}

template <class Pattern>
void ReduceOpTiling::InitUnit(const uint64_t* shape)
{
    int32_t axisInCacheLine = cBlock_.axis;
    for (int32_t i = Pattern::FirstA ? 0 : 1; i < axisInCacheLine; i += AXES_STEP) {
        unitA_.outer *= shape[i];
    }
    for (int32_t i = Pattern::FirstA ? 1 : 0; i < axisInCacheLine; i += AXES_STEP) {
        unitR_.outer *= shape[i];
    }

    bool basicSplitA = IsAxisA<Pattern>(axisInCacheLine);
    if (basicSplitA) {
        unitA_.outer *= cBlock_.cacheLineOuter;
    } else {
        unitR_.outer *= cBlock_.cacheLineOuter;
    }
}

template <class Pattern>
void ReduceOpTiling::ComputeCacheLineBlockAndUnit(const uint64_t* shape)
{
    ComputeCacheLineBlock<Pattern>(shape);
    InitUnit<Pattern>(shape);
}

/*
 * 计算UB内A轴的切分大小，最大512B或者按A轴分核低于85%
 * 例如: float32, shape:(12800, 8), pattern:AR, cacheLine:256B, coreNum:64
 * cacheLine切分后(1600, cacheLine(8, 8))
 * 对1600做A轴切分，找到uintA inner:16(cacheline中A轴为8, 与16相乘后达到512B上限), outer:100
 */
template <class Pattern>
void ReduceOpTiling::ComputeUnitA(const uint64_t* shape)
{
    int32_t axisInCacheLine = cBlock_.axis;
    uint64_t outerA = unitA_.outer;
    uint64_t innerA = unitA_.inner;
    uint64_t maxCacheA = MAX_INNER_A / opDag_.maxInputBytes;
    uint64_t maxInnerA = Pattern::ID == PATTERN_A ? basicBlock_ * Ratio() / opDag_.maxInputBytes : maxCacheA;
    uint64_t stepLen = Pattern::ID == PATTERN_A ? A_STEP_LEN : 1; // 纯A的步长为4, 减少循环次数
    bool basicSplitA = IsAxisA<Pattern>(axisInCacheLine);
    uint64_t bBlockNum = basicBlock_ * Ratio() / opDag_.maxInputBytes;
    uint64_t step = 1;
    int32_t iA;
    for (iA = basicSplitA ? axisInCacheLine : axisInCacheLine - 1; iA > -1; iA -= AXES_STEP) {
        uint64_t axisLen = ((iA == axisInCacheLine) ? cBlock_.cacheLineOuter : shape[iA]);
        bool splitHere = false;
        uint64_t maxStep = 0;
        double maxRate = 0.0f;
        for (step = 2UL; step <= axisLen / stepLen; step++) { // 从2开始查找，1的切分没有意义
            uint64_t s = step * stepLen;
            uint64_t tmpInnerA = innerA * s;
            uint64_t tmpOuterA = outerA / axisLen * CeilDiv(axisLen, s);
            uint64_t aSize = tmpInnerA * cBlock_.aSize;
            if (iA == axisInCacheLine) {
                aSize = (cBlock_.aSize / cBlock_.cacheLineStep) * std::min(cBlock_.cacheLineStep * s, shape[iA]);
            }
            if (aSize <= maxInnerA && aSize * cBlock_.rSize <= bBlockNum) {
                uint64_t tempCoreNum =
                    (tmpOuterA * unitR_.outer) / CeilDiv(tmpOuterA * unitR_.outer, compileInfo_->vectorCoreNum);
                tempCoreNum = tempCoreNum > tmpOuterA ? FloorAlign(tempCoreNum, tmpOuterA) : tempCoreNum;
                double rate = static_cast<double>(tempCoreNum) / static_cast<double>(compileInfo_->vectorCoreNum);
                maxStep = (rate > THRES_HOLD && rate > maxRate) ? step : maxStep;
                maxRate = rate > maxRate ? rate : maxRate;
            } else {
                splitHere = true;
                break;
            }
        }
        if (splitHere || maxStep != axisLen / stepLen || iA - AXES_STEP < 0) {
            // A轴最大、分核最大或者无法继续迭代
            step = maxStep == 0 ? 1 : maxStep * stepLen;
            innerA = innerA * step;
            outerA = outerA / axisLen * CeilDiv(axisLen, step);
            break;
        }
        innerA *= axisLen;
        outerA /= axisLen;
    }
    AssembleUnit(unitA_, iA, innerA, outerA, step);
}

/*
 * 根据BasicBlock大小和UB内A轴的切分大小，计算UB内R轴的切分大小
 * 用BasicBlock / UB内A的切分大小，找到满BasicBlock的R轴切分位置
 */
template <class Pattern>
void ReduceOpTiling::ComputeUnitR(const uint64_t* shape)
{
    int32_t axisInCacheLine = cBlock_.axis;
    uint64_t outerR = unitR_.outer;
    uint64_t innerR = unitR_.inner;
    uint64_t outerA = unitA_.outer;
    uint64_t innerA = unitA_.inner;
    uint64_t step = 1UL;
    uint64_t bBlockNum = basicBlock_ * Ratio() / opDag_.maxInputBytes;
    bool basicSplitA = IsAxisA<Pattern>(axisInCacheLine);
    int32_t iR;
    for (iR = basicSplitA ? axisInCacheLine - 1 : axisInCacheLine; iR > -1; iR -= AXES_STEP) {
        uint64_t axisLen = ((iR == axisInCacheLine) ? cBlock_.cacheLineOuter : shape[iR]);
        innerR *= axisLen;
        if (innerA * innerR * cBlock_.aSize * cBlock_.rSize <= bBlockNum) {
            outerR = outerR / axisLen;
            continue;
        }

        innerR /= axisLen;
        // maybe bBlockNum not full
        step = std::min(bBlockNum / (innerA * innerR * cBlock_.aSize * cBlock_.rSize), axisLen);
        for (uint64_t s = step; s > 1UL; s--) {
            auto tmpOuterR = outerR / axisLen * CeilDiv(axisLen, s);
            uint64_t tempCoreNum = (outerA * tmpOuterR) / CeilDiv(outerA * tmpOuterR, compileInfo_->vectorCoreNum);
            tempCoreNum = tempCoreNum > outerA ? FloorAlign(tempCoreNum, outerA) : tempCoreNum;
            double rate = static_cast<double>(tempCoreNum) / static_cast<double>(compileInfo_->vectorCoreNum);
            if (rate > THRES_HOLD) {
                // 找不到合适的rate，就不刷新step
                step = s;
                break;
            }
        }
        innerR *= step;
        outerR = outerR / axisLen * CeilDiv(axisLen, step);
        break;
    }
    AssembleUnit(unitR_, iR, innerR, outerR, step);
}

/*
 * 针对R轴过小，UB内R轴全载，BasicBlock不能满载时，调整UB内A轴切分，上限Reduce计算后输出buffer大小
 */
template <class Pattern>
void ReduceOpTiling::ComputeProgressUnitA(const uint64_t* shape)
{
    // if RAxis is fully loaded in UB, and basicBlock is not enough, we need to calculate extra unitA
    if (unitR_.idx != -1) {
        return;
    }
    uint64_t axisLen = (unitA_.idx == cBlock_.axis ? cBlock_.cacheLineOuter : shape[unitA_.idx]);
    uint64_t innerA = unitA_.inner / unitA_.step; // restore original innerA
    uint64_t outerA = unitA_.outer / CeilDiv(axisLen, unitA_.step) * axisLen;
    uint64_t bBlockNum = basicBlock_ * Ratio() / opDag_.maxInputBytes;
    uint64_t maxInnerA = resultBlock_ / opDag_.maxInputBytes;
    uint64_t dSize = ge::GetSizeByDataType(opInput_.inputDtype);
    if (dSize == 0) {
        OP_LOGE(context_->GetNodeName(), "dSize:%lu is equal to 0, not support.", dSize);
        return;
    }
    uint64_t cacheSize = compileInfo_->cacheLineSize / dSize;
    uint64_t innerR = unitR_.inner;
    uint64_t step = 1;
    int32_t iA;
    for (iA = unitA_.idx; iA > -1; iA -= AXES_STEP) {
        axisLen = (iA == cBlock_.axis ? cBlock_.cacheLineOuter : shape[iA]);
        bool splitHere = false;
        step = (iA == unitA_.idx ? unitA_.step : 1UL);
        uint64_t maxStep = step;
        for (uint64_t s = step + 1UL; s <= axisLen; s++) {
            uint64_t tmpInnerA = innerA * s;
            uint64_t tmpOuterA = outerA / axisLen * CeilDiv(axisLen, s);
            double rate = (double)tmpOuterA / (double)(CeilAlign(tmpOuterA, compileInfo_->vectorCoreNum));
            bool isContinue =
                (tmpInnerA * innerR * cBlock_.aSize * cBlock_.rSize <= bBlockNum &&
                 tmpInnerA * cBlock_.aSize <= maxInnerA);
            if (isContinue) {
                if (tmpInnerA * cBlock_.aSize <= cacheSize) {
                    maxStep = s;
                } else {
                    maxStep = rate >= THRES_HOLD ? s : maxStep;
                }
                continue;
            } else {
                splitHere = true;
                break;
            }
        }
        if (splitHere || iA - AXES_STEP < 0) {
            step = maxStep;
            innerA *= step;
            outerA = outerA / axisLen * CeilDiv(axisLen, step);
            break;
        }
        innerA *= axisLen;
        outerA /= axisLen;
    }
    AssembleUnit(unitA_, iA, innerA, outerA, step);
}

// try get reduce result block size
template <class Pattern>
uint64_t ReduceOpTiling::TryGetReduceBlock(
    const uint64_t* shape, uint64_t preInputBufferNum, uint64_t preRestBufferNum, uint64_t postBufferNum)
{
    uint64_t r = CaculateReduceSize<Pattern>(shape);
    // basic * (preInputBufferNum + preRestBufferNum * ratio) + (basic / r) * postBufferNum * ratio = ub - reserved
    uint64_t ubAvilSize = compileInfo_->ubSize - (CACHE_BUF_SIZE + opInput_.reservedSize);
    uint64_t ratio = Ratio();

    double basicBlock =
        static_cast<double>(ubAvilSize) / (static_cast<double>(preInputBufferNum + preRestBufferNum * ratio) +
                                           static_cast<double>(postBufferNum * ratio) / static_cast<double>(r));
    return static_cast<uint64_t>(static_cast<double>(basicBlock * ratio) / static_cast<double>(r));
}

template <class Pattern>
ge::graphStatus ReduceOpTiling::CalcBasicBlock(const uint64_t* shape)
{
    OP_CHECK_IF(
        compileInfo_->ubSize <= CACHE_BUF_SIZE + opInput_.reservedSize,
        OP_LOGE(
            context_->GetNodeName(), "ubSize:%lu is smaller than size:%lu, not support.", compileInfo_->ubSize,
            CACHE_BUF_SIZE + opInput_.reservedSize),
        return ge::GRAPH_FAILED);

    // reduce前的计算图是开启DB的，对于输入输出需要乘以2,
    // 且对于内存策略3而言，reduce算子的输入和计算内存是按照cast前后比例计算
    uint64_t preInputBufferNum = opDag_.preInput * CONST2;
    // 用户自定义存活节点在reduce前计算，确保申请足够大的内存
    uint64_t preRestBufferNum = opDag_.preTempCalc + opDag_.preOutput * CONST2 + opInput_.reservedNode;
    if (opDag_.reduceOpPos == 1) {
        // 对于reduce前没有计算的算子，需要额外的inputNum确保搬运流水
        preInputBufferNum = preInputBufferNum * CONST2;
    }
    // reduce后的存活节点加1，用于存放reduce的输出
    uint64_t postBufferNum = opDag_.postInput + opDag_.postTempCalc + opDag_.postOutput + CONST1;

    uint64_t ratio = Ratio();
    uint64_t ubAvilSize = compileInfo_->ubSize - (CACHE_BUF_SIZE + opInput_.reservedSize);
    if (Pattern::ID == PATTERN_A) {
        basicBlock_ = ubAvilSize / (preInputBufferNum + (preRestBufferNum + postBufferNum) * ratio);
        basicBlock_ = FloorAlign(basicBlock_, compileInfo_->vRegSize);
        resultBlock_ = basicBlock_ * ratio;
    } else {
        uint64_t resBlock = TryGetReduceBlock<Pattern>(shape, preInputBufferNum, preRestBufferNum, postBufferNum);
        resultBlock_ = FloorAlign(resBlock, compileInfo_->cacheLineSize);
        if (resultBlock_ < static_cast<uint64_t>(MAX_INNER_A)) {
            resultBlock_ = MAX_INNER_A;
        } else if (resultBlock_ > CACHE_BUF_SIZE) {
            // 输出大小不能超过cache缓存大小, 否则计算额外A轴搬入时会越界
            resultBlock_ = CACHE_BUF_SIZE;
        }
        OP_CHECK_IF(
            ubAvilSize <= resultBlock_ * postBufferNum,
            OP_LOGE(
                context_->GetNodeName(), "ubSize:%lu is smaller than size:%lu, not support.", compileInfo_->ubSize,
                CACHE_BUF_SIZE + opInput_.reservedSize + resultBlock_ * postBufferNum),
            return ge::GRAPH_FAILED);
        uint64_t preBufSize = ubAvilSize - resultBlock_ * postBufferNum;
        // 按输入和计算大小的比例折算成输入大小
        basicBlock_ = preBufSize / (preInputBufferNum + preRestBufferNum * ratio);
        basicBlock_ = FloorAlign(basicBlock_, compileInfo_->vRegSize);
    }
    OP_CHECK_IF(
        basicBlock_ < compileInfo_->vRegSize,
        OP_LOGE(context_->GetNodeName(), "basic block:%lu is too small, not support.", basicBlock_),
        return ge::GRAPH_FAILED);
    OP_LOGI(
        context_->GetNodeName(),
        "preInputBufferNum:%lu, preRestBufferNum:%lu, postBufferNum:%lu, basicBlock:%ld, resBlock:%ld",
        preInputBufferNum, preRestBufferNum, postBufferNum, basicBlock_, resultBlock_);

    CalcUserBasicBlock(Pattern::ID == PATTERN_A);
    return ge::GRAPH_SUCCESS;
}

template <class Pattern>
ge::graphStatus ReduceOpTiling::ComputeEmptyTiling(uint64_t* shape)
{
    uint64_t outSize = 1;
    for (int32_t dim = Pattern::Dim - 1; dim > -1; dim--) {
        if (IsAxisA<Pattern>(dim)) {
            outSize *= shape[dim];
        }
    }
    tilingData_->outSize = outSize;
    context_->SetBlockDim(compileInfo_->vectorCoreNum);
    if (outSize == 0) {
        return ge::GRAPH_SUCCESS;
    }

    uint64_t ubAvilSize = compileInfo_->ubSize - CACHE_BUF_SIZE;
    basicBlock_ = FloorAlign(ubAvilSize / CONST2, compileInfo_->vRegSize); // double buffer
    uint64_t newshape[MAX_DIM] = {outSize};
    // 空tensor去除R轴后，作为全A的pattern计算切分
    ComputeCacheLineBlock<__reducePattern::A>(newshape);
    unitA_.outer *= cBlock_.cacheLineOuter;
    ComputeUnitA<__reducePattern::A>(newshape);
    SetTilingData<__reducePattern::A>(newshape);
    return ge::GRAPH_SUCCESS;
}

template <class Pattern>
ge::graphStatus ReduceOpTiling::ComputeTiling(uint64_t* shape)
{
    // Tiling计算分5步：
    // 1. 根据计算图计算搬入的BasicBlock大小
    // 2. 根据cacheline大小计算cacheline的切分轴，保证搬运性能
    // 3. 计算UB内A轴的切分大小，最大512B或者按A轴分核低于85%
    // 4. 根据BasicBlock大小和UB内A轴的切分大小，计算UB内R轴的切分大小
    // 5. 可选，针对R轴过小，UB内R轴全载，BasicBlock不能满载是，调整UB内A轴切分，上限为UB内二分缓存大小
    dimNum_ = Pattern::Dim;
    OP_CHECK_IF(
        (CalcBasicBlock<Pattern>(shape) == ge::GRAPH_FAILED),
        OP_LOGE(context_->GetNodeName(), "calc basic block failed, maybe unsupport ubsize"), return ge::GRAPH_FAILED);
    if (IsEmtpyTensor<Pattern>(shape)) {
        return ComputeEmptyTiling<Pattern>(shape);
    }

    ComputeCacheLineBlockAndUnit<Pattern>(shape);

    ComputeUnitA<Pattern>(shape);

    ComputeUnitR<Pattern>(shape);

    ComputeProgressUnitA<Pattern>(shape);

    OP_LOGI(
        context_->GetNodeName(),
        "tiling step outerA:%lu, innerA:%lu, stepA:%lu, idxA:%d, outerR:%lu, innerR:%lu, stepR:%lu, idxR:%d",
        unitA_.outer, unitA_.inner, unitA_.step, unitA_.idx, unitR_.outer, unitR_.inner, unitR_.step, unitR_.idx);

    SetTilingData<Pattern>(shape);
    SetTilingKey<Pattern>();
    return ge::GRAPH_SUCCESS;
}

template <class Pattern>
void ReduceOpTiling::SetTilingData(const uint64_t* shape)
{
    uint64_t cacheStep = cBlock_.cacheLineStep;
    int32_t axis = cBlock_.axis;
    uint64_t perCoreNum = CeilDiv(unitA_.outer * unitR_.outer, compileInfo_->vectorCoreNum);
    uint64_t blockDim = CeilDiv(unitA_.outer * unitR_.outer, perCoreNum);
    uint64_t factorA = unitA_.idx == axis ? unitA_.step * cacheStep : unitA_.step;
    uint64_t factorR = unitR_.idx == axis ? unitR_.step * cacheStep : unitR_.step;

    if (unitA_.outer < blockDim) {
        auto tmpBlockDim = CeilAlign(blockDim, unitA_.outer);
        if (tmpBlockDim <= compileInfo_->vectorCoreNum) {
            blockDim = tmpBlockDim;
        } else {
            blockDim = FloorAlign(blockDim, unitA_.outer);
        }
    }

    tilingData_->ubFactorA = factorA;
    uint64_t factorACntPerCore = CeilDiv(unitA_.outer, blockDim);
    tilingData_->factorACntPerCore = factorACntPerCore;
    tilingData_->factorATotalCnt = unitA_.outer;

    tilingData_->ubFactorR = factorR;
    uint64_t factorRCntPerCore = CeilDiv(unitR_.outer, CeilDiv(blockDim, unitA_.outer));
    tilingData_->factorRCntPerCore = factorRCntPerCore;
    tilingData_->factorRTotalCnt = unitR_.outer;
    tilingData_->groupR = CeilDiv(unitR_.outer, factorRCntPerCore);
    OP_CHECK_IF(
        (memcpy_s(tilingData_->shape, sizeof(tilingData_->shape), shape, sizeof(tilingData_->shape)) != EOK),
        OP_LOGE(context_->GetNodeName(), "memcpy shape failed"), return );
    tilingData_->basicBlock = basicBlock_;
    tilingData_->resultBlock = resultBlock_;
    tilingData_->coreNum = static_cast<int32_t>(compileInfo_->vectorCoreNum);
    tilingData_->useNddma = IsUseNddma<Pattern>(shape);
    ComputeStride<Pattern>(shape);

    uint32_t realCore = CeilDiv(unitA_.outer, factorACntPerCore) * CeilDiv(unitR_.outer, factorRCntPerCore);
    context_->SetBlockDim(realCore);
}

template <class Pattern>
int32_t ReduceOpTiling::IsUseNddma(const uint64_t* shape)
{
    int32_t axis = cBlock_.axis;
    uint64_t dSize = ge::GetSizeByDataType(opInput_.inputDtype);
    uint64_t ubBlockSize = compileInfo_->ubBlockSize / dSize;
    if (shape[Pattern::Dim - 1] >= ubBlockSize) {
        // last dim 大于ubblock, 不做NDDMA
        return 0;
    }
    if ((Pattern::Dim - 1 - axis > CONST2) || (Pattern::Dim - 1 - axis == CONST2 && cBlock_.cacheLineStep != 1UL)) {
        // cacheline切分超过3维，或者等于三维时，最高维不为1。即cacheline有效切分维度超过2维
        return 1;
    }
    if (Pattern::TailA) {
        uint64_t factorA = tilingData_->ubFactorA;
        for (auto iA = unitA_.idx + AXES_STEP; iA < Pattern::Dim; iA += AXES_STEP) {
            factorA = factorA * shape[iA];
        }
        if (factorA > ubBlockSize) {
            // 转置后A轴乘积大于ubblock, 不做NDDMA
            return 0;
        }
    } else {
        uint64_t factorR = tilingData_->ubFactorR;
        for (auto iR = unitR_.idx + AXES_STEP; iR < Pattern::Dim; iR += AXES_STEP) {
            factorR = factorR * shape[iR];
        }
        if (factorR > ubBlockSize) {
            // 转置后R轴乘积大于ubblock, 不做NDDMA
            return 0;
        }
    }
    return 1;
}

template <class Pattern>
void ReduceOpTiling::ComputeStride(const uint64_t* shape)
{
    uint64_t s = 1UL;
    uint64_t ds = 1UL;
    for (int32_t dim = Pattern::Dim - 1; dim > -1; dim--) {
        tilingData_->stride[dim] = s;
        tilingData_->dstStride[dim] = ds;
        s *= shape[dim];
        if (IsAxisA<Pattern>(dim)) {
            ds *= shape[dim];
        }
    }
    double meanVar = static_cast<double>(1) / static_cast<double>(s / ds);
    tilingData_->outSize = ds;
    tilingData_->meanVar = static_cast<float>(meanVar);
}

template <class Pattern>
void ReduceOpTiling::SetTilingKey()
{
    uint64_t groupR = tilingData_->groupR;
    int32_t aCount = 0;
    int32_t rCount = 0;
    int32_t innerACount = 0;
    int32_t innerRCount = 0;
    if (groupR == 1UL) {
        // normal case
        aCount = (unitA_.idx - (Pattern::FirstA ? 0 : 1)) / AXES_STEP + 1;
        innerRCount = (unitR_.idx - (Pattern::FirstA ? 1 : 0)) / AXES_STEP + 1;
    } else {
        // group case
        aCount = (unitA_.idx - (Pattern::FirstA ? 0 : 1)) / AXES_STEP + 1;
        rCount = (unitR_.idx - (Pattern::FirstA ? 1 : 0)) / AXES_STEP + 1;
        rCount = rCount + aCount;
    }

    int32_t innerID = Pattern::TailA ? 0 : 1;
    tilingKey_.patternID = Pattern::ID * CONST10 + innerID;
    tilingKey_.loopARCount = static_cast<uint32_t>(aCount * CONST10 + rCount);
    tilingKey_.loopInnerARCount = static_cast<uint32_t>(innerACount * CONST10 + innerRCount);
    OP_LOGI(
        context_->GetNodeName(), "patternID:%u, loopARCount:%u, loopInnerARCount:%u", tilingKey_.patternID,
        tilingKey_.loopARCount, tilingKey_.loopInnerARCount);
}

void ReduceOpTiling::GetTilingKey(ReduceTilingKey& key)
{
    key = tilingKey_;
}

void ReduceOpTiling::CalcUserWorkSpace()
{
    size_t* workspaces = context_->GetWorkspaceSizes(1);
    uint64_t groupR = tilingData_->groupR;
    uint64_t outSize = tilingData_->outSize;
    uint64_t size = opDag_.maxInputBytes;
    if (groupR > 1UL) {
        workSpaceSize_ = compileInfo_->vectorCoreNum * CeilAlign(outSize * size, compileInfo_->cacheLineSize);
    }
    workspaces[0] = WORKSPACE_SIZE + workSpaceSize_;
}

// dispatch tiling with different pattern
ge::graphStatus ReduceOpTiling::DoTilingMatchPattern(uint64_t* shape, int32_t shapeSize)
{
    switch (shapeSize) {
        case CONST1:
            return ComputeTiling<__reducePattern::A>(shape);
        case CONST2:
            return ComputeTiling<__reducePattern::AR>(shape);
        case CONST3:
            return ComputeTiling<__reducePattern::ARA>(shape);
        case CONST4:
            return ComputeTiling<__reducePattern::ARAR>(shape);
        case CONST5:
            PadDimOne<__reducePattern::ARARA>(shape);
            return ComputeTiling<__reducePattern::ARARARARA>(shape);
        case CONST6:
            PadDimOne<__reducePattern::ARARAR>(shape);
            return ComputeTiling<__reducePattern::ARARARAR>(shape);
        case CONST7:
            PadDimOne<__reducePattern::ARARARA>(shape);
            return ComputeTiling<__reducePattern::ARARARARA>(shape);
        case CONST8:
            return ComputeTiling<__reducePattern::ARARARAR>(shape);
        case CONST9:
            return ComputeTiling<__reducePattern::ARARARARA>(shape);
        default:
            OP_LOGE(context_->GetNodeName(), "unsupport pattern");
            return ge::GRAPH_FAILED;
    }
}

} // namespace Base
} // namespace Ops
