# GetPrimaryFormat<a name="ZH-CN_TOPIC_0000002515603019"></a>

## 功能说明<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_section36583473819"></a>

获取根format，去除关于C0的信息，只保留单纯的format信息。例如，将FORMAT\_FRACTAL\_Z\_C04转为FORMAT\_FRACTAL\_Z。

## 函数原型<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
int32_t GetPrimaryFormat(int32_t format)
```

```
Format GetPrimaryFormat(Format format)
```

## 参数说明<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p1169694155618"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_p4147251103416"><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_p4147251103416"></a><a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_p4147251103416"></a>原始目标数据格式。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_section25791320141317"></a>

去除C0信息后的格式。

## 约束说明<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098057_zh-cn_topic_0000001920997898_section125709381912"></a>

```
// 判断当input的storage format是fractal z时，返回
void Func(const aclTensor *input) {
    if (GetPrimaryFormat(input->GetStorageFormat()) == FORMAT_FRACTAL_Z){
        return;
    }
}
```

