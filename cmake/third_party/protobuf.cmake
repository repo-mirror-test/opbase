# ----------------------------------------------------------------------------
# This program is free software, you can redistribute it and/or modify.
# Copyright (c) 2025 Huawei Technologies Co., Ltd.
# This file is a part of the CANN Open Software.
# Licensed under CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You may not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.
# ----------------------------------------------------------------------------

if(POLICY CMP0135)
    cmake_policy(SET CMP0135 NEW)
endif()

include(ExternalProject)
include(GNUInstallDirs)

set(PROTOBUF_SRC_DIR ${CMAKE_BINARY_DIR}/protobuf-src)
set(PROTOBUF_DL_DIR ${CMAKE_BINARY_DIR}/downloads)
if (BUILD_WITH_INSTALLED_DEPENDENCY_CANN_PKG_COMMUNITY)
set(REQ_URL "https://gitcode.com/cann-src-third-party/protobuf/releases/download/v3.13.0/protobuf-3.13.0.tar.gz")

  # 下载/解压 protobuf 源码
  ExternalProject_Add(protobuf_src
      URL               ${REQ_URL}
      DOWNLOAD_DIR      ${PROTOBUF_DL_DIR}
      SOURCE_DIR        ${PROTOBUF_SRC_DIR}
      PATCH_COMMAND patch -p1 < ${CMAKE_CURRENT_SOURCE_DIR}/cmake/third_party/protobuf_patch
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ""
      INSTALL_COMMAND ""
  )

  # 使用宿主机环境生成host_protoc
  set(PROTOBUF_HOST_DIR ${CMAKE_BINARY_DIR}/protobuf_host)
  ExternalProject_Add(protobuf_host_build
      DEPENDS protobuf_src
      SOURCE_DIR ${PROTOBUF_SRC_DIR}
      DOWNLOAD_COMMAND ""
      UPDATE_COMMAND ""
      CONFIGURE_COMMAND ${CMAKE_COMMAND}
          -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
          -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
          -DCMAKE_INSTALL_PREFIX=${PROTOBUF_HOST_DIR}
          -Dprotobuf_BUILD_TESTS=OFF
          -Dprotobuf_WITH_ZLIB=OFF
          <SOURCE_DIR>/cmake
      BUILD_COMMAND $(MAKE)
      INSTALL_COMMAND $(MAKE) install
      EXCLUDE_FROM_ALL TRUE
  )

else()

  set(TOP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../)
  set(SOURCE_DIR ${PROTOBUF_SRC_DIR})
  set(PROTOBUF_STATIC_PKG_DIR ${CMAKE_BINARY_DIR}/protobuf_static)
  ExternalProject_Add(protobuf_src
      DOWNLOAD_COMMAND ""
      COMMAND tar -zxf ${OPEN_SOURCE_DIR}/protobuf/protobuf-all-25.1.tar.gz --strip-components 1 -C ${SOURCE_DIR}
      COMMAND tar -zxf ${OPEN_SOURCE_DIR}/abseil-cpp/abseil-cpp-20230802.1.tar.gz --strip-components 1 -C ${SOURCE_DIR}/third_party/abseil-cpp
      PATCH_COMMAND cd ${SOURCE_DIR} && patch -p1 < ${TOP_DIR}/cmake/function/protobuf_25.1_change_version.patch && cd ${SOURCE_DIR}/third_party/abseil-cpp && patch -p1 < ${TOP_DIR}/cmake/function/protobuf-hide_absl_symbols.patch
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ""
      INSTALL_COMMAND ""
  )

  ExternalProject_Add(protobuf_static_build
    DEPENDS protobuf_src
    SOURCE_DIR ${PROTOBUF_SRC_DIR}
    DOWNLOAD_COMMAND ""
    UPDATE_COMMAND ""
    CONFIGURE_COMMAND ${CMAKE_COMMAND}
        -G ${CMAKE_GENERATOR}
        -DCMAKE_TOOLCHAIN_FILE=${toolchain_file}
        -DCMAKE_INSTALL_LIBDIR=lib
        -DBUILD_SHARED_LIBS=OFF
        -Dprotobuf_WITH_ZLIB=OFF
        -DLIB_PREFIX=base_ascend_
        -DCMAKE_SKIP_RPATH=TRUE
        -Dprotobuf_BUILD_TESTS=OFF
        -DCMAKE_CXX_FLAGS=${PROTOBUF_CXXFLAGS}
        -DCMAKE_INSTALL_PREFIX=${PROTOBUF_STATIC_PKG_DIR}
        -Dprotobuf_BUILD_PROTOC_BINARIES=OFF
        <SOURCE_DIR>
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
    EXCLUDE_FROM_ALL TRUE
  )

  set(PROTOBUF_HOST_DIR ${CMAKE_BINARY_DIR}/protobuf_host)
  ExternalProject_Add(protobuf_host_build
      DEPENDS protobuf_src
      SOURCE_DIR ${PROTOBUF_SRC_DIR}
      DOWNLOAD_COMMAND ""
      UPDATE_COMMAND ""
      CONFIGURE_COMMAND ${CMAKE_COMMAND}
          -DCMAKE_INSTALL_PREFIX=${PROTOBUF_HOST_DIR}
          -Dprotobuf_BUILD_TESTS=OFF
          -Dprotobuf_WITH_ZLIB=OFF
          <SOURCE_DIR>
      BUILD_COMMAND $(MAKE)
      INSTALL_COMMAND $(MAKE) install
      EXCLUDE_FROM_ALL TRUE
  )

