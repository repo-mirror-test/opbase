# AllocScalar<a name="ZH-CN_TOPIC_0000002515603031"></a>

## 功能说明<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_section36583473819"></a>

申请一个aclScalar对象，并对其赋值。通过多个重载函数，用于支持多种数据类型。

## 函数原型<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclScalar *AllocScalar(const void *data, op::DataType dataType)
```

```
aclScalar *AllocScalar(float value)
```

```
aclScalar *AllocScalar(double value)
```

```
aclScalar *AllocScalar(fp16_t value)
```

```
aclScalar *AllocScalar(bfloat16 value)
```

```
aclScalar *AllocScalar(int32_t value)
```

```
aclScalar *AllocScalar(int64_t value)
```

```
aclScalar *AllocScalar(int16_t value)
```

```
aclScalar *AllocScalar(int8_t value)
```

```
aclScalar *AllocScalar(uint32_t value)
```

```
aclScalar *AllocScalar(uint64_t value)
```

```
aclScalar *AllocScalar(uint16_t value)
```

```
aclScalar *AllocScalar(uint8_t value)
```

```
aclScalar *AllocScalar(bool value)
```

## 参数说明<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p1169694155618"></a>data</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p4147251103416"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p4147251103416"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p4147251103416"></a>源数据指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p19185154915611"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p17947146143514"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p17947146143514"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p17947146143514"></a>源数据的数据类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_row1619473352810"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p11886194212812"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p11886194212812"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p11886194212812"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p6886144218286"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p6886144218286"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p6886144218286"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p88862042132811"><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p88862042132811"></a><a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_p88862042132811"></a>将aclScalar的内容指定为value。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_section25791320141317"></a>

申请到的aclScalar对象，申请失败返回nullptr。

## 约束说明<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002078499002_zh-cn_topic_0000001949510821_section351220174618"></a>

```
// 初始化一个值为5，数据类型为int64的aclScalar对象
void Func(aclOpExecutor *executor) {
    int64_t val = 5;
    aclScalar *scalar = executor->AllocScalar(val);
    scalar = executor->AllocScalar(&val, DT_INT64);
}
```

