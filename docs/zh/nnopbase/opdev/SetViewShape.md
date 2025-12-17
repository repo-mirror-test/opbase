# SetViewShape<a name="ZH-CN_TOPIC_0000002515683003"></a>

## 功能说明<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_zh-cn_topic_0000001647821269_section36583473819"></a>

设置aclTensor的ViewShape。ViewShape表示aclTensor的逻辑shape，可由[GetViewShape](GetViewShape.md)获取。

## 函数原型<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
void SetViewShape(const op::Shape &shape)
```

## 参数说明<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p14634454132618"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p14634454132618"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p4634135452615"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p4634135452615"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p763465418263"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p763465418263"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p193617166232"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p193617166232"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p193617166232"></a>shape</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p1634195412618"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p1634195412618"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p192942091214"><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p192942091214"></a><a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_p192942091214"></a>数据类型为<span id="zh-cn_topic_0000002078653682_ph2175626111016"><a name="zh-cn_topic_0000002078653682_ph2175626111016"></a><a name="zh-cn_topic_0000002078653682_ph2175626111016"></a>op::Shape（即gert::Shape）</span>，记录了一组shape信息，例如一个三维shape：[10, 20, 30]。</p>
<div class="note" id="note4931626141317"><a name="note4931626141317"></a><a name="note4931626141317"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p14931426151317"><a name="p14931426151317"></a><a name="p14931426151317"></a>gert::Shape介绍参见<span id="ph18436330201312"><a name="ph18436330201312"></a><a name="ph18436330201312"></a></span>中<span id="ph7436123021312"><a name="ph7436123021312"></a><a name="ph7436123021312"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653682_zh-cn_topic_0000001919484490_section1086173012323"></a>

```
// 将input的ViewShape设置为[1, 2, 3, 4, 5]
void Func(aclTensor *input) {
    gert::Shape newShape;
    for (int64_t i = 1; i <= 5; i++) {
        newShape.AppendDim(i);
    }
    input->SetViewShape(newShape);
}
```

