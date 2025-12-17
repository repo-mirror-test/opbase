# SetDataType<a name="ZH-CN_TOPIC_0000002483563034"></a>

## 功能说明<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_zh-cn_topic_0000001647821269_section36583473819"></a>

设置aclTensor的数据类型。

## 函数原型<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void SetDataType(op::DataType dataType)
```

## 参数说明<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p14634454132618"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p14634454132618"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.39%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p4634135452615"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p4634135452615"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.39%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p763465418263"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p763465418263"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p193617166232"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p193617166232"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p193617166232"></a>dataType</p>
</td>
<td class="cellrowborder" valign="top" width="15.39%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p1634195412618"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p1634195412618"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.39%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p109961211114"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p109961211114"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_p109961211114"></a>数据类型为<span id="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_ph36553613160"><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_ph36553613160"></a><a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_ph36553613160"></a>op::DataType（即ge::DataType）</span>，将aclTensor设置为dataType类型。</p>
<div class="note" id="note4931626141317"><a name="note4931626141317"></a><a name="note4931626141317"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p14931426151317"><a name="p14931426151317"></a><a name="p14931426151317"></a>ge::DataType介绍参见<span id="ph18436330201312"><a name="ph18436330201312"></a><a name="ph18436330201312"></a></span>中<span id="ph6644041102310"><a name="ph6644041102310"></a><a name="ph6644041102310"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053033_zh-cn_topic_0000001948648829_section1086173012323"></a>

```
// 将input的数据类型设置为int64
void Func(const aclTensor *input) {
    input->SetDataType(DT_INT64);
}
```

