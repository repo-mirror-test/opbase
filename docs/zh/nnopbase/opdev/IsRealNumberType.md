# IsRealNumberType<a name="ZH-CN_TOPIC_0000002515683017"></a>

## 功能说明<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入的数据类型，是否只包含实部数字类型。

## 函数原型<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsRealNumberType(const DataType dtype)
```

## 参数说明<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p159343464291"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p159343464291"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p159343464291"></a>dtype</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p1934154610297"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p1934154610297"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p139341346192910"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p139341346192910"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p139341346192910"></a>输入数据类型，判断该类型是否仅包含实部。</p>
<p id="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p19513755122019"><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p19513755122019"></a><a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_p19513755122019"></a>实部数字类型包括：Float64、Float32、Float16、Int16、Int32、Int64、Int8、UInt16、UInt32、UInt64、UInt8、BFloat16。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_section25791320141317"></a>

输入数据类型只包含实部时，返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653706_zh-cn_topic_0000001920960148_section351220174618"></a>

```
// 判断dtype不只包含实部时，返回
void Func(const DataType dtype) {
    if (!IsRealNumberType(dtype)) {
        return;
    }
}
```

