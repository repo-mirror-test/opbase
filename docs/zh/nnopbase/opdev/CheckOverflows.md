# CheckOverflows<a name="ZH-CN_TOPIC_0000002515603013"></a>

## 功能说明<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_zh-cn_topic_0000001647821269_section36583473819"></a>

校验aclScalar中保存的标量，数值是否有溢出。

## 函数原型<a name="section18550645163319"></a>

```
template<typename to> bool CheckOverflows()
```

## 参数说明<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_table36191122315"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_row76191012333"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p96196121135"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p96196121135"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p96196121135"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p12619112239"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p12619112239"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p12619112239"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1561951212317"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1561951212317"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1561951212317"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_row96209123316"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p554562918132"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p554562918132"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p554562918132"></a>to</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p145454292134"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p145454292134"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p145454292134"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1544191212508"><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1544191212508"></a><a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_p1544191212508"></a>判断当前是aclScalar转为to表示的数据类型时，是否会溢出。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_zh-cn_topic_0000001647821269_section25791320141317"></a>

如果存在溢出，则返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_section237610235566"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098045_zh-cn_topic_0000001919329914_section125709381912"></a>

```
// 判断input转为fp16和int16是否会发生溢出
void Func(const aclScalar *input) {
    if (input->CheckOverflows<fp16_t>()) {
        return;
    }
    if (input->CheckOverflows<int16_t>()) {
        return;
    }
}
```

