# FloorDiv<a name="ZH-CN_TOPIC_0000002483335657"></a>

## 产品支持情况<a name="section2064210122912"></a>

<a name="table96428012297"></a>
<table><thead align="left"><tr id="row664220102916"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p1164350142918"><a name="p1164350142918"></a><a name="p1164350142918"></a><span id="ph2643005293"><a name="ph2643005293"></a><a name="ph2643005293"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p564311082910"><a name="p564311082910"></a><a name="p564311082910"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row564311011297"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p10643909297"><a name="p10643909297"></a><a name="p10643909297"></a><span id="ph464340132920"><a name="ph464340132920"></a><a name="ph464340132920"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p9643110132912"><a name="p9643110132912"></a><a name="p9643110132912"></a>√</p>
</td>
</tr>
<tr id="row106431005293"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p36437092915"><a name="p36437092915"></a><a name="p36437092915"></a><span id="ph146431609296"><a name="ph146431609296"></a><a name="ph146431609296"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p564370162918"><a name="p564370162918"></a><a name="p564370162918"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section86440016295"></a>

向下取整的除法。

## 函数原型<a name="section264419062919"></a>

```
template <typename T>
auto FloorDiv(T x, T y) -> typename std::enable_if<std::is_integral<T>::value, T>::type
```

## 参数说明<a name="section18644120122918"></a>

<a name="table10645100192918"></a>
<table><thead align="left"><tr id="row196451206295"><th class="cellrowborder" valign="top" width="23.22%" id="mcps1.1.4.1.1"><p id="p1464516032920"><a name="p1464516032920"></a><a name="p1464516032920"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="37.53%" id="mcps1.1.4.1.2"><p id="p106452082912"><a name="p106452082912"></a><a name="p106452082912"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="39.25%" id="mcps1.1.4.1.3"><p id="p13645160182920"><a name="p13645160182920"></a><a name="p13645160182920"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row126451903294"><td class="cellrowborder" valign="top" width="23.22%" headers="mcps1.1.4.1.1 "><p id="p8645502292"><a name="p8645502292"></a><a name="p8645502292"></a>x</p>
</td>
<td class="cellrowborder" valign="top" width="37.53%" headers="mcps1.1.4.1.2 "><p id="p116451101291"><a name="p116451101291"></a><a name="p116451101291"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="39.25%" headers="mcps1.1.4.1.3 "><p id="p36456022917"><a name="p36456022917"></a><a name="p36456022917"></a>被除数。</p>
</td>
</tr>
<tr id="row8645200102916"><td class="cellrowborder" valign="top" width="23.22%" headers="mcps1.1.4.1.1 "><p id="p16645150142919"><a name="p16645150142919"></a><a name="p16645150142919"></a>y</p>
</td>
<td class="cellrowborder" valign="top" width="37.53%" headers="mcps1.1.4.1.2 "><p id="p1064550162910"><a name="p1064550162910"></a><a name="p1064550162910"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="39.25%" headers="mcps1.1.4.1.3 "><p id="p1864540122912"><a name="p1864540122912"></a><a name="p1864540122912"></a>除数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section964511072915"></a>

T：返回向下取整的除法结果，当除数为0时，返回被除数。

## 约束说明<a name="section46451801296"></a>

除数和被除数请使用相同类型整型（不包括bool类型）。

## 调用示例<a name="section86458012295"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
FloorDiv<int32_t>(10, 3)
```

