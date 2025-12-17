# SetFp16Data<a name="ZH-CN_TOPIC_0000002483563036"></a>

## 功能说明<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_zh-cn_topic_0000001647821269_section36583473819"></a>

针对通过AllocHostTensor申请得到的host侧tensor，用一块float16类型的内存初始化tensor数据。

## 函数原型<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void SetFp16Data(const op::fp16_t *value, uint64_t size, op::DataType dataType)
```

## 参数说明<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_table36191122315"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_row76191012333"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p96196121135"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p96196121135"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p96196121135"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p12619112239"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p12619112239"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p12619112239"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1561951212317"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1561951212317"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1561951212317"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_row96209123316"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p554562918132"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p554562918132"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p554562918132"></a>value</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p145454292134"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p145454292134"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p145454292134"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1544191212508"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1544191212508"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1544191212508"></a>指向需要写入aclTensor的数据内存指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_row15581152214315"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p105452298132"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p105452298132"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p105452298132"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p14545129161310"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p14545129161310"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p14545129161310"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1152931819501"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1152931819501"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1152931819501"></a>需要写入的元素个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_row1299516116111"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p9545192920132"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p9545192920132"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p9545192920132"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p16545152941311"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p16545152941311"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p16545152941311"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1154572951314"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1154572951314"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_p1154572951314"></a>数据类型为<span id="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_ph36553613160"><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_ph36553613160"></a><a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_ph36553613160"></a>op::DataType（即ge::DataType）</span>，将数据转为指定的dataType后，再写入aclTensor。</p>
<div class="note" id="note4931626141317"><a name="note4931626141317"></a><a name="note4931626141317"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p14931426151317"><a name="p14931426151317"></a><a name="p14931426151317"></a>ge::DataType介绍参见<span id="ph18436330201312"><a name="ph18436330201312"></a><a name="ph18436330201312"></a></span>中<span id="ph6644041102310"><a name="ph6644041102310"></a><a name="ph6644041102310"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_section417717531637"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002114053037_zh-cn_topic_0000001919329910_section125709381912"></a>

```
// 初始化一块fp16内存，赋值给input的前10个元素
void Func(const aclTensor *input) {
    fp16_t myArray[10];
    input->SetData(myArray, 10, DT_FLOAT16);
}
```

