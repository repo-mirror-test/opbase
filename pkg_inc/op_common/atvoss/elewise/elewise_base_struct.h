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

#ifndef ELEWISE_BASE_STRUCT_H_
#define ELEWISE_BASE_STRUCT_H_

/*!
 * \file elewise_base_struct.h
 * \brief
 */
#include <cstdint>

namespace Ops {
namespace Base {
constexpr uint64_t ELEWISE_MAX_SCALAR_BYTES = 16;
constexpr uint64_t EIGHT_BYTES = 8;
constexpr uint64_t SIXTEN_BYTES = 16;

struct EleBaseTilingData {
    uint64_t scheMode;
    int64_t dim0;
    int64_t blockFormer;
    int64_t blockNum;
    int64_t ubFormer;
    int64_t ubLoopOfFormerBlock;
    int64_t ubLoopOfTailBlock;
    int64_t ubTailOfFormerBlock;
    int64_t ubTailOfTailBlock;
    int64_t elemNum;

    char scalarData[ELEWISE_MAX_SCALAR_BYTES];
};

struct EleBaseTilingData24B {
    int64_t dim0;
    int32_t coreNum;
    int32_t ubFormer;
    char scalarData[EIGHT_BYTES];
};

struct EleBaseTilingData32B {
    int64_t dim0;
    int32_t coreNum;
    int32_t ubFormer;
    char scalarData[SIXTEN_BYTES];
};

using EleBaseTilingDataV2 = EleBaseTilingData;

} // namespace Base
} // namespace Ops
#endif // ELEWISE_BASE_STRUCT_H_