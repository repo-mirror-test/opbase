# AllocFloatArray<a name="ZH-CN_TOPIC_0000002515603029"></a>

## 功能说明<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_section36583473819"></a>

申请一个aclFloatArray，并使用指定内存中的值对其进行初始化。

## 函数原型<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclFloatArray *AllocFloatArray(const float *value, uint64_t size)
```

## 参数说明<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p1856818154399"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p1856818154399"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p1856818154399"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p8568215193914"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p8568215193914"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p8568215193914"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p18568151511394"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p18568151511394"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p18568151511394"></a>源数据，用于初始化aclFloatArray。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p85681215193915"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p85681215193915"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p85681215193915"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p12568191514391"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p12568191514391"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p12568191514391"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p656891573918"><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p656891573918"></a><a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_p656891573918"></a>源数据的元素个数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回申请到的aclFloatArray对象，申请失败返回nullptr。

## 约束说明<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002078498998_zh-cn_topic_0000001920991906_section351220174618"></a>

```
// 申请一个长度为10的aclFloatArray
void Func(aclOpExecutor *executor) {
    float myArray[10];
    aclFloatArray *array = executor->AllocFloatArray(myArray, 10);
}
```

