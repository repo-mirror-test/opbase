# CopyNpuToNpu<a name="ZH-CN_TOPIC_0000002515603023"></a>

## 功能说明<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_section36583473819"></a>

创建一个device侧到device侧的数据拷贝任务，并放入executor的任务队列中。

## 函数原型<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclnnStatus CopyNpuToNpu(const aclTensor *src, const aclTensor *dst, aclOpExecutor *executor)
```

## 参数说明<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p1169694155618"></a>src</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p4147251103416"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p4147251103416"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p4147251103416"></a>拷贝的源tensor。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p19185154915611"></a>dst</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p01385242011"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p01385242011"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p01385242011"></a>拷贝的目的tensor。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_row2785165872013"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p167852589205"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p167852589205"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p167852589205"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p11785115820208"><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p11785115820208"></a><a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_p11785115820208"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098065_p151971643133013"><a name="zh-cn_topic_0000002114098065_p151971643133013"></a><a name="zh-cn_topic_0000002114098065_p151971643133013"></a>L2接口中一阶段接口声明的算子执行器对象。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_section25791320141317"></a>

创建拷贝任务成功，则返回ACLNN\_SUCCESS（状态码值0），否则返回其他aclnn错误码。

## 约束说明<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114098065_zh-cn_topic_0000001921000858_section351220174618"></a>

```
// 创建src到dst的拷贝任务， 如果不成功则返回
void Func(const aclTensor *src, const aclTensor *dst, aclOpExecutor *executor) {
    if (CopyNpuToNpu(src, dst, executor) != ACLNN_SUCCESS) {
        return;
    }
}
```

