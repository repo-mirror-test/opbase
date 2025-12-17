# CommonOpExecutorRun<a name="ZH-CN_TOPIC_0000002483563056"></a>

## 功能说明<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_section36583473819"></a>

根据workspace、stream，执行算子executor上下文中的所有任务。

## 函数原型<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclnnStatus CommonOpExecutorRun(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor, aclrtStream stream)
```

## 参数说明<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p1169694155618"></a>workspace</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p4147251103416"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p4147251103416"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p4147251103416"></a>根据L2一阶段接口计算出的workspaceSize，在device侧申请的片上内存指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p19185154915611"></a>workspaceSize</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p17947146143514"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p17947146143514"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p17947146143514"></a>L2一阶段接口计算出的workspaceSize。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_row16284118151118"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p182841884116"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p182841884116"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p182841884116"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p42846831116"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p42846831116"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p42846831116"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p1928410811110"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p1928410811110"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p1928410811110"></a>L2一阶段接口调用后生成的op执行器对象。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_row339931021114"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p440016109113"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p440016109113"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p440016109113"></a>stream</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p134005109116"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p134005109116"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p134005109116"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p540017104111"><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p540017104111"></a><a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_p540017104111"></a>指定流执行executor中的算子任务。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_section25791320141317"></a>

执行成功返回ACLNN\_SUCCESS，否则返回aclnn错误码。

## 约束说明<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_zh-cn_topic_0000001647821269_section19165124931511"></a>

-   executor不能为空。
-   workspaceSize大于0时，workspace不能为空。

## 调用示例<a name="zh-cn_topic_0000002078653738_zh-cn_topic_0000001949510829_section351220174618"></a>

```
// aclnnAdd的二阶段函数，执行executor任务队列中的算子
aclnnStatus aclnnAdd(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor, aclrtStream stream) {
    return CommonOpExecutorRun(workspace, workspaceSize, executor, stream);
}
```

