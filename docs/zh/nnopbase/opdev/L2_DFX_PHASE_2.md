# L2\_DFX\_PHASE\_2<a name="ZH-CN_TOPIC_0000002515602989"></a>

## 宏功能<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_section0397626155918"></a>

用于L2二阶段接口aclnn_Xxx_时延统计，必须在二阶段接口最前方调用。

## 宏原型<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_section1373361681114"></a>

```
L2_DFX_PHASE_2(APIName)
```

## 参数说明<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_section76104422125"></a>

<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p14634454132618"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p14634454132618"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p4634135452615"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p4634135452615"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p763465418263"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p763465418263"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p193617166232"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p193617166232"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p193617166232"></a>APIName</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p1634195412618"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p1634195412618"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p19964198101710"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p19964198101710"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_p19964198101710"></a>Host侧L2接口名，如aclnn<em id="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_i04836338356"><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_i04836338356"></a><a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_i04836338356"></a>Xxx</em>。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_zh-cn_topic_0000001647821269_section19165124931511"></a>

必须在L2二阶段接口的入口处调用，否则可能导致时延统计出现误差。

## 调用示例<a name="zh-cn_topic_0000002078653662_zh-cn_topic_0000001971181213_section1086173012323"></a>

```
// abs算子的L2接口二阶段时延统计
L2_DFX_PHASE_2(aclnnAbs);
```

