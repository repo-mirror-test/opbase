# aclCreateFloatArray<a name="ZH-CN_TOPIC_0000002020209821"></a>

## 函数功能<a name="section36583473819"></a>

创建aclFloatArray对象，作为单算子API执行接口的入参。

aclFloatArray是框架定义的一种用来管理和存储浮点型数据的数组结构，开发者无需关注其内部实现，直接使用即可。

## 函数原型<a name="section13230182415108"></a>

```
aclFloatArray *aclCreateFloatArray(const float *value, uint64_t size)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="24.58%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="51.42%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="24.58%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="24%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="51.42%" headers="mcps1.1.4.1.3 "><p id="li1122373110712p0"><a name="li1122373110712p0"></a><a name="li1122373110712p0"></a>Host侧的float类型指针，其指向的值会拷贝给aclFloatArray。</p>
</td>
</tr>
<tr id="row68843458011"><td class="cellrowborder" valign="top" width="24.58%" headers="mcps1.1.4.1.1 "><p id="p410332812155"><a name="p410332812155"></a><a name="p410332812155"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="24%" headers="mcps1.1.4.1.2 "><p id="p910382801516"><a name="p910382801516"></a><a name="p910382801516"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="51.42%" headers="mcps1.1.4.1.3 "><p id="li52231031872p0"><a name="li52231031872p0"></a><a name="li52231031872p0"></a>浮点型数组的长度，取值为正整数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

成功则返回创建好的aclFloatArray，否则返回nullptr。

## 约束与限制<a name="section141811212135015"></a>

-   本接口需与[aclDestroyFloatArray](aclDestroyFloatArray.md)接口配套使用，分别完成aclFloatArray的创建与销毁。
-   调用[aclGetFloatArraySize](aclGetFloatArraySize.md)接口可以获取aclFloatArray的大小。

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建aclFloatArray
std::vector<float> scalesData = {1.0, 1.0, 2.0, 2.0};
aclFloatArray *scales = aclCreateFloatArray(scalesData.data(),scalesData.size());
...
// aclFloatArray作为单算子API执行接口的入参
auto ret = aclxxXxxGetWorkspaceSize(srcTensor, scales, ..., outTensor, ..., &workspaceSize, &executor);
ret = aclxxXxx(...);
...
// 销毁aclFloatArray
ret = aclDestroyFloatArray(scales);
```