endif()

add_executable(host_protoc IMPORTED)
set_target_properties(host_protoc PROPERTIES
    IMPORTED_LOCATION ${PROTOBUF_HOST_DIR}/bin/protoc
)
add_dependencies(host_protoc protobuf_host_build)

# 使用设备端工具链生成 ascend_protobuf_static
if("x${PRODUCT_SIDE}" STREQUAL "xdevice")
  message(STATUS "PRODUCT_SIDE is device")
  if (MINRC)
    set(CMAKE_CXX_COMPILER_ /usr/bin/aarch64-linux-gnu-g++)
    set(CMAKE_C_COMPILER_ /usr/bin/aarch64-linux-gnu-gcc)
  else()
    set(CMAKE_CXX_COMPILER_ ${TOOLCHAIN_DIR}/bin/aarch64-target-linux-gnu-g++)
    set(CMAKE_C_COMPILER_ ${TOOLCHAIN_DIR}/bin/aarch64-target-linux-gnu-gcc)
  endif()
else()
  set(CMAKE_CXX_COMPILER_ ${CMAKE_CXX_COMPILER})
  set(CMAKE_C_COMPILER_ ${CMAKE_C_COMPILER})
endif()
set(PROTOBUF_STATIC_PKG_DIR ${CMAKE_BINARY_DIR}/protobuf_static)

set(protobuf_CXXFLAGS "-Wno-maybe-uninitialized -Wno-unused-parameter -fPIC -fstack-protector-all -D_FORTIFY_SOURCE=2 -D_GLIBCXX_USE_CXX11_ABI=1 -O2 -Dgoogle=ascend_private")
set(protobuf_LDFLAGS "-Wl,-z,relro,-z,now,-z,noexecstack")

if (BUILD_WITH_INSTALLED_DEPENDENCY_CANN_PKG_COMMUNITY)
  ExternalProject_Add(protobuf_static_build
    DEPENDS protobuf_src
    SOURCE_DIR ${PROTOBUF_SRC_DIR}
    DOWNLOAD_COMMAND ""
    UPDATE_COMMAND ""
    CONFIGURE_COMMAND ${CMAKE_COMMAND}
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER_}
        -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER_}
        -DCMAKE_INSTALL_PREFIX=${PROTOBUF_STATIC_PKG_DIR}
        -DCMAKE_INSTALL_LIBDIR=lib
        -DCMAKE_INSTALL_CMAKEDIR=cmake/protobuf
        -Dprotobuf_BUILD_TESTS=OFF
        -Dprotobuf_WITH_ZLIB=OFF
        -DLIB_PREFIX=base_ascend_
        -DCMAKE_CXX_FLAGS=${protobuf_CXXFLAGS}
        -DCMAKE_EXE_LINKER_FLAGS=${protobuf_LDFLAGS}
        -DCMAKE_SHARED_LINKER_FLAGS=${protobuf_LDFLAGS}
        <SOURCE_DIR>/cmake
    BUILD_COMMAND $(MAKE)
    INSTALL_COMMAND $(MAKE) install
    EXCLUDE_FROM_ALL TRUE
  )
endif()

add_library(ascend_protobuf_static_lib STATIC IMPORTED)
set_target_properties(ascend_protobuf_static_lib PROPERTIES
    IMPORTED_LOCATION ${PROTOBUF_STATIC_PKG_DIR}/lib/libbase_ascend_protobuf.a
)

add_library(ascend_protobuf_static INTERFACE)
target_include_directories(ascend_protobuf_static INTERFACE ${PROTOBUF_STATIC_PKG_DIR}/include)
target_link_libraries(ascend_protobuf_static INTERFACE ascend_protobuf_static_lib)
add_dependencies(ascend_protobuf_static protobuf_static_build)