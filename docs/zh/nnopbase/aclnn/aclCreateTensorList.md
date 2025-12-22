# aclCreateTensorList<a name="ZH-CN_TOPIC_0000002020209825"></a>

## 功能说明<a name="section36583473819"></a>

创建aclTensorList对象，作为单算子API执行接口的入参。

aclTensorList是框架定义的一种用来管理和存储多个张量数据的列表结构，开发者无需关注其内部实现，直接使用即可。

## 函数原型<a name="section13230182415108"></a>

```
aclTensorList *aclCreateTensorList(const aclTensor *const *value, uint64_t size)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="23.31%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="22.23%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="54.459999999999994%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="23.31%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="22.23%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="54.459999999999994%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a>aclTensor类型的指针数组，其指向的值会赋给TensorList。</p>
</td>
</tr>
<tr id="row68843458011"><td class="cellrowborder" valign="top" width="23.31%" headers="mcps1.1.4.1.1 "><p id="p410332812155"><a name="p410332812155"></a><a name="p410332812155"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="22.23%" headers="mcps1.1.4.1.2 "><p id="p910382801516"><a name="p910382801516"></a><a name="p910382801516"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="54.459999999999994%" headers="mcps1.1.4.1.3 "><p id="li9223531774p0"><a name="li9223531774p0"></a><a name="li9223531774p0"></a>张量列表的长度，取值为正整数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

成功则返回创建好的aclTensorList，否则返回nullptr。

## 约束说明<a name="section141811212135015"></a>

-   调用本接口前，需提前调用[aclCreateTensor](aclCreateTensor.md)接口创建aclTensor。
-   本接口需与[aclDestroyTensorList](aclDestroyTensorList.md)接口配套使用，分别完成aclTensorList的创建与销毁。
-   调用[aclGetTensorListSize](aclGetTensorListSize.md)接口可以获取aclTensorList的大小。
-   调用如下接口可刷新输入/输出aclTensorList中记录的Device内存地址。
    -   [aclSetDynamicInputTensorAddr](aclSetDynamicInputTensorAddr.md)
    -   [aclSetDynamicOutputTensorAddr](aclSetDynamicOutputTensorAddr.md)
    -   [aclSetDynamicTensorAddr](aclSetDynamicTensorAddr.md)

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建aclTensor: input1 input2
std::vector<int64_t> shape = {1, 2, 3};
aclTensor *input1 = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
aclTensor *input2 = aclCreateTensor(shape.data(), shape.size(), aclDataType::ACL_FLOAT,
nullptr, 0, aclFormat::ACL_FORMAT_ND, shape.data(), shape.size(), nullptr);
// 创建aclTensorList
std::vector<aclTensor *> tmp{input1, input2};
aclTensorList* tensorList = aclCreateTensorList(tmp.data(), tmp.size());
// aclTensorList作为单算子API执行接口的入参
auto ret = aclxxXxxGetWorkspaceSize(srcTensor, tensorList, ..., outTensor, ..., &workspaceSize, &executor);
ret = aclxxXxx(...);
...
// 销毁aclTensorList
ret = aclDestroyTensorList(tensorList);
```

