# GetAicCoreNum<a name="ZH-CN_TOPIC_0000002483215685"></a>

## 产品支持情况<a name="section198166384418"></a>

<a name="table108160383416"></a>
<table><thead align="left"><tr id="row1881619389412"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p19816133820412"><a name="p19816133820412"></a><a name="p19816133820412"></a><span id="ph981612387420"><a name="ph981612387420"></a><a name="ph981612387420"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p1581612387415"><a name="p1581612387415"></a><a name="p1581612387415"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row781616381148"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p1381612380415"><a name="p1381612380415"></a><a name="p1381612380415"></a><span id="ph681618388416"><a name="ph681618388416"></a><a name="ph681618388416"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p12816103818413"><a name="p12816103818413"></a><a name="p12816103818413"></a>√</p>
</td>
</tr>
<tr id="row108161438444"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p12816203812416"><a name="p12816203812416"></a><a name="p12816203812416"></a><span id="ph1881615381045"><a name="ph1881615381045"></a><a name="ph1881615381045"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p48163381747"><a name="p48163381747"></a><a name="p48163381747"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section28189382416"></a>

获取平台AI Cube的核数。

## 函数原型<a name="section108187381641"></a>

```Cpp
template <typename T>
uint32_t GetAicCoreNum(const T *context)
```

## 参数说明<a name="section681813389411"></a>

<a name="table48184381943"></a>
<table><thead align="left"><tr id="row16818113810412"><th class="cellrowborder" valign="top" width="26.047395260473955%" id="mcps1.1.4.1.1"><p id="p198181838345"><a name="p198181838345"></a><a name="p198181838345"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="26.05739426057394%" id="mcps1.1.4.1.2"><p id="p168182038942"><a name="p168182038942"></a><a name="p168182038942"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="47.8952104789521%" id="mcps1.1.4.1.3"><p id="p4818938646"><a name="p4818938646"></a><a name="p4818938646"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row188182381418"><td class="cellrowborder" valign="top" width="26.047395260473955%" headers="mcps1.1.4.1.1 "><p id="p168181238046"><a name="p168181238046"></a><a name="p168181238046"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="26.05739426057394%" headers="mcps1.1.4.1.2 "><p id="p38181338143"><a name="p38181338143"></a><a name="p38181338143"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="47.8952104789521%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section12818338340"></a>

返回平台AI Cube的核数，uint32\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section1381923817418"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```Cpp
compileInfo->vectorCoreNum = GetAicCoreNum(context_);
```

