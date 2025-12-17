# PromoteType<a name="ZH-CN_TOPIC_0000002515683051"></a>

## 功能说明<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_section36583473819"></a>

不同数据类型参数进行运算时，推导应该将类型提升到何种数据类型进行计算。例如float16与float32进行运算，应该将float16先提升至float32后再做运算。

## 函数原型<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
DataType PromoteType(const DataType type_a, const DataType type_b)
```

## 参数说明<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="21.58%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="11.05%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p159343464291"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p159343464291"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p159343464291"></a>type_a</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p1934154610297"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p1934154610297"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p139341346192910"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p139341346192910"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p139341346192910"></a>第一个参数数据类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_row387418471536"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p48741747175310"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p48741747175310"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p48741747175310"></a>type_b</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p10874847115317"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p10874847115317"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p10874847115317"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p15874164712536"><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p15874164712536"></a><a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_p15874164712536"></a>第二个参数数据类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_section25791320141317"></a>

若无法推导类型提升后的数据类型，运算会失败并返回DT\_UNDEFINED。

## 约束说明<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098113_zh-cn_topic_0000001932377804_section125709381912"></a>

```
// 判断dtype是否可以与Float32计算，不能则返回
void Func(const DataType dtype) {
    if (PromoteType(dtype, DT_FLOAT) == DT_UNDEFINED) {
        return;
    }
}
```

