# OP\_OPTION<a name="ZH-CN_TOPIC_0000002515602993"></a>

## 宏功能<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_section0397626155918"></a>

用于封装算子的精度模式。

## 宏原型<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_section1373361681114"></a>

```
OP_OPTION(x...)
```

## 参数说明<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_section76104422125"></a>

<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p14634454132618"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p14634454132618"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p4634135452615"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p4634135452615"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p763465418263"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p763465418263"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p193617166232"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p193617166232"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p193617166232"></a>x...</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p1634195412618"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p1634195412618"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p19964198101710"><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p19964198101710"></a><a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_p19964198101710"></a>指定算子精度模式，具体取值参见<a href="OpImplMode.md">OpImplMode</a>。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653670_zh-cn_topic_0000001971181237_section1086173012323"></a>

```
// 封装算子的精度模式为高精度模式
OP_OPTION(IMPL_MODE_HIGH_PRECISION);
```

