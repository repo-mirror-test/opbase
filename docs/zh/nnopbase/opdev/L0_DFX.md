# L0\_DFX<a name="ZH-CN_TOPIC_0000002483563012"></a>

## 宏功能<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_section0397626155918"></a>

用于L0接口时延统计及入参打印，必须在L0接口最前方调用。

## 宏原型<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_section1373361681114"></a>

```
L0_DFX(profilingName, ...)
```

## 参数说明<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_section76104422125"></a>

<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p14634454132618"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p14634454132618"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p4634135452615"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p4634135452615"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p763465418263"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p763465418263"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p193617166232"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p193617166232"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p193617166232"></a>profilingName</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1634195412618"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1634195412618"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p19964198101710"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p19964198101710"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p19964198101710"></a>Host侧L0接口名，例如AddAiCore。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_row594913243139"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1695072418137"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1695072418137"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1695072418137"></a>...</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p149507245135"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p149507245135"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p149507245135"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1295062411134"><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1295062411134"></a><a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_p1295062411134"></a>Host侧L0接口的入参，可变长参数。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_zh-cn_topic_0000001647821269_section19165124931511"></a>

必须在L0接口的入口处调用，否则可能导致时延统计出现误差。

## 调用示例<a name="zh-cn_topic_0000002078498926_zh-cn_topic_0000001943982800_section1086173012323"></a>

```
// 统计L0接口AddAiCore的时延及参数打印，AddAiCore是L0接口的名字，self，other和addOut是L0接口参数
L0_DFX(AddAiCore, self, other, addOut);
```

