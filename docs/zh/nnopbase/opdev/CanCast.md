# CanCast<a name="ZH-CN_TOPIC_0000002515603047"></a>

## 功能说明<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_section36583473819"></a>

判断源数据类型是否可以cast到目的数据类型。

## 函数原型<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool CanCast(const DataType from, const DataType to)
```

## 参数说明<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="21.58%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="11.05%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p159343464291"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p159343464291"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p159343464291"></a>from</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p1934154610297"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p1934154610297"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p139341346192910"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p139341346192910"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p139341346192910"></a>源数据类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_row387418471536"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p48741747175310"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p48741747175310"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p48741747175310"></a>to</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p10874847115317"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p10874847115317"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p10874847115317"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p15874164712536"><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p15874164712536"></a><a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_p15874164712536"></a>目的数据类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_section25791320141317"></a>

若成功cast返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078499034_zh-cn_topic_0000001959457157_section125709381912"></a>

```
// 判断dtype不可以转为int8类型时，返回
void Func(const DataType dtype) {
    if (!CanCast(dtype, DT_INT8)) {
        return;
    }
}
```

