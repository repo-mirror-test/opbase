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
 * \file tiling_register.h
 * \brief provide users with the ability to register tiling callback function with diffrent soc versions.
 */

#ifndef OP_COMMON_OP_HOST_TILING_REGISTER_H
#define OP_COMMON_OP_HOST_TILING_REGISTER_H

#include <map>
#include <initializer_list>
#include "register/op_impl_registry.h"
#include "exe_graph/runtime/tiling_context.h"
#include "exe_graph/runtime/tiling_parse_context.h"
#include "platform/platform_ascendc.h"
#include "log.h"

namespace Ops {
namespace Base {

using SocVer = platform_ascendc::SocVersion;

template <typename T>
class Singleton {
public:
    static T& Instance() 
    {
        static T instance;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
protected:
    Singleton() = default;
};

template <typename OpTilingSingleton>
class OpTilingRegister : public gert::OpImplRegisterV2 {
public:
    explicit OpTilingRegister(const ge::char_t* opType) : gert::OpImplRegisterV2(opType) {}

    OpTilingRegister<OpTilingSingleton>& TilingWithSocVersion(std::initializer_list<SocVer> socVerList,
                                                              TilingKernelFunc tilingFunc)
    {
        for (const SocVer socVer : socVerList) {
            OpTilingSingleton::Instance().RegTiling(socVer, tilingFunc);
        }
        return *this;
    }

    OpTilingRegister<OpTilingSingleton>& Tiling(TilingKernelFunc tilingFunc)
    {
        OpTilingSingleton::Instance().RegDefaultTiling(tilingFunc);
        return *this;
    }

    template <typename CompileInfo>
    OpTilingRegister<OpTilingSingleton>& TilingParse(TilingParseFunc tilingParseFunc)
    {
        gert::OpImplRegisterV2::TilingParse<CompileInfo>(DispatchTilingParse);
        OpTilingSingleton::Instance().RegDefaultTilingParse(tilingParseFunc);
        return *this;
    }

    OpTilingRegister<OpTilingSingleton>& TilingInputsDataDependency(std::initializer_list<int32_t> inputs)
    {
        gert::OpImplRegisterV2::TilingInputsDataDependency(inputs);
        return *this;
    }

    OpTilingRegister<OpTilingSingleton>& TilingInputsDataDependency(std::initializer_list<int32_t> inputs,
                                                                std::initializer_list<gert::TilingPlacement> placements)
    {
        gert::OpImplRegisterV2::TilingInputsDataDependency(inputs, placements);
        return *this;
    }

    OpTilingRegister<OpTilingSingleton>& GenSimplifiedKey(GenSimplifiedKeyKernelFunc genSimplifiedKeyFunc)
    {
        gert::OpImplRegisterV2::GenSimplifiedKey(genSimplifiedKeyFunc);
        return *this;
    }

public:
    static ge::graphStatus DispatchTilingParse(gert::TilingParseContext* context)
    {
        auto platformInfoPtr = context->GetPlatformInfo();
        OP_CHECK_NULL_WITH_CONTEXT(context, platformInfoPtr);
        auto socVer = platform_ascendc::PlatformAscendC(platformInfoPtr).GetSocVersion();
        return OpTilingSingleton::Instance().DoTilingParse(socVer, context);
    }
};

#define OP_TILING_REG(opType)                                                                                          \
    class OpTilingSingleton##opType : public Singleton<OpTilingSingleton##opType> {                                    \
        friend class Singleton<OpTilingSingleton##opType>;                                                             \
    public:                                                                                                            \
        using OpTilingFunc = gert::OpImplRegisterV2::TilingKernelFunc;                                                 \
        using OpTilingParseFunc = gert::OpImplRegisterV2::TilingParseFunc;                                             \
    public:                                                                                                            \
        void RegTiling(SocVer socVer, OpTilingFunc tilingFunc) {tilingMap_[socVer] = tilingFunc;}                      \
        void RegDefaultTiling(OpTilingFunc tilingFunc) {defaultTilingFunc_ = tilingFunc;}                              \
        void RegDefaultTilingParse(OpTilingParseFunc tilingParseFunc) {defaultTilingParseFunc_ = tilingParseFunc;}     \
        ge::graphStatus DoTiling(SocVer socVer, gert::TilingContext* context)                                          \
        {                                                                                                              \
            const auto iter = tilingMap_.find(socVer);                                                                 \
            if (iter != tilingMap_.end()) {                                                                            \
                return iter->second(context);                                                                          \
            }                                                                                                          \
            if (defaultTilingFunc_) {                                                                                  \
                return defaultTilingFunc_(context);                                                                    \
            }                                                                                                          \
            return ge::GRAPH_FAILED;                                                                                   \
        }                                                                                                              \
        ge::graphStatus DoTilingParse(SocVer socVer, gert::TilingParseContext* context)                                \
        {                                                                                                              \
            const auto iter = tilingMap_.find(socVer);                                                                 \
            if (iter != tilingMap_.end()) {                                                                            \
                return ge::GRAPH_SUCCESS;                                                                              \
            }                                                                                                          \
            if (defaultTilingFunc_ && defaultTilingParseFunc_) {                                                       \
                return defaultTilingParseFunc_(context);                                                               \
            }                                                                                                          \
            return ge::GRAPH_FAILED;                                                                                   \
        }                                                                                                              \
    private:                                                                                                           \
        OpTilingSingleton##opType() = default;                                                                         \
    private:                                                                                                           \
        std::map<SocVer, OpTilingFunc> tilingMap_;                                                                     \
        OpTilingFunc defaultTilingFunc_ = nullptr;                                                                     \
        OpTilingParseFunc defaultTilingParseFunc_ = nullptr;                                                           \
    };                                                                                                                 \
    static OpTilingRegister<OpTilingSingleton##opType> opTilingRegister##opType = [](const char* opName) {             \
        OpTilingRegister<OpTilingSingleton##opType> opTilingRegister(opName);                                          \
        auto dispatchTilingFunc = [](gert::TilingContext* context) {                                                   \
            auto platformInfoPtr = context->GetPlatformInfo();                                                         \
            OP_CHECK_NULL_WITH_CONTEXT(context, platformInfoPtr);                                                      \
            auto socVer = platform_ascendc::PlatformAscendC(platformInfoPtr).GetSocVersion();                          \
            return OpTilingSingleton##opType::Instance().DoTiling(socVer, context);                                    \
        };                                                                                                             \
        opTilingRegister.OpImplRegisterV2::Tiling(dispatchTilingFunc);                                                 \
        return opTilingRegister;                                                                                       \
    } (#opType)

} // namespace Base
} // namespace Ops
#endif // #define OP_COMMON_OP_HOST_TILING_REGISTER_H