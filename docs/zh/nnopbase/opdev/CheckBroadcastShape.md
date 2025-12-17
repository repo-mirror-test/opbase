# CheckBroadcastShape<a name="ZH-CN_TOPIC_0000002483403096"></a>

## 功能说明<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_section36583473819"></a>

校验两个shape间是否满足broadcast关系（广播规则介绍参考[NumPy](https://numpy.org/doc/stable/user/basics.broadcasting.html)官网）。例如\[2, 1\]与\[2, 10\]满足broadcast关系，\[2, 2\]与\[2, 10\]不满足broadcast关系。

## 函数原型<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool CheckBroadcastShape(const op::Shape &self, const op::Shape &other)
```

## 参数说明<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.39%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.39%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p1169694155618"></a>self</p>
</td>
<td class="cellrowborder" valign="top" width="15.39%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.39%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p4147251103416"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p4147251103416"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p4147251103416"></a>第一组shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p19185154915611"></a>other</p>
</td>
<td class="cellrowborder" valign="top" width="15.39%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.39%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p17947146143514"><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p17947146143514"></a><a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_p17947146143514"></a>第二组shape。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_section25791320141317"></a>

当self与other满足broadcast关系时，返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053093_zh-cn_topic_0000001921004746_section1086173012323"></a>

```
// 生成shape为[2， 1]和[2, 10]的两个Shape对象，校验两个shape是否满足broadcast关系。
void Func() {
    gert::Shape shapeA;
    shapeA.AppendDim(1);
    shapeA.AppendDim(2);
    gert::Shape shapeB;
    shapeB.AppendDim(10);
    shapeB.AppendDim(2);
    bool isBrc = CheckBroadcastShape(shapeA, shapeB);
}
```

