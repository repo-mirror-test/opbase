# CopyToNpu<a name="ZH-CN_TOPIC_0000002483563046"></a>

## 功能说明<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_section36583473819"></a>

创建一个host侧到device侧的数据拷贝任务，并放入executor的任务队列中。

## 函数原型<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
const aclTensor *CopyToNpu(const aclTensor *src, aclOpExecutor *executor)
```

## 参数说明<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p1169694155618"></a>src</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p4147251103416"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p4147251103416"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p4147251103416"></a>需要拷贝到device侧的host侧数据。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p19185154915611"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p17947146143514"><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p17947146143514"></a><a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_p17947146143514"></a>L2接口中一阶段接口声明的算子执行器对象。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_section25791320141317"></a>

拷贝到device侧后，指向device侧数据的aclTensor。任务创建失败则返回nullptr。

## 约束说明<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114053057_zh-cn_topic_0000001949519781_section351220174618"></a>

```
// 初始化一个host侧tensor，并拷贝到dst，dst为一个device侧tensor
void Func(aclOpExecutor *executor) {
    int64_t myArray[10];
    auto src = executor->ConvertToTensor(myArray, 10, DT_INT64);
    auto dst = CopyToNpu(src, executor);
}
```

