# OP\_WORKSPACE<a name="ZH-CN_TOPIC_0000002483563020"></a>

## 宏功能<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_section0397626155918"></a>

用于封装算子显式指定的workspace参数。

## 宏原型<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_section1373361681114"></a>

```
OP_WORKSPACE(x...)
```

## 参数说明<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_section76104422125"></a>

<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_row1963435442618"><th class="cellrowborder" valign="top" width="17.2%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p14634454132618"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p14634454132618"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.43%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p4634135452615"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p4634135452615"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p763465418263"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p763465418263"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_row8634185442615"><td class="cellrowborder" valign="top" width="17.2%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p193617166232"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p193617166232"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p193617166232"></a>x...</p>
</td>
<td class="cellrowborder" valign="top" width="15.43%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p1634195412618"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p1634195412618"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p11440125283411"><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p11440125283411"></a><a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_p11440125283411"></a>算子的workspace参数，表示算子计算过程中需要的Device内存。支持aclTensor或aclTensorList类型。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_zh-cn_topic_0000001647821269_section19165124931511"></a>

无。

## 调用示例<a name="zh-cn_topic_0000002078498938_zh-cn_topic_0000001971300961_section1086173012323"></a>

```
// 封装算子的workspace参数a
OP_WORKSPACE(a);
```

