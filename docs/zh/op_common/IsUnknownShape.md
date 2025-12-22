# IsUnknownShape<a name="ZH-CN_TOPIC_0000002483215673"></a>

## 功能说明<a name="section36583473819"></a>

图模式场景下，检查输入shape的每一根轴长度是否都为不确定值。

## 函数原型<a name="section13230182415108"></a>

```
bool IsUnknownShape(const gert::Shape &shape)
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
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="24.98%" headers="mcps1.1.4.1.1 "><p id="p1979812044010"><a name="p1979812044010"></a><a name="p1979812044010"></a>shape</p>
</td>
<td class="cellrowborder" valign="top" width="24.990000000000002%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="50.029999999999994%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a><span>待判定的输入shape</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回类型为bool。

-   true：输入shape的每一根轴长度都为不确定值。
-   false：输入shape至少有1根轴的长度为确定值。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
const gert::Shape* inputShape = context->GetInputShape(DIAGFLAT_IN_X_IDX);
OP_CHECK_NULL_WITH_CONTEXT(context, inputShape);
if (Ops::Base::IsUnknownShape(*inputShape)) {
    output_y_shape->SetDimNum(input_dim_num);
}
```

