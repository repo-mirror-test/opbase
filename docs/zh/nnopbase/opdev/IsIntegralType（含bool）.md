# IsIntegralType（含bool）<a name="ZH-CN_TOPIC_0000002483403104"></a>

## 功能说明<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入的数据类型是否为整数类型，包括Int8、Int16、Int32、Int64、Uint8、Uint16、Uint32、Uint64。

若include\_bool置为true，那么bool也被认为是整数。

## 函数原型<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsIntegralType(const ge::DataType type, const bool include_bool)
```

## 参数说明<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="21.58%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="11.05%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p159343464291"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p159343464291"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p159343464291"></a>type</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p1934154610297"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p1934154610297"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p139341346192910"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p139341346192910"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p139341346192910"></a>输入的数据类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_row387418471536"><td class="cellrowborder" valign="top" width="21.58%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p48741747175310"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p48741747175310"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p48741747175310"></a>include_bool</p>
</td>
<td class="cellrowborder" valign="top" width="11.05%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p10874847115317"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p10874847115317"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p10874847115317"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p15874164712536"><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p15874164712536"></a><a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_p15874164712536"></a>是否将bool视为整数类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_section25791320141317"></a>

若为整数类型返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053105_zh-cn_topic_0000001932218412_section125709381912"></a>

```
// 判断dtype不为整数类型时，返回，注意bool也是整数类型
void Func(const ge::DataType type) {
    if (!IsIntegralType(type, true)) {
        return;
    }
}
```

