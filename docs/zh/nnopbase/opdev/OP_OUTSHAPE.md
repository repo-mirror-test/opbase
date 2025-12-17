# OP\_OUTSHAPE<a name="ZH-CN_TOPIC_0000002483403050"></a>

## 宏功能<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_section0397626155918"></a>

针对需要计算结果来确定输出shape的算子，如NonZero算子，该宏用于存放此类算子输出shape的aclTensor。

## 宏原型<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_section1373361681114"></a>

```
OP_OUTSHAPE(x...)
```

## 参数说明<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_section76104422125"></a>

<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p14634454132618"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p14634454132618"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p4634135452615"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p4634135452615"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p763465418263"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p763465418263"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p193617166232"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p193617166232"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p193617166232"></a>x...</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p1634195412618"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p1634195412618"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p19964198101710"><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p19964198101710"></a><a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_p19964198101710"></a>包含两部分，第一个参数是存放输出tensor shape的aclTensor，第二个参数是存放需要更新输出shape的tensor索引。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_section1086173012323"></a>

```
// 表示算子将输出tensor的shape存放到outShapeTensor中，并且用来更新idx=0的输出tensor的shape
OP_OUTSHAPE({outShapeTensor, 0});
```

