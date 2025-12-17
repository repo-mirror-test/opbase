# SetViewStrides<a name="ZH-CN_TOPIC_0000002515683007"></a>

## 功能说明<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_zh-cn_topic_0000001647821269_section36583473819"></a>

设置aclTensor的ViewStrides。

## 函数原型<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
SetViewStrides(const op::Strides &strides)
```

```
SetViewStrides(op::Strides &&strides)
```

## 参数说明<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_table4634135492614"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_row1963435442618"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p14634454132618"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p14634454132618"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p14634454132618"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p4634135452615"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p4634135452615"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p4634135452615"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p763465418263"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p763465418263"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p763465418263"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_row8634185442615"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p193617166232"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p193617166232"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p193617166232"></a>strides</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p1634195412618"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p1634195412618"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p1634195412618"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p18635145402615"><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p18635145402615"></a><a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_p18635145402615"></a>类型为FVector&lt;int64_t&gt;<span id="ph4202125913186"><a name="ph4202125913186"></a><a name="ph4202125913186"></a>（FVector参见<a href="aclnn开发接口列表.md#zh-cn_topic_0000002114052989_table2712056035">表3</a>）</span>，表示aclTensor每一维的stride大小，取值不支持负数。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_zh-cn_topic_0000001647821269_section25791320141317"></a>

void

## 约束说明<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653690_zh-cn_topic_0000001948648821_section1086173012323"></a>

```
// 将input最后一维的stride扩大8倍。
void Func(const aclTensor *input) {
    auto strides = input->GetViewStrides();
    strides[strides.size() - 1] *= 8;
    input->SetViewStrides(strides);
}
```

