/**
 * Copyright (c) 2025 Huawei Technologies Co., Ltd.
 * This program is free software, you can redistribute it and/or modify it under the terms and conditions of
 * CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 */

#ifndef BROADCAST_SCH_H_
#define BROADCAST_SCH_H_

#include "kernel_operator.h"
#include "broadcast_sch_nddma.h"
#include "broadcast_sch_one_dim.h"
#include "broadcast_sch_ub_broadcast.h"
#include "broadcast_base_struct.h"

namespace Ops {
namespace Base {

/*
  算子接口模板化
  scheMode 模板内部的tilingkey
*/
// 模板实现
template <uint64_t schMode, class BrcDag> class BroadcastSch {
public:
    __aicore__ inline explicit BroadcastSch(GM_ADDR& tmpTiling)
        : tiling(tmpTiling)
    {}

    template <class... Args>
    __aicore__ inline void Process(Args... args)
    {
        TPipe pipe;
        REGISTER_TILING_DEFAULT(BroadcastFakeTilingData);
        if constexpr (schMode == 1) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastNddmaSch<BrcDag, false> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 2) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastNddmaSch<BrcDag, true> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 101) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastUbSch<BrcDag, 1> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 102) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastUbSch<BrcDag, 2> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 103) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastUbSch<BrcDag, 3> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 104) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastUbSch<BrcDag, 4> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 109) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastBaseTilingData<BrcDag>, tilingData, tiling);
            BroadcastUbSch<BrcDag, -1> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        } else if constexpr (schMode == 201) {
            GET_TILING_DATA_WITH_STRUCT(BroadcastOneDimTilingData, tilingData, tiling);
            BroadcastOneDimSch<BrcDag> sch(&tilingData); // 获取Schedule
            sch.Init(&pipe, args...);
            sch.Process();
        }
    }

public:
    GM_ADDR tiling;
};
} // namespace Base
} // namespace Ops
#endif // BROADCAST_SCH_H_
