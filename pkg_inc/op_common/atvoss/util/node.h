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
 * \file node.h
 * \brief
 */
#ifndef UTIL_NODE_H_
#define UTIL_NODE_H_

#include "aux1.h"

namespace Ops {
namespace Base {

/*
* Check `CopyInBrc` node
*/
template <class Target, class T>
struct CheckCopyInBrc {
  constexpr static bool Value = Vec::IsCopyInBrcOp<typename T::Fun>::Value;
};

/*
* Check `VecBrc` node
*/
template <class Target, class T>
struct CheckVecBrc {
  constexpr static bool Value = Vec::IsVecBrcOp<typename T::Fun>::Value;
};

/*
* 统计首个计算节点之前，从GM搬运数据的次数
* 模板参数：
*   1. FunList:   计算顺序列表
*   2. start：    递归调用时，当前节点索引
*   3. Acc:       存放已经统计到的搬运Bind
*/
template <typename FunList, int start = 0, typename Acc = Elems<>>
constexpr int GetCopyInCountBeforeFirstCalcNode() {
  /**
   * 获取首个计算节点前，搬入次数。不需要对Cast做特殊处理
   * 但需要跳过 ScalarOp 节点
   */
  if constexpr (start < FunList::Size) {
    using func = typename FunList::template At<start>;
    if constexpr (func::IsScalarOp) {
      return GetCopyInCountBeforeFirstCalcNode<FunList, start + 1, Acc>();
    } else if constexpr (Vec::IsCopyInOp<typename func::Fun>::Value) {
      using Next = typename Acc::template Append<func>;
      return GetCopyInCountBeforeFirstCalcNode<FunList, start + 1, Next>();
    } else if constexpr (__aux::IsSameTemplateType<typename func::Fun, Vec::CopyOut>::Value) {
      return GetCopyInCountBeforeFirstCalcNode<FunList, start + 1, Acc>();
    } else {
      return Acc::Size;
    }
  }
  return Acc::Size;
};

/*
 * Get max `Pos` of Holders.
*/
template <typename Holders, int32_t at = 0, int32_t maxPos = -1>
constexpr int32_t GetMaxPosOfHolders() {
  if constexpr (at < Holders::Size) {
    using Holder = typename Holders::template At<at>;
    constexpr int32_t pos = Holder::Pos;
    constexpr int32_t curMax = pos > maxPos ? pos : maxPos;
    return GetMaxPosOfHolders<Holders, at + 1, curMax>();
  } else {
    return maxPos;
  }
}

/*
* To collect node information in @FunList
*/
template <typename FunList, typename OutList,
          bool supportBrc = true>
struct DagNodeInfo {
public:
  // Save input template argument @FunList
  using SavedFunList = FunList;

#ifdef __ATP_UT__
  using SavedOutList = OutList;
#endif

  // Collect Input/Output PlaceHolders.
  // The result is Elems<PlaceHolder<In0>, PlaceHolder<In1>, ...>
  using InHolders = typename __aux::GetInHolder<FunList>::Type;
  using OutHolders = typename __aux::GetOutHolder<FunList>::Type;

  // Collect CopyInBrc & VecBrc Nodes.
  using CopyBrcNodes = typename __aux::Condition<supportBrc,
    typename FunList::template Filter<CheckCopyInBrc>, Elems<> >;
  using VecBrcNodes =  typename  __aux::Condition<supportBrc,
    typename FunList::template Filter<CheckVecBrc>, Elems<> >;

  // Collect InScalarHolders (Scalar tensor)
  using InScalarHolders = typename InHolders::template Filter<__aux::TypeIsInScalarHolder>::Unique;

  // Collect Scalar operations in @FunList
  using ScalarOpNodes = typename FunList::template Filter<__aux::TypeIsScalarBind>;

  // Input/Output GM size
  constexpr static uint32_t InputSize = InHolders::Size;
  constexpr static uint32_t OutputSize = OutHolders::Size;

  // Max `Pos` of InHolders. NOTE: -1 if InHolders is empty.
  // REMEMBER: `InputMaxPos + 1` may NOT equal to InputSize if PlaceHolder::In is NOT contiguous.
  constexpr static int32_t InputMaxPos = GetMaxPosOfHolders<InHolders>();

  // CopyInBrc & VecBrc size
  constexpr static uint32_t CopyBrcSize = CopyBrcNodes::Size;
  constexpr static uint32_t VecBrcSize = VecBrcNodes::Size;

  // InScalarHolders size & Input GM size without InScalarHolders
  constexpr static uint32_t TensorScalarSize = InScalarHolders::Size;
  constexpr static uint32_t InputSizeWoScalar = InputSize - TensorScalarSize;

  // Scalar
  using Vars = typename __aux::GetVars<FunList>::Type;
  using VarType = typename Vars::template Export<Placeholder::VarTypeAux>::Type;
  constexpr static uint32_t VarSize = Vars::Size;
  // ScalarOpType
  using ScalarOpType = typename ScalarOpNodes::template Export<Placeholder::VarTypeAux>::Type;

  // Get index of VecBrc node in @VecBrcNodes if it depends on the CopyIn node @InFun,
  // otherwise return -1
  template <typename InFun>
  constexpr static int VecBrcIdxDepend = __aux::GetDependByVecBrcIdx<VecBrcNodes, InFun>();

