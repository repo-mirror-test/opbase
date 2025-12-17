# FloorAlign<a name="ZH-CN_TOPIC_0000002450255786"></a>

## 产品支持情况<a name="section1026435122912"></a>

<a name="table162644513298"></a>
<table><thead align="left"><tr id="row1326418517295"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p1926412552914"><a name="p1926412552914"></a><a name="p1926412552914"></a><span id="ph32641557292"><a name="ph32641557292"></a><a name="ph32641557292"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p1526417518296"><a name="p1526417518296"></a><a name="p1526417518296"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row0264453297"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p162641650294"><a name="p162641650294"></a><a name="p162641650294"></a><span id="ph52645542916"><a name="ph52645542916"></a><a name="ph52645542916"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p226412572918"><a name="p226412572918"></a><a name="p226412572918"></a>√</p>
</td>
</tr>
<tr id="row1626417518298"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p20264055298"><a name="p20264055298"></a><a name="p20264055298"></a><span id="ph12645512917"><a name="ph12645512917"></a><a name="ph12645512917"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p12264155142920"><a name="p12264155142920"></a><a name="p12264155142920"></a>√</p>
</td>
</tr>
</tbody>
</table>

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

