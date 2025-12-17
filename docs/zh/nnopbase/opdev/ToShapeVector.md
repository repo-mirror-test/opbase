# ToShapeVector<a name="ZH-CN_TOPIC_0000002515683041"></a>

## 功能说明<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_section36583473819"></a>

提取输入Shape对象中的维度信息到一个ShapeVector（参见[表3](aclnn开发接口列表.md#zh-cn_topic_0000002114052989_table2712056035)）容器。

## 函数原型<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
FVector<int64_t, 25> ToShapeVector(const op::Shape &shape)
```

## 参数说明<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p1169694155618"></a>shape</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_p4147251103416"><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_p4147251103416"></a><a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_p4147251103416"></a>记录了一组shape信息，例如一个三维shape：[10, 20, 30]。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回一个FVector对象，其中存放着每一维的shape大小。

## 约束说明<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098097_zh-cn_topic_0000001949523613_section1086173012323"></a>

```
// 生成一个shape信息为[1, 2, 3, 4, 5]的Shape对象，并将它转为FVector。
void Func() {
    gert::Shape newShape;
    for (int64_t i = 1; i <= 5; i++) {
        newShape.AppendDim(i);
    }
    auto shapeVec = ToShapeVector(newShape);
}
```

