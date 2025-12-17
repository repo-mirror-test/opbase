# aclSetAclOpExecutorRepeatable<a name="ZH-CN_TOPIC_0000002020209841"></a>

## 函数功能<a name="section36583473819"></a>

使能aclOpExecutor为可复用状态。当用户想复用已有的aclOpExecutor时，必须在一阶段接口aclxxXxxGetworkspaceSize运行完成后，立即使用该接口使能复用，后续可多次调用第二段接口acl_Xxx_进行算子执行。

aclOpExecutor是框架定义的算子执行器，用于执行算子计算的容器，开发者无需关注其内部实现。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclSetAclOpExecutorRepeatable(aclOpExecutor *executor)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="28.99%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.57%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="46.44%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="28.99%" headers="mcps1.1.4.1.1 "><p id="p5336125854112"><a name="p5336125854112"></a><a name="p5336125854112"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="24.57%" headers="mcps1.1.4.1.2 "><p id="p1333575820413"><a name="p1333575820413"></a><a name="p1333575820413"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="p1923551494413"><a name="p1923551494413"></a><a name="p1923551494413"></a>待设置复用的aclOpExecutor。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

可能失败的原因：

-   返回561103：executor是空指针。

## 约束与限制<a name="section1341119401796"></a>

-   目前采用AI CPU和AI Core计算单元的算子支持使能aclOpExecutor可复用。
-   调用单算子API执行接口时，如下场景无法使能aclOpExecutor复用：

    -   如果使用了HostToDevice、DeviceToDevice拷贝相关的L0层API，如CopyToNpu、CopyNpuToNpu、CopyToNpuSync等，不支持aclOpExecutor复用。
    -   如果使用了L0层ViewCopy接口，同时ViewCopy的源地址和目的地址相同时，不支持aclOpExecutor复用。

    关于L0层接口的具体介绍请参见。

-   调用单算子API执行接口时，不允许算子API内部创建Device Tensor，只允许使用外部传入的Tensor。
-   设置成复用状态的aclOpExecutor在第二段接口执行完后不会对executor的资源进行清理，需要和[aclDestroyAclOpExecutor](aclDestroyAclOpExecutor.md)配套使用清理资源。

## 调用示例<a name="section141811212135015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建输入和输出的aclTensor和aclTensorList
std::vector<int64_t> shape = {1, 2, 3};
aclTensor tensor1 = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
aclTensor tensor2 = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
aclTensor tensor3 = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
aclTensor output = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
aclTensor *list[] = {tensor1, tensor2};
auto tensorList = aclCreateTensorList(list, 2);
uint64_t workspaceSize = 0;
aclOpExecutor *executor;
// AddCustom算子有两个输入（aclTensorList和aclTensor），一个输出（aclTensor）
// 调用第1段接口
aclnnAddCustomGetWorkspaceSize(tensorList, tensor3, output, &workspaceSize, &executor);
// 设置executor为可复用
aclSetAclOpExecutorRepeatable(executor);  
void *addr;
aclSetDynamicInputTensorAddr(executor, 0, 0, tensorList, addr);   // 刷新输入tensorlist中第1个aclTensor的device地址
aclSetDynamicInputTensorAddr(executor, 0, 1, tensorList, addr);  // 刷新输入tensorlist中第2个aclTensor的device地址
...
// 调用第2段接口
aclnnAddCustom(workspace, workspaceSize, executor, stream);
// 清理executor
aclDestroyAclOpExecutor(executor);  
```

