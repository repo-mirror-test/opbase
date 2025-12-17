# ToOpFormat<a name="ZH-CN_TOPIC_0000002515683021"></a>

## 功能说明<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_section36583473819"></a>

将aclFormat转为对应的op::Format。

-   aclFormat：该数据格式的详细定义参见。
-   op::Format：算子框架内部定义的数据格式，本质使用的是GE定义的ge::Format，参见[《基础数据结构和接口参考》](https://www.hiascend.com/document/redirect/CannCommunitybasicopapi)中”ge命名空间 > Format“。

## 函数原型<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
Format ToOpFormat(aclFormat format)
```

## 参数说明<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p1169694155618"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_p4147251103416"><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_p4147251103416"></a><a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_p4147251103416"></a>待转换的原始数据格式aclFormat。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回op::Format类型。

## 约束说明<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653714_zh-cn_topic_0000001920997906_section351220174618"></a>

```
// 获取ACL_FORMAT_ND对应的Format枚举
void Func() {
    Format format = ToOpFormat(ACL_FORMAT_ND);
}
```

