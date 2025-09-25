# GetUbSize<a name="ZH-CN_TOPIC_0000002483335665"></a>

## 产品支持情况<a name="section116689411844"></a>

<a name="table86686411547"></a>
<table><thead align="left"><tr id="row186685411245"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p266814411448"><a name="p266814411448"></a><a name="p266814411448"></a><span id="ph2668441947"><a name="ph2668441947"></a><a name="ph2668441947"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p1766811411940"><a name="p1766811411940"></a><a name="p1766811411940"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row15668194112412"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p7668141642"><a name="p7668141642"></a><a name="p7668141642"></a><span id="ph566874114420"><a name="ph566874114420"></a><a name="ph566874114420"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p1666814411146"><a name="p1666814411146"></a><a name="p1666814411146"></a>√</p>
</td>
</tr>
<tr id="row566817416416"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p866814416419"><a name="p866814416419"></a><a name="p866814416419"></a><span id="ph1266844115413"><a name="ph1266844115413"></a><a name="ph1266844115413"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p1566810411942"><a name="p1566810411942"></a><a name="p1566810411942"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section1166914118413"></a>

获取平台UB（Unified Buffer的简写）空间大小，单位bytes。

## 函数原型<a name="section76698411841"></a>

```Cpp
template <typename T>
uint32_t GetUbSize(const T *context)
```

## 参数说明<a name="section20669194116415"></a>

<a name="table5670184112417"></a>
<table><thead align="left"><tr id="row56701641746"><th class="cellrowborder" valign="top" width="29.14%" id="mcps1.1.4.1.1"><p id="p19670041749"><a name="p19670041749"></a><a name="p19670041749"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="29.15%" id="mcps1.1.4.1.2"><p id="p1267019412419"><a name="p1267019412419"></a><a name="p1267019412419"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="41.71%" id="mcps1.1.4.1.3"><p id="p1467017419414"><a name="p1467017419414"></a><a name="p1467017419414"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row1670134110411"><td class="cellrowborder" valign="top" width="29.14%" headers="mcps1.1.4.1.1 "><p id="p126707416417"><a name="p126707416417"></a><a name="p126707416417"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="29.15%" headers="mcps1.1.4.1.2 "><p id="p067004118418"><a name="p067004118418"></a><a name="p067004118418"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="41.71%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section0670141746"></a>

返回平台UB空间大小，uint64\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section10670134112417"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```Cpp
compileInfo->ubSize = GetUbSize(context_);
```

