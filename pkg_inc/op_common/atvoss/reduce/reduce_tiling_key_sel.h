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
 * \file reduce_tiling_key_sel.h
 * \brief reduce tiling key select
 */

#ifndef _REDUCE_TILING_KEY_SEL_H_
#define _REDUCE_TILING_KEY_SEL_H_

#include "reduce_tiling_key_decl.h"
namespace Ops {
namespace Base {
ASCENDC_TPL_SEL(
    // Empty
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_EMPTY()),
    // A
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_A()),
    // AR
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_AR_NORMAL()),
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_AR_GROUP()),
    // ARA
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARA_NORMAL()),
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARA_GROUP()),
    // ARAR
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARAR_NORMAL()),
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARAR_GROUP()),
    // ARARARAR
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARARARAR_NORMAL()),
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARARARAR_GROUP()),
    // ARARARARA
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARARARARA_NORMAL()),
    ASCENDC_TPL_ARGS_SEL(REDUCE_TPL_KEY_SEL_ARARARARA_GROUP())
);
} // namespace Base
} // namespace Ops
#endif