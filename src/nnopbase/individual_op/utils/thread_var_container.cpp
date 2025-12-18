/**
 * Copyright (c) 2025 Huawei Technologies Co., Ltd.
 * This program is free software, you can redistribute it and/or modify it under the terms and conditions of
 * CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 */

#include "thread_var_container.h"
#include <thread>
#include "acl/acl_base.h"
#include "acl/acl_rt.h"
#include "op_def.h"
#include "indv_lib_wrapper.h"

static thread_local int32_t curDeviceId;
static thread_local bool getDeviceFlag = false;
static thread_local uint32_t mc2RankId = 0U;
namespace nnopbase {
namespace utils {
aclnnStatus ThreadVarContainer::GetCurDeviceIdInThread(int32_t &deviceId)
{
    if (getDeviceFlag) {
        deviceId = curDeviceId;
        OP_LOGD("Device Id for this thread is %d", deviceId);
        return OK;
    }
    CHECK_RET_CODE(aclrtGetDevice(&curDeviceId), "aclrtGetDevice failed.");
    if (curDeviceId >= op::MAX_DEV_NUM) {
        OP_LOGE(ACLNN_ERR_INNER, "Invalid DeviceId %d. Max DeviceID: %d", curDeviceId, op::MAX_DEV_NUM);
        return ACLNN_ERR_INNER;
    }
    deviceId = curDeviceId;
    getDeviceFlag = true;
    OP_LOGD("Device Id for this thread is %d", deviceId);
    return OK;
}

aclnnStatus ThreadVarContainer::SetCurMc2RankIdInThread(HcclComm commHandle)
{
    uint32_t rankId;
    CHECK_COND(nnopbase::IndvHcclWrapper::GetInstance().HcclGetRankId(commHandle, &rankId) == OK,
        ACLNN_ERR_INNER, "Failed to invode the HcclGetRankId function of the hccl module. HcclCom = %p", commHandle);
    mc2RankId = rankId;
    return OK;
}


uint32_t ThreadVarContainer::GetCurMc2RankIdInThread()
{
    return mc2RankId;
}
}
}
