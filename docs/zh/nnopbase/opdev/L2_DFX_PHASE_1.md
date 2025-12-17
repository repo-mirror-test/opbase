# L2\_DFX\_PHASE\_1<a name="ZH-CN_TOPIC_0000002483403046"></a>

## 宏功能<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_section0397626155918"></a>

用于L2一阶段接口aclnn_Xxx_GetWorkspaceSize时延统计及入参打印，必须在一阶段接口最前方调用。

## 宏原型<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_section1373361681114"></a>

```
L2_DFX_PHASE_1(APIName, IN, OUT)
```

## 参数说明<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_section76104422125"></a>

<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p14634454132618"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p14634454132618"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p4634135452615"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p4634135452615"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p763465418263"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p763465418263"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p193617166232"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p193617166232"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p193617166232"></a>APIName</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1634195412618"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1634195412618"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p19964198101710"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p19964198101710"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p19964198101710"></a>Host侧L2接口名，如aclnn<em id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_i04836338356"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_i04836338356"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_i04836338356"></a>Xxx</em>。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_row594913243139"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1695072418137"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1695072418137"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1695072418137"></a>IN</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p149507245135"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p149507245135"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p149507245135"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1295062411134"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1295062411134"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1295062411134"></a>算子的输入参数，由<a href="DFX_IN.md">DFX_IN</a>封装。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_row113024019562"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p830640175617"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p830640175617"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p830640175617"></a>OUT</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830184019563"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830184019563"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830184019563"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830104014568"><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830104014568"></a><a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_p1830104014568"></a>算子的输出参数，由<a href="DFX_OUT.md">DFX_OUT</a>封装。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_zh-cn_topic_0000001647821269_section19165124931511"></a>

-   必须在L2一阶段接口的入口处调用，否则可能导致时延统计出现误差。传入参数必须与L2接口的参数列表严格一致。
-   如下接口是上述宏定义会调用到的关联接口。

    ```
    #define DFX_IN(...) std::make_tuple(__VA_ARGS__)
    #define DFX_OUT(...) std::make_tuple(__VA_ARGS__)
    ```

## 调用示例<a name="zh-cn_topic_0000002114097997_zh-cn_topic_0000001943982796_section1086173012323"></a>

```
// abs算子的L2接口一阶段时延统计及参数打印，self为abs算子的输入，out为abs算子的输出
L2_DFX_PHASE_1(aclnnAbs, DFX_IN(self), DFX_OUT(out));
```

