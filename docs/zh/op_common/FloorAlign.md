# FloorAlign<a name="ZH-CN_TOPIC_0000002450255786"></a>

## 功能说明<a name="section5266155112911"></a>

以align为单元，向下对齐。

## 函数原型<a name="section13266258295"></a>

```
template <typename T>
auto FloorAlign(T x, T align) -> typename std::enable_if<std::is_integral<T>::value, T>::type
```

## 参数说明<a name="section42668511293"></a>

<a name="table1266185112910"></a>
<table><thead align="left"><tr id="row2266153293"><th class="cellrowborder" valign="top" width="31.6%" id="mcps1.1.4.1.1"><p id="p32664517293"><a name="p32664517293"></a><a name="p32664517293"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="29.830000000000002%" id="mcps1.1.4.1.2"><p id="p1326665132912"><a name="p1326665132912"></a><a name="p1326665132912"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="38.57%" id="mcps1.1.4.1.3"><p id="p16266856297"><a name="p16266856297"></a><a name="p16266856297"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row826655102919"><td class="cellrowborder" valign="top" width="31.6%" headers="mcps1.1.4.1.1 "><p id="p7266165192911"><a name="p7266165192911"></a><a name="p7266165192911"></a>x</p>
</td>
<td class="cellrowborder" valign="top" width="29.830000000000002%" headers="mcps1.1.4.1.2 "><p id="p1226611515298"><a name="p1226611515298"></a><a name="p1226611515298"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="38.57%" headers="mcps1.1.4.1.3 "><p id="p12267165132915"><a name="p12267165132915"></a><a name="p12267165132915"></a>待向下对齐的数值。</p>
</td>
</tr>
<tr id="row62676572918"><td class="cellrowborder" valign="top" width="31.6%" headers="mcps1.1.4.1.1 "><p id="p102672510293"><a name="p102672510293"></a><a name="p102672510293"></a>align</p>
</td>
<td class="cellrowborder" valign="top" width="29.830000000000002%" headers="mcps1.1.4.1.2 "><p id="p2267175102915"><a name="p2267175102915"></a><a name="p2267175102915"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="38.57%" headers="mcps1.1.4.1.3 "><p id="p726720514294"><a name="p726720514294"></a><a name="p726720514294"></a>对齐的单元。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section182671752293"></a>

T：返回以align为单元，向下对齐的结果，当align为0时，返回0。

## 约束说明<a name="section1226710516291"></a>

待向下对齐的数值和对齐的单元是相同类型整型（不包括bool类型）。

## 调用示例<a name="section1826714522915"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
FloorAlign<int32_t>(12345, 4096)
```

