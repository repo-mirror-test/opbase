# CeilAlign<a name="ZH-CN_TOPIC_0000002483215681"></a>

## 功能说明<a name="section111971647763"></a>

以align为单元，向上对齐。

## 函数原型<a name="section1819718474611"></a>

```Cpp
template <typename T>
auto CeilAlign(T x, T align) -> typename std::enable_if<std::is_integral<T>::value, T>::type
```

## 参数说明<a name="section121973471161"></a>

<a name="table151977471266"></a>
<table><thead align="left"><tr id="row5197144717615"><th class="cellrowborder" valign="top" width="33.31%" id="mcps1.1.4.1.1"><p id="p1119713471267"><a name="p1119713471267"></a><a name="p1119713471267"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="33.29%" id="mcps1.1.4.1.2"><p id="p161971447367"><a name="p161971447367"></a><a name="p161971447367"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="33.4%" id="mcps1.1.4.1.3"><p id="p1819774712615"><a name="p1819774712615"></a><a name="p1819774712615"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row319894718610"><td class="cellrowborder" valign="top" width="33.31%" headers="mcps1.1.4.1.1 "><p id="p51981247261"><a name="p51981247261"></a><a name="p51981247261"></a>x</p>
</td>
<td class="cellrowborder" valign="top" width="33.29%" headers="mcps1.1.4.1.2 "><p id="p191989478610"><a name="p191989478610"></a><a name="p191989478610"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="33.4%" headers="mcps1.1.4.1.3 "><p id="p61981547865"><a name="p61981547865"></a><a name="p61981547865"></a>待向上对齐的数值。</p>
</td>
</tr>
<tr id="row191984471062"><td class="cellrowborder" valign="top" width="33.31%" headers="mcps1.1.4.1.1 "><p id="p519820471466"><a name="p519820471466"></a><a name="p519820471466"></a>align</p>
</td>
<td class="cellrowborder" valign="top" width="33.29%" headers="mcps1.1.4.1.2 "><p id="p191988479617"><a name="p191988479617"></a><a name="p191988479617"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="33.4%" headers="mcps1.1.4.1.3 "><p id="p18198164711614"><a name="p18198164711614"></a><a name="p18198164711614"></a>对齐的单元。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section141981471663"></a>

T：返回以align为单元，向上对齐的结果，当align为0时，返回0。

## 约束说明<a name="section1127471013294"></a>

待向上对齐的数值和对齐的单元是相同类型整型（不包括bool类型）。

## 调用示例<a name="section9198104714611"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```Cpp
CeilAlign<int32_t>(1000, 64)
```

