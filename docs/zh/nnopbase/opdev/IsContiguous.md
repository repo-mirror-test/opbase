# IsContiguous<a name="ZH-CN_TOPIC_0000002515603043"></a>

## 功能说明<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_section36583473819"></a>

判断输入tensor是否为一个连续tensor。

## 函数原型<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsContiguous(const aclTensor *tensor)
```

## 参数说明<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p1169694155618"></a>tensor</p>
</td>
<td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_p4147251103416"><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_p4147251103416"></a><a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_p4147251103416"></a>目标tensor。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_section25791320141317"></a>

若为连续tensor返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_zh-cn_topic_0000001647821269_section19165124931511"></a>

-   传入tensor非空。
-   对于空指针场景，将返回true，输出ERROR提示："check tensor != nullptr failed"。

## 调用示例<a name="zh-cn_topic_0000002078499026_zh-cn_topic_0000001949526049_section1086173012323"></a>

```
// 判断当tensor非连续时，返回。
void Func(aclTensor *tensor) {
    if (!IsContiguous(tensor)) {
        return;
    }
}
```

