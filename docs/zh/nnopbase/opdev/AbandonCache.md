# AbandonCache<a name="ZH-CN_TOPIC_0000002515683035"></a>

## 功能说明<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_section36583473819"></a>

关闭aclnn cache缓存功能。

该功能是指首次调用aclnn算子后框架会记录cache缓存，后续再次调用时，将跳过一阶段aclnnXxxGetWorkspaceSize函数，从而达到性能优化的目的。

## 函数原型<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void AbandonCache(bool disableRepeat = false)
```

## 参数说明<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p0246309457"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p0246309457"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p0246309457"></a>disableRepeat</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p2408153114450"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p2408153114450"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p2408153114450"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p925843217455"><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p925843217455"></a><a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_p925843217455"></a>设置aclOpExecutor是否支持复用。默认为false，不复用。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_zh-cn_topic_0000001647821269_section19165124931511"></a>

对于一阶段aclnnXxxGetWorkspaceSize函数必须执行的场景，需在aclnnXxxGetWorkspaceSize函数中显式调用AbandonCache。

## 调用示例<a name="zh-cn_topic_0000002114098085_zh-cn_topic_0000001988374664_section1086173012323"></a>

```
void aclnnAddGetWorkspaceSize(..., uint64_t *workspaceSize, aclOpExecutor **executor) {
    auto uniqueExecutor = CREATE_EXECUTOR();
    ......
    uniqueExecutor.get()->AbandonCache();
}
```

