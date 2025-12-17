# aclCreateBoolArray<a name="ZH-CN_TOPIC_0000001983690172"></a>

## 函数功能<a name="section36583473819"></a>

创建aclBoolArray对象，作为单算子API执行接口的入参。

aclBoolArray是框架定义的一种用来管理和存储布尔型数据的数组结构，开发者无需关注其内部实现，直接使用即可。

## 函数原型<a name="section13230182415108"></a>

```
aclBoolArray *aclCreateBoolArray(const bool *value, uint64_t size)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="24.98%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.990000000000002%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="50.029999999999994%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="24.98%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="24.990000000000002%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="50.029999999999994%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a>Host侧的bool类型指针，其指向的值会拷贝给aclBoolArray。</p>
</td>
</tr>
<tr id="row68843458011"><td class="cellrowborder" valign="top" width="24.98%" headers="mcps1.1.4.1.1 "><p id="p410332812155"><a name="p410332812155"></a><a name="p410332812155"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="24.990000000000002%" headers="mcps1.1.4.1.2 "><p id="p910382801516"><a name="p910382801516"></a><a name="p910382801516"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="50.029999999999994%" headers="mcps1.1.4.1.3 "><p id="li9223531774p0"><a name="li9223531774p0"></a><a name="li9223531774p0"></a>布尔型数组的长度，取值为正整数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

成功则返回创建好的aclBoolArray，否则返回nullptr。

## 约束与限制<a name="section186749179365"></a>

-   本接口需与[aclDestroyBoolArray](aclDestroyBoolArray.md)接口配套使用，分别完成aclBoolArray的创建与销毁。
-   调用[aclGetBoolArraySize](aclGetBoolArraySize.md)接口可以获取aclBoolArray的大小。

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建aclBoolArray
std::vector<bool> maskData = {true, false};
aclBoolArray *mask = aclCreateBoolArray(maskData.data(), maskData.size());
...
// aclBoolArray作为单算子API执行接口的入参
auto ret = aclxxXxxGetWorkspaceSize(srcTensor, mask, ..., outTensor, ..., &workspaceSize, &executor);
ret = aclxxXxx(...);
...
// 销毁aclBoolArray
ret = aclDestroyBoolArray(mask);
```

