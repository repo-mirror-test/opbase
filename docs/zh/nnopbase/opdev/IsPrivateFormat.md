# IsPrivateFormat<a name="ZH-CN_TOPIC_0000002483403074"></a>

## 功能说明<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入的format是否为私有格式。

## 函数原型<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsPrivateFormat(Format format)
```

## 参数说明<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p1169694155618"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_p4147251103416"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_p4147251103416"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_p4147251103416"></a>待校验的数据格式，数据类型为<span id="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_ph14814172201"><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_ph14814172201"></a><a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_ph14814172201"></a>op::Format（即ge::Format）</span>。</p>
<div class="note" id="note4931626141317"><a name="note4931626141317"></a><a name="note4931626141317"></a><span class="notetitle"> 说明： </span><div class="notebody"><p id="p14931426151317"><a name="p14931426151317"></a><a name="p14931426151317"></a>ge::Format介绍参见<span id="ph18436330201312"><a name="ph18436330201312"></a><a name="ph18436330201312"></a></span>中<span id="ph1259312543151"><a name="ph1259312543151"></a><a name="ph1259312543151"></a></span>。</p>
</div></div>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_section25791320141317"></a>

format为私有格式返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078498978_zh-cn_topic_0000001920997894_section125709381912"></a>

```
// 判断当input的storage format为私有格式时，返回
void Func(const aclTensor *input) {
    if (IsPrivateFormat(input->GetStorageFormat())) {
        return;
    }
}
```

