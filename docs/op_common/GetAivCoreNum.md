# GetAivCoreNum<a name="ZH-CN_TOPIC_0000002450096174"></a>

## 产品支持情况<a name="section2226203620412"></a>

<a name="table12227536941"></a>
<table><thead align="left"><tr id="row19227193619413"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p1522717368413"><a name="p1522717368413"></a><a name="p1522717368413"></a><span id="ph922713612413"><a name="ph922713612413"></a><a name="ph922713612413"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p2022712364419"><a name="p2022712364419"></a><a name="p2022712364419"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row1522715366410"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p14227193611414"><a name="p14227193611414"></a><a name="p14227193611414"></a><span id="ph3227153613413"><a name="ph3227153613413"></a><a name="ph3227153613413"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p622713610418"><a name="p622713610418"></a><a name="p622713610418"></a>√</p>
</td>
</tr>
<tr id="row3227113614412"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p102274361745"><a name="p102274361745"></a><a name="p102274361745"></a><span id="ph422720365419"><a name="ph422720365419"></a><a name="ph422720365419"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p1822719361243"><a name="p1822719361243"></a><a name="p1822719361243"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section132286361144"></a>

获取平台AI Vector的核数。

## 函数原型<a name="section2228143619413"></a>

```Cpp
template <typename T>
uint32_t GetAivCoreNum(const T *context)
```

## 参数说明<a name="section1022813368418"></a>

<a name="table2229113612413"></a>
<table><thead align="left"><tr id="row102292361244"><th class="cellrowborder" valign="top" width="27.77%" id="mcps1.1.4.1.1"><p id="p1322915363415"><a name="p1322915363415"></a><a name="p1322915363415"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="27.779999999999998%" id="mcps1.1.4.1.2"><p id="p62296361414"><a name="p62296361414"></a><a name="p62296361414"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="44.45%" id="mcps1.1.4.1.3"><p id="p142299361846"><a name="p142299361846"></a><a name="p142299361846"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row7229173615415"><td class="cellrowborder" valign="top" width="27.77%" headers="mcps1.1.4.1.1 "><p id="p14229236445"><a name="p14229236445"></a><a name="p14229236445"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="27.779999999999998%" headers="mcps1.1.4.1.2 "><p id="p422963614413"><a name="p422963614413"></a><a name="p422963614413"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="44.45%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section2022916361747"></a>

返回平台AI Vector的核数，uint32\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section1722933610415"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```Cpp
compileInfo->vectorCoreNum = GetAivCoreNum(context_);
```

