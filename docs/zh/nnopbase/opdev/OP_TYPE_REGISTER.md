# OP\_TYPE\_REGISTER<a name="ZH-CN_TOPIC_0000002515682997"></a>

## 宏功能<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_section0397626155918"></a>

注册一个L0算子，生成对应的算子名称和TypeID。

## 宏原型<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_section1373361681114"></a>

```
OP_TYPE_REGISTER(kernelName)
```

## 参数说明<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_section76104422125"></a>

<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p14634454132618"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p14634454132618"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p4634135452615"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p4634135452615"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p763465418263"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p763465418263"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p193617166232"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p193617166232"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p193617166232"></a><strong id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_b5687154318281"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_b5687154318281"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_b5687154318281"></a>kernelName</strong></p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p1634195412618"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p1634195412618"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p19964198101710"><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p19964198101710"></a><a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_p19964198101710"></a>算子名，例如Abs。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_zh-cn_topic_0000001647821269_section19165124931511"></a>

必须在L0接口最开始处使用。

## 调用示例<a name="zh-cn_topic_0000002114053009_zh-cn_topic_0000002023975233_section1086173012323"></a>

```
namespace l0op{
OP_TYPE_REGISTER(Abs);
...
}
```

