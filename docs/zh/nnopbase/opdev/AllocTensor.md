# AllocTensor<a name="ZH-CN_TOPIC_0000002515683029"></a>

## 功能说明<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_section36583473819"></a>

申请一个device侧tensor，提供多个重载函数，可以指定不同的属性。

## 函数原型<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
aclTensor *AllocTensor(const Shape &shape, DataType dataType, Format format = FORMAT_ND)
```

```
aclTensor *AllocTensor(const Shape &storageShape, const Shape &originShape, DataType dataType, Format storageFormat, Format originFormat)
```

```
aclTensor *AllocTensor(DataType dataType, Format storageFormat, Format originFormat)
```

## 参数说明<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="19.42%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="13.209999999999999%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p1169694155618"></a>shape</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p4147251103416"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p4147251103416"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p4147251103416"></a>将aclTensor的<a href="GetStorageShape.md">StorageShape</a>和<a href="GetOriginalShape.md">OriginShape</a>都设置为指定的shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p19185154915611"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p17947146143514"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p17947146143514"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p17947146143514"></a>指定aclTensor的数据类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_row5726935194216"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p8727153514215"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p8727153514215"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p8727153514215"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1272711353426"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1272711353426"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1272711353426"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1572723524211"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1572723524211"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1572723524211"></a>将aclTensor的<a href="GetStorageFormat.md">StorageFormat</a>和<a href="GetOriginalFormat.md">OriginFormat</a>都设置为指定的format。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_row1922313219436"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10223152134318"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10223152134318"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10223152134318"></a>storageShape</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223122114431"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223122114431"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223122114431"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223142124315"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223142124315"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p9223142124315"></a>将aclTensor的<a href="GetStorageShape.md">StorageShape</a>设置为指定shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_row1763716237433"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1563752314316"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1563752314316"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1563752314316"></a>originShape</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p15637423124311"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p15637423124311"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p15637423124311"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p063752315431"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p063752315431"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p063752315431"></a>将aclTensor的<a href="GetOriginalShape.md">OriginShape</a>设置为指定shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_row1438482604319"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384626184312"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384626184312"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384626184312"></a>storageFormat</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p113841826124313"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p113841826124313"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p113841826124313"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384926144314"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384926144314"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1384926144314"></a>将aclTensor的<a href="GetStorageFormat.md">StorageFormat</a>设置为指定format。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_row3559728104311"><td class="cellrowborder" valign="top" width="19.42%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1555942834318"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1555942834318"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p1555942834318"></a>originFormat</p>
</td>
<td class="cellrowborder" valign="top" width="13.209999999999999%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p95591328144314"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p95591328144314"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p95591328144314"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10624132924510"><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10624132924510"></a><a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_p10624132924510"></a>将aclTensor的<a href="GetOriginalFormat.md">OriginFormat</a>设置为指定format。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回申请得到的aclTensor，申请失败则返回nullptr。

## 约束说明<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114098073_zh-cn_topic_0000001921151590_section1086173012323"></a>

```
// 申请一个int64类型，shape为[1, 2, 3, 4, 5]的ND tensor
void Func(aclOpExecutor *executor) {
    gert::Shape newShape;
    for (int64_t i = 1; i <= 5; i++) {
        newShape.AppendDim(i);
    }
    aclTensor *tensor = executor->AllocTensor(newShape, DT_INT64, ge::FORMAT_ND);
}
```

