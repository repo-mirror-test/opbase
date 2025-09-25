# GetUbBlockSize<a name="ZH-CN_TOPIC_0000002450255794"></a>

## 产品支持情况<a name="section1276119431346"></a>

<a name="table167613435417"></a>
<table><thead align="left"><tr id="row1076194316411"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p1176144315411"><a name="p1176144315411"></a><a name="p1176144315411"></a><span id="ph9761104319418"><a name="ph9761104319418"></a><a name="ph9761104319418"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p20761743642"><a name="p20761743642"></a><a name="p20761743642"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row9761134313418"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p9761194314417"><a name="p9761194314417"></a><a name="p9761194314417"></a><span id="ph147611543342"><a name="ph147611543342"></a><a name="ph147611543342"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p167614430419"><a name="p167614430419"></a><a name="p167614430419"></a>√</p>
</td>
</tr>
<tr id="row5761174313415"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p1376114431047"><a name="p1376114431047"></a><a name="p1376114431047"></a><span id="ph1376113431441"><a name="ph1376113431441"></a><a name="ph1376113431441"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p167617431944"><a name="p167617431944"></a><a name="p167617431944"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section7762643544"></a>

获取平台UB（Unified Buffer的简写）的block单元大小，单位bytes。

## 函数原型<a name="section37623431245"></a>

```Cpp
template <typename T>
uint32_t GetUbBlockSize([[maybe_unused]] const T *context)
```

## 参数说明<a name="section12762154314419"></a>

<a name="table676294314413"></a>
<table><thead align="left"><tr id="row107625431844"><th class="cellrowborder" valign="top" width="26.369999999999997%" id="mcps1.1.4.1.1"><p id="p47621543649"><a name="p47621543649"></a><a name="p47621543649"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="27.13%" id="mcps1.1.4.1.2"><p id="p127632043540"><a name="p127632043540"></a><a name="p127632043540"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="46.5%" id="mcps1.1.4.1.3"><p id="p1276318438414"><a name="p1276318438414"></a><a name="p1276318438414"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row157631343544"><td class="cellrowborder" valign="top" width="26.369999999999997%" headers="mcps1.1.4.1.1 "><p id="p976311433410"><a name="p976311433410"></a><a name="p976311433410"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="27.13%" headers="mcps1.1.4.1.2 "><p id="p8763124313413"><a name="p8763124313413"></a><a name="p8763124313413"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="46.5%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section3763443440"></a>

uint32\_t：返回平台UB的block单元大小（当前为32bytes）。

## 约束说明<a name="section1576313439416"></a>

无

## 调用示例<a name="section476315431449"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```Cpp
compileInfo->ubBlockSize = GetUbBlockSize(context_);
```

