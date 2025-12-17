# IsBasicType<a name="ZH-CN_TOPIC_0000002483403070"></a>

## 功能说明<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入的数据类型，是否为基础类型。

## 函数原型<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsBasicType(const DataType dtype)
```

## 参数说明<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p1169694155618"></a>dtype</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p4147251103416"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p4147251103416"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p4147251103416"></a>输入数据类型，判断该类型是否为基础数据类型。</p>
<p id="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p141291543121817"><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p141291543121817"></a><a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_p141291543121817"></a>基础类型包括：Complex128、Complex64、Float64、Float32、Float16、Int16、Int32、Int64、Int8、QInt16、QInt32、QInt8、QUInt16、QUInt8、UInt16、UInt32、UInt64、UInt8、BFloat16。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_section25791320141317"></a>

输入数据类型为基础类型时，返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078498970_zh-cn_topic_0000001920624052_section125709381912"></a>

```
// 判断dtype不为基础类型时，返回
void Func(const DataType dtype) {
    if (!IsBasicType(dtype)) {
        return;
    }
}
```

