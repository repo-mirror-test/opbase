# ConvertToTensor<a name="ZH-CN_TOPIC_0000002515683033"></a>

## 功能说明<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_section36583473819"></a>

将不同数据类型的host侧数据，转为一个host侧aclTensor对象。

## 函数原型<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclTensor *ConvertToTensor(const aclIntArray *value, DataType dataType)
```

```
aclTensor *ConvertToTensor(const aclBoolArray *value, DataType dataType)
```

```
aclTensor *ConvertToTensor(const aclFloatArray *value, DataType dataType)
```

```
aclTensor *ConvertToTensor(const aclFp16Array *value, DataType dataType)
```

```
aclTensor *ConvertToTensor(const aclBf16Array *value, DataType dataType)
```

```
aclTensor *ConvertToTensor(const aclScalar *value, DataType dataType)
```

```
template<typename T> 
aclTensor *ConvertToTensor(const T *value, uint64_t size, DataType dataType)
```

## 参数说明<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_row7861194518344"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p124719556346"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p124719556346"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p124719556346"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p747155123411"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p747155123411"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p747155123411"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p134715512341"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p134715512341"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p134715512341"></a>host侧源数据。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_row11454184973417"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p14718552342"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p14718552342"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p14718552342"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p184711557344"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p184711557344"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p184711557344"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p347255143420"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p347255143420"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p347255143420"></a>源数据的元素个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_row786124511346"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p947955173417"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p947955173417"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p947955173417"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p64712550347"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p64712550347"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p64712550347"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p18475553343"><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p18475553343"></a><a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_p18475553343"></a>将源数据转换为指定数据类型后，写入aclTensor。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回转换后的host侧tensor。

## 约束说明<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114098081_zh-cn_topic_0000001921151602_section351220174618"></a>

```
// 分别将一个aclScalar和int64_t转为host侧tensor
void Func(aclOpExecutor *executor) {
    int64_t val = 5;
    aclScalar *scalar = executor->AllocScalar(val);
    aclTensor *tensor = executor->ConvertToTensor(scalar, DT_INT64);
    tensor = executor->ConvertToTensor(&val, 1, DT_INT64);
}
```