  // Max alive node information for normal scenario.
  constexpr static auto MaxAliveNodeInfo = __aux::MaxAliveNode<FunList, OutList>(__aux::DagMaxAliveInfo());

private:
  // Re-calculate max alive node information for CacheBrc scenario.
  constexpr static __aux::DagMaxAliveInfo GetAliveNodeInfoForCacheBrc() {
    if constexpr (CopyBrcSize == 0 && VecBrcSize == 0) {
      return MaxAliveNodeInfo;
    } else {
      return __aux::MaxAliveNode<FunList, OutList,
                                 typename CopyBrcNodes::template Union<VecBrcNodes>
                                >(__aux::DagMaxAliveInfo());
    }
  }

public:
  // Max alive node information for CacheBrc scenario.
  constexpr static auto MaxAliveNodeInfoForCacheBrc = GetAliveNodeInfoForCacheBrc();

  // Count of CopyIn before first Vector calculation node
  constexpr static uint32_t GMCountBeforeFirstCalcNode = GetCopyInCountBeforeFirstCalcNode<FunList>();

private:
  // Get max alive node size according to the scenario.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetMaxAliveNodeSize() {
    if constexpr (use_nddma && cache_brc) {
      return MaxAliveNodeInfoForCacheBrc.aliveNodeNoCopyBrcTmpBuf;
    } else if constexpr (use_nddma && !cache_brc) {
      return MaxAliveNodeInfo.aliveNodeNoCopyBrcTmpBuf;
    } else if constexpr (!use_nddma && cache_brc) {
      return MaxAliveNodeInfoForCacheBrc.aliveNode;
    } else { // !use_nddma && !cache_brc
      return MaxAliveNodeInfo.aliveNode;
    }
  }

public:
  // Get temp calculation node (without CopyIn/Out) size according to the scenario.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetTempCalcNodeSize() {
    if constexpr (use_nddma && cache_brc) {
      return MaxAliveNodeInfoForCacheBrc.tempCalcNodeNoCopyBrcTmpBuf;
    } else if constexpr (use_nddma && !cache_brc) {
      return MaxAliveNodeInfo.tempCalcNodeNoCopyBrcTmpBuf;
    } else if constexpr (!use_nddma && cache_brc) {
      return MaxAliveNodeInfoForCacheBrc.tempCalcNode;
    } else { // !use_nddma && !cache_brc
      return MaxAliveNodeInfo.tempCalcNode;
    }
  }

  // Get the count of CopyOut node before first CopyOut node. Normally it is 1.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetFirstCopyOutNodeGMCount() {
    constexpr uint32_t maxAliveNodeSize = GetMaxAliveNodeSize<use_nddma, cache_brc>();
    return maxAliveNodeSize > GMCountBeforeFirstCalcNode ? 1 : 0;
  }

  // Get the count of L1/L2 MTE3 according to the scenario.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetLvl12Mte3Count() {
    // all CopyIn connects to CopyOut, so no MTE3 is needed.
    // NOTE: Scenario [some CopyIn connects to CopyOut, some not] is not considered.
    return FunList::Size == (InputSizeWoScalar + ScalarOpNodes::Size + OutList::Size) ? 0 : OutList::Size;
  }

  // Get the count of L1 temp calculation nodes.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetLvl1TmpSize() {
    constexpr uint32_t maxAliveNodeSize = GetMaxAliveNodeSize<use_nddma, cache_brc>();
    constexpr uint32_t tempCalcNodeSize = GetTempCalcNodeSize<use_nddma, cache_brc>();
    return tempCalcNodeSize > 0 ? (
            maxAliveNodeSize > InputSizeWoScalar ? maxAliveNodeSize - InputSizeWoScalar : 0
          ) : 0;
  }

  // Get the count of L0 temp calculation nodes.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetLvl0TmpSize() {
    constexpr uint32_t maxAliveNodeSize = GetMaxAliveNodeSize<use_nddma, cache_brc>();
    constexpr uint32_t firstCopyOutNodeGMCount = GetFirstCopyOutNodeGMCount<use_nddma, cache_brc>();
    return maxAliveNodeSize - (GMCountBeforeFirstCalcNode + firstCopyOutNodeGMCount);
  }

  // Get the total count of L0 buffer.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetBufferNumLevel0() {
    constexpr uint32_t maxAliveNodeSize = GetMaxAliveNodeSize<use_nddma, cache_brc>();
    constexpr uint32_t firstCopyOutNodeGMCount = GetFirstCopyOutNodeGMCount<use_nddma, cache_brc>();
    return maxAliveNodeSize + GMCountBeforeFirstCalcNode + firstCopyOutNodeGMCount;
  }

  // Get the total count of L1 buffer.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetBufferNumLevel1() {
    // 2 means ping-pong
    return GetLvl1TmpSize<use_nddma, cache_brc>() + \
            InputSizeWoScalar * 2 + \
            GetLvl12Mte3Count<use_nddma, cache_brc>() * 2;
  }

  // Get the total count of L2 buffer.
  template <bool use_nddma = true, bool cache_brc = false>
  __aicore__ constexpr static uint32_t GetBufferNumLevel2() {
    constexpr uint32_t tempCalcNodeSize = GetTempCalcNodeSize<use_nddma, cache_brc>();
    constexpr uint32_t lvl12Mte3Count = GetLvl12Mte3Count<use_nddma, cache_brc>();
    // 2 means ping-pong
    return tempCalcNodeSize + InputSizeWoScalar * 2 + lvl12Mte3Count * 2;
  }
};

} // namespace Base
} // namespace Ops
#endif // UTIL_NODE_H_
