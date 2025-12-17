# IsFloatingType<a name="ZH-CN_TOPIC_0000002515683047"></a>

## 功能说明<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入的数据类型是否为浮点类型，包括Float64（即Double）、Float32（即Float）、BFloat16、Float16。

## 函数原型<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsFloatingType(const DataType dtype)
```

## 参数说明<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p159343464291"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p159343464291"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p159343464291"></a>dtype</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p1934154610297"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p1934154610297"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p1934154610297"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p17692294317"><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p17692294317"></a><a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_p17692294317"></a>输入的数据类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_section25791320141317"></a>

若为浮点类型返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098109_zh-cn_topic_0000001932377800_section125709381912"></a>

```
// 判断dtype不为浮点数类型时，返回
void Func(const DataType dtype) {
    if (!IsFloatingType(dtype)) {
        return;
    }
}
```

