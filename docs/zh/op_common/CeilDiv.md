# CeilDiv<a name="ZH-CN_TOPIC_0000002450096170"></a>

## 功能说明<a name="section1627341013299"></a>

向上取整的除法。

## 函数原型<a name="section02736105291"></a>

```
template <typename T>
auto CeilDiv(T x, T y) -> typename std::enable_if<std::is_signed<T>::value, T>::type
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

```
CeilDiv<int32_t>(5000, 4096)
```

