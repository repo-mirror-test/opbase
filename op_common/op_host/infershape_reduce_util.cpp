/**
 * This program is free software, you can redistribute it and/or modify it.
 * Copyright (c) 2025 Huawei Technologies Co., Ltd.
 * This file is a part of the CANN Open Software.
 * Licensed under CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 */

/*!
 * \file infershape_reduce_util.cpp
 * \brief
 */

#include "op_common/log/log.h"
#include "op_common/op_host/util/shape_util.h"
#include "op_common/op_host/infershape_reduce_util.h"

namespace Ops {
namespace Base {
template <typename T>
static ge::graphStatus ReduceDimsWithKeepDims(
    const gert::Shape *xShape, const T *axesDims, int32_t axesSize, gert::Shape *outputShape)
{
    T dimNum = xShape->GetDimNum();
    const bool isScalar = xShape->GetDimNum() == 0;
    dimNum = isScalar ? 1 : dimNum;
    *outputShape = *xShape;
    for (int32_t i = 0; i < axesSize; i++) {
        OP_CHECK_IF((!CheckAxisBounds<T, T>(dimNum, axesDims[i])),
            OP_LOGE("reduce", "axesDims is invalid"),
            return ge::GRAPH_FAILED);
        if (isScalar) {
            // no need to update output shape, when input is scalar
            continue;
        }
        T dim = axesDims[i] < 0 ? axesDims[i] + dimNum : axesDims[i];
        outputShape->SetDim(dim, 1);
    }
    OP_LOGD("ReduceDimsWithKeepDims", "after reduce output shape is %s.", ToString(*outputShape).c_str());
    return ge::GRAPH_SUCCESS;
}

template <typename T>
static ge::graphStatus ReduceDimsWithoutKeepDims(
    const gert::Shape *xShape, const T *axesDims, int32_t axesSize, gert::Shape *outputShape)
{
    T dimNum = xShape->GetDimNum();
    outputShape->SetDimNum(0);
    for (T j = 0; j < dimNum; j++) {
        bool reduceFlag = false;
        for (int32_t i = 0; i < axesSize; i++) {
            OP_CHECK_IF((!CheckAxisBounds<T, T>(dimNum, axesDims[i])),
                OP_LOGE("reduce", "axesDims is invalid"),
                return ge::GRAPH_FAILED);
            T dim = axesDims[i] < 0 ? axesDims[i] + dimNum : axesDims[i];
            if (dim == j) {
                reduceFlag = true;
                break;
            }
        }
        if (!reduceFlag) {
            outputShape->AppendDim(xShape->GetDim(j));
        }
    }

    OP_LOGD("ReduceDimsWithoutKeepDims", "after reduce output shape is %s.", ToString(*outputShape).c_str());
    return ge::GRAPH_SUCCESS;
}

template <typename T>
static ge::graphStatus ReduceDims(const gert::Shape *xShape, const gert::Tensor *axesTensor, int32_t axesSize,
    const bool keepDims, gert::Shape *outputShape)
{
    const T *axesDims = axesTensor->GetData<T>();
    if (keepDims) {
        return ReduceDimsWithKeepDims<T>(xShape, axesDims, axesSize, outputShape);
    }
    return ReduceDimsWithoutKeepDims<T>(xShape, axesDims, axesSize, outputShape);
}

// Do infershape for OP which is single-input single-output and in-shape equal out-shape.
ge::graphStatus InferShape4Reduce(gert::InferShapeContext *context)
{
    auto inShape = context->GetInputShape(0);
    OP_CHECK_NULL_WITH_CONTEXT(context, inShape);
    auto axesTensor = context->GetInputTensor(1);
    OP_CHECK_NULL_WITH_CONTEXT(context, axesTensor);
    auto outShape = context->GetOutputShape(0);
    OP_CHECK_NULL_WITH_CONTEXT(context, outShape);
    auto attrs = context->GetAttrs();
    OP_CHECK_NULL_WITH_CONTEXT(context, attrs);

    const bool *keepDims = attrs->GetAttrPointer<bool>(0);
    OP_CHECK_NULL_WITH_CONTEXT(context, keepDims);

    auto axesSize = static_cast<int32_t>(axesTensor->GetShapeSize());

    OP_CHECK_IF(
        axesSize < 0, OP_LOGE(context->GetNodeName(), "axes num cannot be less than 0!"), return ge::GRAPH_FAILED);

    if (axesSize == 0) {
        *outShape = *inShape;
        OP_LOGD(context->GetNodeName(), "axes is empty tensor, will ignore infer, set output shape = input shape");
        return ge::GRAPH_SUCCESS;
    }

    auto dtype = axesTensor->GetDataType();
    OP_CHECK_IF(dtype != ge::DT_INT32 && dtype != ge::DT_INT64,
        OP_LOGE(context->GetNodeName(), "axes datatype %s must in (int32, int64)", ToString(dtype).c_str()),
        return ge::GRAPH_FAILED);
    if (dtype == ge::DT_INT32) {
        return ReduceDims<int32_t>(inShape, axesTensor, axesSize, *keepDims, outShape);
    }
    return ReduceDims<int64_t>(inShape, axesTensor, axesSize, *keepDims, outShape);
}
}  // namespace Base
}  // namespace Ops
