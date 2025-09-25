/**
* Copyright (c) Huawei Technologies Co., Ltd. 2025. All rights reserved.
 * This file is a part of the CANN Open Software.
 * Licensed under CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 */
#include <gtest/gtest.h>
#include "op_common/log/log.h"

class TestOpsBaseLog : public ::testing::Test {
    protected:
    void SetUp() override {
    }
    void TearDown() override {
    }
};

TEST_F(TestOpsBaseLog, TestLog1)
{
    OP_LOGD("TestContent", "TestContent of value is %d", 1);
    OP_LOGI("TestContent", "TestContent of value is %d", 2);
    OP_LOGW("TestContent", "TestContent of value is %d", 3);
}