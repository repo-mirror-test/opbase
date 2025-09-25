# CeilDiv<a name="ZH-CN_TOPIC_0000002450096170"></a>

## 产品支持情况<a name="section1227010103292"></a>

<a name="table1527071022913"></a>
<table><thead align="left"><tr id="row7271910142918"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p17271141011299"><a name="p17271141011299"></a><a name="p17271141011299"></a><span id="ph12271181013298"><a name="ph12271181013298"></a><a name="ph12271181013298"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p192711010162910"><a name="p192711010162910"></a><a name="p192711010162910"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row9271191019295"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p132712101296"><a name="p132712101296"></a><a name="p132712101296"></a><span id="ph12271171092913"><a name="ph12271171092913"></a><a name="ph12271171092913"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p16271210182911"><a name="p16271210182911"></a><a name="p16271210182911"></a>√</p>
</td>
</tr>
<tr id="row13271610132913"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p15271131016296"><a name="p15271131016296"></a><a name="p15271131016296"></a><span id="ph6271161052915"><a name="ph6271161052915"></a><a name="ph6271161052915"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p1027115103298"><a name="p1027115103298"></a><a name="p1027115103298"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section1627341013299"></a>

向上取整的除法。

## 函数原型<a name="section02736105291"></a>

```Cpp
template <typename T>
auto CeilDiv(T x, T y) -> typename std::enable_if<std::is_signed<T>::value, T>::type
```
```Cpp
template <typename T>
auto CeilDiv(T x, T y) -> typename std::enable_if<std::is_unsigned<T>::value, T>::type
```

## 参数说明<a name="section192739101296"></a>

<a name="table13273111016292"></a>
<table><thead align="left"><tr id="row1227361092915"><th class="cellrowborder" valign="top" width="34.54%" id="mcps1.1.4.1.1"><p id="p20273151019295"><a name="p20273151019295"></a><a name="p20273151019295"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="34.55%" id="mcps1.1.4.1.2"><p id="p1727315105292"><a name="p1727315105292"></a><a name="p1727315105292"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="30.91%" id="mcps1.1.4.1.3"><p id="p5273201022911"><a name="p5273201022911"></a><a name="p5273201022911"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row14273710102911"><td class="cellrowborder" valign="top" width="34.54%" headers="mcps1.1.4.1.1 "><p id="p72736100290"><a name="p72736100290"></a><a name="p72736100290"></a>x</p>
</td>
<td class="cellrowborder" valign="top" width="34.55%" headers="mcps1.1.4.1.2 "><p id="p1627341014290"><a name="p1627341014290"></a><a name="p1627341014290"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="30.91%" headers="mcps1.1.4.1.3 "><p id="p10273110172914"><a name="p10273110172914"></a><a name="p10273110172914"></a>被除数。</p>
</td>
</tr>
<tr id="row32731510102919"><td class="cellrowborder" valign="top" width="34.54%" headers="mcps1.1.4.1.1 "><p id="p16273151022915"><a name="p16273151022915"></a><a name="p16273151022915"></a>y</p>
</td>
<td class="cellrowborder" valign="top" width="34.55%" headers="mcps1.1.4.1.2 "><p id="p7274101042911"><a name="p7274101042911"></a><a name="p7274101042911"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="30.91%" headers="mcps1.1.4.1.3 "><p id="p327410104298"><a name="p327410104298"></a><a name="p327410104298"></a>除数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section1627418105297"></a>

T：返回向上取整的除法结果，当除数为0时，返回被除数。

## 约束说明<a name="section1127471013294"></a>

除数和被除数是相同类型整型（不包括bool类型）。

## 调用示例<a name="section14274141019295"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```cPP
CeilDiv<int32_t>(5000, 4096)
```

