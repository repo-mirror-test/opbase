# OP\_ATTR\_NAMES<a name="ZH-CN_TOPIC_0000002483563014"></a>

## 宏功能<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_section0397626155918"></a>

用于封装AI CPU算子的属性名字。

## 宏原型<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_section1373361681114"></a>

```
OP_ATTR_NAMES::op::FVector<std::string>
```

## 参数说明<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_section76104422125"></a>

<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p14634454132618"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p14634454132618"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p4634135452615"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p4634135452615"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p763465418263"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p763465418263"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p193617166232"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p193617166232"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p193617166232"></a>/</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p1634195412618"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p1634195412618"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p19964198101710"><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p19964198101710"></a><a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_p19964198101710"></a>AI CPU算子的属性名，类型为std::string的<span id="ph4202125913186"><a name="ph4202125913186"></a><a name="ph4202125913186"></a>FVector（参见<a href="aclnn开发接口列表.md#zh-cn_topic_0000002114052989_table2712056035">表3</a>）</span>。默认值为空的FVector，即OP_ATTR_NAMES()。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078498930_zh-cn_topic_0000001943982820_section1086173012323"></a>

```
// 封装AI CPU算子的3个属性名为Tindices，T和use_locking
OP_ATTR_NAMES({"Tindices", "T", "use_locking"});
```

