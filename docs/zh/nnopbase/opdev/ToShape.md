# ToShape<a name="ZH-CN_TOPIC_0000002515603039"></a>

## 功能说明<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_section36583473819"></a>

将指定内存维度数据转为op::Shape（即gert::Shape）对象。

## 函数原型<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_section13230182415108"></a>

-   **用给定的dims维度数组构造op::Shape**

    ```
    void ToShape(const int64_t *dims, uint64_t dimNum, op::Shape &shape)
    ```

-   **用给定的op::ShapeVector维度数组构造op::Shape**

    > **说明：** 
    >op::ShapeVector介绍参见[表3](aclnn开发接口列表.md#zh-cn_topic_0000002114052989_table2712056035)。

    ```
    void ToShape(const op::ShapeVector &shapeVector, op::Shape &shape)
    ```

## 参数说明<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="20.66%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="11.97%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="20.66%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p1169694155618"></a>dims</p>
</td>
<td class="cellrowborder" valign="top" width="11.97%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p4147251103416"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p4147251103416"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p4147251103416"></a>源数据指针，指向存放每一维shape大小的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="20.66%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p19185154915611"></a>dimNum</p>
</td>
<td class="cellrowborder" valign="top" width="11.97%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p17947146143514"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p17947146143514"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p17947146143514"></a>dims指向的源数据中，共有多少维shape信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_row99721359134410"><td class="cellrowborder" valign="top" width="20.66%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p097215984416"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p097215984416"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p097215984416"></a>shapeVector</p>
</td>
<td class="cellrowborder" valign="top" width="11.97%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p149723594445"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p149723594445"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p149723594445"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p1797235964419"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p1797235964419"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p1797235964419"></a>源数据，列表中存放每一维的shape大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_row524215815450"><td class="cellrowborder" valign="top" width="20.66%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p112431058154519"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p112431058154519"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p112431058154519"></a>shape</p>
</td>
<td class="cellrowborder" valign="top" width="11.97%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p152431758114513"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p152431758114513"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p152431758114513"></a>输出</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p8243125854516"><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p8243125854516"></a><a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_p8243125854516"></a>通过源数据构造出的Shape对象。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078499018_zh-cn_topic_0000001921004706_section1086173012323"></a>

```
// 生成一个shape信息为[1, 2, 3, 4, 5]的Shape对象。
void Func() {
    int64_t myArray[5] = {1, 2, 3, 4, 5};
    Shape shape;
    ToShape(myArray, 5, shape);
}
```

