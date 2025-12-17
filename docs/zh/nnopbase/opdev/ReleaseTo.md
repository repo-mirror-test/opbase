# ReleaseTo<a name="ZH-CN_TOPIC_0000002483403088"></a>

## 功能说明<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_section36583473819"></a>

将UniqueExecutor中保存的aclOpExecutor指针，传递到L2一阶段输出的executor中。

## 函数原型<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void ReleaseTo(aclOpExecutor **executor)
```

## 参数说明<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p1169694155618"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_p320343694214"></a>输出</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_p4147251103416"><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_p4147251103416"></a><a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_p4147251103416"></a>出参，将UniqueExecutor中的aclOpExecutor指针赋值给*executor。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_zh-cn_topic_0000001647821269_section19165124931511"></a>

executor非空。

## 调用示例<a name="zh-cn_topic_0000002114053077_zh-cn_topic_0000001974887105_section1086173012323"></a>

```
// aclnn固定写法
void aclnnAddGetWorkspaceSize(..., uint64_t *workspaceSize, aclOpExecutor **executor) {
    auto uniqueExecutor = CREATE_EXECUTOR();
    ......
    uniqueExecutor.ReleaseTo(executor);
}
```

