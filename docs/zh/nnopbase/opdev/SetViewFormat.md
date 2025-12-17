# SetViewFormat<a name="ZH-CN_TOPIC_0000002483403060"></a>

## 功能说明<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_zh-cn_topic_0000001647821269_section36583473819"></a>

设置aclTensor的ViewFormat。ViewFormat为aclTensor的逻辑Format。

## 函数原型<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void SetViewFormat(op::Format format)
```

## 参数说明<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p14634454132618"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p14634454132618"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p4634135452615"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p4634135452615"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p763465418263"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p763465418263"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p193617166232"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p193617166232"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p193617166232"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1634195412618"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1634195412618"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1481795774618"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1481795774618"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_p1481795774618"></a>数据类型为<span id="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919324542_ph14814172201"><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919324542_ph14814172201"></a><a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919324542_ph14814172201"></a>op::Format（即ge::Format）</span>，本身是一个枚举，包含多种不同的Format，例如NCHW、ND等。</p>
<div class="note" id="note1644425123316"><a name="note1644425123316"></a><a name="note1644425123316"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p126443254332"><a name="p126443254332"></a><a name="p126443254332"></a>ge::Format介绍参见<span id="ph1764422516336"><a name="ph1764422516336"></a><a name="ph1764422516336"></a></span>中<span id="ph12644125113311"><a name="ph12644125113311"></a><a name="ph12644125113311"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078498954_zh-cn_topic_0000001919329894_section1086173012323"></a>

```
// 将input的ViewFormat置为ND格式
void Func(const aclTensor *input) {
    input->SetViewFormat(ge::FORMAT_ND);
}
```

