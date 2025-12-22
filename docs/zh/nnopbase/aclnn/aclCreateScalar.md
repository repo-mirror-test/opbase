# aclCreateScalar<a name="ZH-CN_TOPIC_0000002020209817"></a>

## 功能说明<a name="section36583473819"></a>

创建aclScalar对象，作为单算子API执行接口的入参。

aclScalar是框架定义的一种用来管理和存储标量数据的结构，开发者无需关注其内部实现，直接使用即可。

## 函数原型<a name="section13230182415108"></a>

```
aclScalar *aclCreateScalar(void *value, aclDataType dataType)
```

## 参数说明<a name="section75395119104"></a>


<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="18.42%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="28.499999999999996%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="53.080000000000005%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="18.42%" headers="mcps1.1.4.1.1 "><p id="p18701325105920"><a name="p18701325105920"></a><a name="p18701325105920"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="28.499999999999996%" headers="mcps1.1.4.1.2 "><p id="p18691425175910"><a name="p18691425175910"></a><a name="p18691425175910"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="53.080000000000005%" headers="mcps1.1.4.1.3 "><p id="p6177246108"><a name="p6177246108"></a><a name="p6177246108"></a>Host侧的scalar类型的指针，其指向的值会作为scalar。</p>
</td>
</tr>
<tr id="row68843458011"><td class="cellrowborder" valign="top" width="18.42%" headers="mcps1.1.4.1.1 "><p id="p388414451014"><a name="p388414451014"></a><a name="p388414451014"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="28.499999999999996%" headers="mcps1.1.4.1.2 "><p id="p10884845605"><a name="p10884845605"></a><a name="p10884845605"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="53.080000000000005%" headers="mcps1.1.4.1.3 "><p id="p488417451207"><a name="p488417451207"></a><a name="p488417451207"></a>scalar的数据类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

成功则返回创建好的aclScalar，否则返回nullptr。

## 约束说明<a name="section5618951144815"></a>

-   本接口需与[aclDestroyScalar](aclDestroyScalar.md)接口配套使用，分别完成aclScalar的创建与销毁。
-   如需创建多个aclScalar对象，可调用[aclCreateScalarList](aclCreateScalarList.md)接口来存储标量列表。

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建aclScalar
float alphaValue = 1.2f;
aclScalar* alpha = aclCreateScalar(&alphaValue, aclDataType::ACL_FLOAT);
...
// aclScalar作为单算子API执行接口的入参
auto ret = aclxxXxxGetWorkspaceSize(srcTensor, alpha, ..., outTensor, ..., &workspaceSize, &executor);
ret = aclxxXxx(...);
...
// 销毁aclScalar
ret = aclDestroyScalar(alpha);
```

