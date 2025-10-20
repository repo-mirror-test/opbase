# 项目目录

详细目录层级介绍如下：

```
├── aicpu_common                                        # aicpu公共函数实现
├── cmake                                               # 项目工程编译目录
│   ├── third_party                                     # 项目依赖的第三方相关编译配置目录
│   ├── aarch64-hcc-toolchain.cmake                     # 项目工程编译工具链配置文件
│   ├── config.cmake                                    # 项目工程编译选项配置文件    
│   ├── func.cmake                                      # 项目工程编译protobuf文件
│   ├── intf_pub_linux.cmake                            # 项目工程编译宏、链接库等相关配置文件
│   ├── makeself.cmake                                  # 项目工程自定义makeself打包文件
│   ├── package.cmake                                   # 项目工程编译打包安装相关配置文件
│   ├── Third_Party_Open_Source_Software_List.yaml      # 项目依赖的第三方软件库清单
│   └── variables.cmake                                 # 项目工程编译参数配置文件
├── docs                                                # 项目相关文档目录
├── include                                             # 项目公共头文件      
│   ├── aicpu_common                                    # aicpu公共函数头文件        
│   └── op_common                                       # op_common源码头文件（即将废弃）
├── pkg_inc                                             # 项目包间接口头文件目录           
│   └── op_common                                       # op_common源码头文件
│       ├── atvoss                                      # atvoss接口头文件，包括broadcast、elewise等
│       ├── log                                         # log相关接口头文件
│       ├── op_host                                     # host侧接口头文件
│       └── op_kernel                                   # kernel侧接口头文件
├── requirements.txt                                    # 项目依赖的第三方软件包
├── scripts                                             # 项目脚本文件存放目录
├── src
│   └── op_common                                       # op_common源码实现
│       ├── atvoss                                      # atvoss接口源码实现
│       ├── log                                         # log相关接口源码实现
│       └── op_host                                     # host侧接口源码实现
├── tests                                               # 测试工程目录
│   ├── CMakeLists.txt
│   └── ut                                              # UT用例工程
│       ├── CMakeLists.txt                              # UT工程的cmakelist脚本
│       └── op_common                                   # op_common测试工程
├── build.sh                                            # 项目工程编译脚本
├── CMakeLists.txt                                      # 项目工程cmakelist入口
├── CONTRIBUTING.md                                     # 项目贡献指南文件
├── install_deps.sh                                     # 项目安装依赖包脚本
├── LICENSE                                             # 项目开源许可证信息
├── OAT.xml                                             # 配置脚本，代码仓工具使用，用于检查License是否规范
├── README.md                                           # 项目工程总介绍文档
├── requirements.txt                                    # 项目的第三方依赖包
├── SECURITY.md                                         # 项目安全声明文件
└── version.info                                        # 项目版本信息
```

