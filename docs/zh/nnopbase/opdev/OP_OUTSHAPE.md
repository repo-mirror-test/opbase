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

只支持存放一个输出tensor shape的Tensor(outShapeTensor), 其对应shape为(9\*需要刷新的tensor个数,)。每个输出tensor的shape占9位，其中第一位表示维数，剩下8位表示具体的每个维度的具体值。

## 调用示例<a name="zh-cn_topic_0000002114098009_zh-cn_topic_0000001943982812_section1086173012323"></a>

```
// 表示算子将输出tensor的shape存放到outShapeTensor中，并且用来更新idx=0的输出tensor的shape
OP_OUTSHAPE({outShapeTensor, 0});

// 刷新多个输出tensor的shape的时候，可以参考如下示例,本例中需要更新idx=0,3,4三个输出tensor的shape
// host侧
Shape outShapeShape{27};
auto outShapeTensor = executor->AllocTensor(outShapeShape, DataType::DT_INT64, Format::FORMAT_ND);
aclnnStatus ret =
    ADD_TO_LAUNCHER_LIST_AICORE(
        xxx,
        OP_INPUT(...),
        OP_OUTPUT(...),
        OP_ATTR(...),
        OP_OUTSHAPE({outShapeTensor, 0}),
        OP_OUTSHAPE({outShapeTensor, 3}),
        OP_OUTSHAPE({outShapeTensor, 4}),
        );

// kernel侧
__aicore__ inline void CopyOutShape(uint64_t dimNums1, uint64_t *dimNums2, uint64_t dimNums3)
{
    LocalTensor<uint64_t> shapeTensor = shapeBuf_.Get<uint64_t>();
    shapeTensor.SetValue(0, 1);                // 第一个输出tensor的维度信息
    shapeTesnor.SetValue(1, dimNums1);         // 第一个输出tensor的第一维的shape值
    shapeTensor.SetValue(9, 1);                // 第二个输出tensor的维度信息
    shapeTensor.SetValue(10, *(dimNums2));     // 第二个输出tensor的第一维的shape值
    shapeTensor.SetValue(11, *(dimNums2+1));   // 第二个输出tensor的第二维的shape值
    shapeTensor.SetValue(18, 1);               // 第三个输出tensor的维度信息
    shapeTesnor.SetValue(19, dimNums3);        // 第三个输出tensor的第一维的shape值
    ...
    DataCopyPad(...);
}
```

