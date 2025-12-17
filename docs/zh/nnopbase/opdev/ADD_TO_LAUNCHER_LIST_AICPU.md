# ADD\_TO\_LAUNCHER\_LIST\_AICPU<a name="ZH-CN_TOPIC_0000002515682989"></a>

## 宏功能<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_section0397626155918"></a>

创建某个AI CPU算子的执行任务，并置入aclOpExecutor的执行队列，在二阶段接口aclnn_Xxx_调用时执行。

## 宏原型<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_section1373361681114"></a>

```
ADD_TO_LAUNCHER_LIST_AICPU(KERNEL_NAME, attrNames, opArgs...)
```

## 参数说明<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_section76104422125"></a>

<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p14634454132618"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p14634454132618"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p4634135452615"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p4634135452615"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p763465418263"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p763465418263"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p193617166232"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p193617166232"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p193617166232"></a>KERNEL_NAME</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1634195412618"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1634195412618"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p19964198101710"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p19964198101710"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p19964198101710"></a>算子名，例如Add。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_row594913243139"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1695072418137"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1695072418137"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1695072418137"></a>attrNames</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p149507245135"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p149507245135"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p149507245135"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1295062411134"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1295062411134"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p1295062411134"></a>算子的属性名，参见<a href="OP_ATTR_NAMES.md">OP_ATTR_NAMES</a>。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_row617796114718"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p11774618475"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p11774618475"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p11774618475"></a>opArgs...</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p81775612471"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p81775612471"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p81775612471"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p817756134713"><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p817756134713"></a><a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_p817756134713"></a>算子的参数。</p>
</td>
</tr>
</tbody>
</table>

## 约束说明<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_zh-cn_topic_0000001647821269_section19165124931511"></a>

-   如果算子需要INFER\_SHAPE，那么此宏需要在[INFER\_SHAPE](INFER_SHAPE.md)之后调用。
-   如下接口是上述宏定义会调用到的关联接口。

    ```
    如下接口是上述宏定义会调用到的关联接口。
    OP_ATTR_NAMES
    OP_INPUT(x...)
    OP_OUTPUT(x...)
    OP_ATTR(x...)
    ```

## 调用示例<a name="zh-cn_topic_0000002114052993_zh-cn_topic_0000001971181261_section1086173012323"></a>

```
// 调用ADD_TO_LAUNCHER_LIST_AICPU创建IndexPut算子的执行任务，其中IndexPut是算子名，accumulate是算子的属性名，selfRef，values，masks，indices是算子输入参数，out是算子输出参数，accumulate是算子的属性参数
ADD_TO_LAUNCHER_LIST_AICPU(IndexPut, OP_ATTR_NAMES({"accumulate"}), OP_INPUT(selfRef, values, masks, indices), OP_OUTPUT(out), OP_ATTR(accumulate));
```

