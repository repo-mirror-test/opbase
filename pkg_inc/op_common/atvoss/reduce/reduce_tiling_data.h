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
 * \file reduce_tiling_data.h
 * \brief reduce tiling data
 */

#ifndef _REDUCE_TILING_DATA_H_
#define _REDUCE_TILING_DATA_H_

#include "reduce_util.h"
namespace Ops {
namespace Base {
struct ReduceOpTilingData {
    uint64_t factorACntPerCore;
    uint64_t factorATotalCnt;
    uint64_t ubFactorA;
    uint64_t factorRCntPerCore;
    uint64_t factorRTotalCnt;
    uint64_t ubFactorR;
    uint64_t groupR;
    uint64_t outSize;
    uint64_t basicBlock;
    uint64_t resultBlock;
    int32_t coreNum;
    int32_t useNddma;
    float meanVar;
    uint64_t shape[ReduceOpTmpl::MAX_DIM] = {0};
    uint64_t stride[ReduceOpTmpl::MAX_DIM] = {0};
    uint64_t dstStride[ReduceOpTmpl::MAX_DIM] = {0};
};
} // namespace Base
} // namespace Ops
#endif