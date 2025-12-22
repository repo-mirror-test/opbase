# OP\_CHECK\_NULL\_WITH\_CONTEXT<a name="ZH-CN_TOPIC_0000002450096158"></a>

## 功能说明<a name="section36583473819"></a>

根据传入的context上下文，校验传入的指针是否为nullptr。

## 函数原型<a name="section13230182415108"></a>

```
OP_CHECK_NULL_WITH_CONTEXT(context, ptr)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="28.15%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="13.569999999999999%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="58.28%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="28.15%" headers="mcps1.1.4.1.1 "><p id="p1979812044010"><a name="p1979812044010"></a><a name="p1979812044010"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="13.569999999999999%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="58.28%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a>传入的上下文信息，类型为InferShapeContext/TilingParseContext/TilingContext。</p>
</td>
</tr>
<tr id="row68843458011"><td class="cellrowborder" valign="top" width="28.15%" headers="mcps1.1.4.1.1 "><p id="p2499112513409"><a name="p2499112513409"></a><a name="p2499112513409"></a>ptr</p>
</td>
<td class="cellrowborder" valign="top" width="13.569999999999999%" headers="mcps1.1.4.1.2 "><p id="p910382801516"><a name="p910382801516"></a><a name="p910382801516"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="58.28%" headers="mcps1.1.4.1.3 "><p id="li9223531774p0"><a name="li9223531774p0"></a><a name="li9223531774p0"></a>待判定的指针。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

当输入ptr为nullptr时，返回ge::GRAPH\_FAILED。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
auto inShape = context->GetInputShape(0);
OP_CHECK_NULL_WITH_CONTEXT(context, inShape);
auto axesTensor = context->GetInputTensor(1);
OP_CHECK_NULL_WITH_CONTEXT(context, axesTensor);
auto outShape = context->GetOutputShape(0);
OP_CHECK_NULL_WITH_CONTEXT(context, outShape);
```

