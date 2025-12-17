# TypeSize<a name="ZH-CN_TOPIC_0000002483563040"></a>

## 功能说明<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_section36583473819"></a>

计算输入的数据类型一个元素占用多少Byte。对于不满一个Byte大小的数据类型，会在基础bit大小上额外加1000，例如Int4，将返回1004，表示一个元素占用4bit。

## 函数原型<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
size_t TypeSize(DataType dataType)
```

## 参数说明<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p159343464291"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p159343464291"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p159343464291"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p1934154610297"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p1934154610297"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p139341346192910"><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p139341346192910"></a><a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_p139341346192910"></a>输入的数据类型，返回该数据类型单元素大小。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回输入数据类型单元素的大小。

## 约束说明<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053045_zh-cn_topic_0000001949479077_section351220174618"></a>

```
// 获取dtype的单个元素size大小
void Func(const DataType dtype) {
    size_t size = TypeSize(dtype);
}
```

