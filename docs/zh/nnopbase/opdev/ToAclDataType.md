# ToAclDataType<a name="ZH-CN_TOPIC_0000002515603017"></a>

## 功能说明<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_section36583473819"></a>

将op::DataType转换为对应的aclDataType。

## 函数原型<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclDataType ToAclDataType(DataType type)
```

## 参数说明<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p1169694155618"></a>type</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098053_p949512193133"><a name="zh-cn_topic_0000002114098053_p949512193133"></a><a name="zh-cn_topic_0000002114098053_p949512193133"></a>待转换的原始数据类型op::DataType。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回aclDataType类型。

## 约束说明<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098053_zh-cn_topic_0000001949479081_section351220174618"></a>

```
// 获取DT_FLOAT对应的aclDataType枚举
void Func() {
    aclDataType type = ToAclDataType(DT_FLOAT);
}
```

