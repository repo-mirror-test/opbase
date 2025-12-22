# IsFloatEqual<a name="ZH-CN_TOPIC_0000002483335661"></a>

## 功能说明<a name="section23161123546"></a>

判断两个float类型或double类型的数值是否相等。

## 函数原型<a name="section133163231747"></a>

```
template <typename T>
auto IsFloatEqual(T a, T b) -> typename std::enable_if<std::is_floating_point<T>::value, bool>::type
```

## 参数说明<a name="section1031610235418"></a>

<a name="table103161023444"></a>
<table><thead align="left"><tr id="row12316423248"><th class="cellrowborder" valign="top" width="29.970000000000002%" id="mcps1.1.4.1.1"><p id="p143166230410"><a name="p143166230410"></a><a name="p143166230410"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="29.98%" id="mcps1.1.4.1.2"><p id="p163161223843"><a name="p163161223843"></a><a name="p163161223843"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="40.050000000000004%" id="mcps1.1.4.1.3"><p id="p83161423641"><a name="p83161423641"></a><a name="p83161423641"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row10316923248"><td class="cellrowborder" valign="top" width="29.970000000000002%" headers="mcps1.1.4.1.1 "><p id="p1531611236412"><a name="p1531611236412"></a><a name="p1531611236412"></a>a</p>
</td>
<td class="cellrowborder" valign="top" width="29.98%" headers="mcps1.1.4.1.2 "><p id="p5316323447"><a name="p5316323447"></a><a name="p5316323447"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="40.050000000000004%" headers="mcps1.1.4.1.3 "><p id="p163168230417"><a name="p163168230417"></a><a name="p163168230417"></a>待比较参数，数据类型支持float、double。</p>
</td>
</tr>
<tr id="row731613231849"><td class="cellrowborder" valign="top" width="29.970000000000002%" headers="mcps1.1.4.1.1 "><p id="p231615231411"><a name="p231615231411"></a><a name="p231615231411"></a>b</p>
</td>
<td class="cellrowborder" valign="top" width="29.98%" headers="mcps1.1.4.1.2 "><p id="p143168231744"><a name="p143168231744"></a><a name="p143168231744"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="40.050000000000004%" headers="mcps1.1.4.1.3 "><p id="p11317172312412"><a name="p11317172312412"></a><a name="p11317172312412"></a>待比较参数，数据类型支持float、double。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回bool类型。true表示两个float或double类型数值相等；flase表示两个float或double类型数值不相等。

## 约束说明<a name="section1127471013294"></a>

无

## 调用示例<a name="section1931713239417"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
float delta;
if (op.GetAttr("delta", delta) == ge::GRAPH_FAILED) {
    std::string err_msg = GetInputInvalidErrMsg("delta");
    VECTOR_INFER_SHAPE_INNER_ERR_REPORT(TbeGetName(op), err_msg);
    return GRAPH_FAILED;
}
if (IsFloatEqual(delta, 0.0f)) {
    string excepted_value = ConcatString("not equal to 0");
    std::string err_msg = GetAttrValueErrMsg("delta", ConcatString("delta"), excepted_value);
    VECTOR_INFER_SHAPE_INNER_ERR_REPORT(TbeGetName(op), err_msg);
    return GRAPH_FAILED;
}
```

