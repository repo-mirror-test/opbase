# SetIntData<a name="ZH-CN_TOPIC_0000002515603011"></a>

## 功能说明<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_zh-cn_topic_0000001647821269_section36583473819"></a>

针对通过AllocHostTensor申请得到的host侧tensor，用一块int64\_t类型的内存初始化tensor数据。

## 函数原型<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void SetIntData(const int64_t *value, uint64_t size, op::DataType dataType)
```

## 参数说明<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_table36191122315"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_row76191012333"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p96196121135"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p96196121135"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p96196121135"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p12619112239"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p12619112239"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p12619112239"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1561951212317"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1561951212317"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1561951212317"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_row96209123316"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p572125814019"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p572125814019"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p572125814019"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p562016121038"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p562016121038"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p562016121038"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1544191212508"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1544191212508"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1544191212508"></a>指向需要写入aclTensor的数据内存指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_row15581152214315"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p258214221831"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p258214221831"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p258214221831"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p13582122210315"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p13582122210315"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p13582122210315"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1152931819501"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1152931819501"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p1152931819501"></a>需要写入的元素个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_row1299516116111"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p599610117120"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p599610117120"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p599610117120"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p203051181418"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p203051181418"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p203051181418"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p109961211114"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p109961211114"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_p109961211114"></a>数据类型为<span id="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_ph36553613160"><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_ph36553613160"></a><a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_ph36553613160"></a>op::DataType（即ge::DataType）</span>，将数据转为指定的dataType后，再写入aclTensor。</p>
<div class="note" id="note4931626141317"><a name="note4931626141317"></a><a name="note4931626141317"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p14931426151317"><a name="p14931426151317"></a><a name="p14931426151317"></a>ge::DataType介绍参见<span id="ph18436330201312"><a name="ph18436330201312"></a><a name="ph18436330201312"></a></span>中<span id="ph6644041102310"><a name="ph6644041102310"></a><a name="ph6644041102310"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_section89325461239"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114098041_zh-cn_topic_0000001919489842_section125709381912"></a>

```
// 初始化一块int64内存，赋值给input的前10个元素
void Func(const aclTensor *input) {
    int64_t myArray[10];
    input->SetData(myArray, 10, DT_INT64);
}
```

