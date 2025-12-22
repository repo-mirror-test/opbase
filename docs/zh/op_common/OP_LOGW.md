# OP\_LOGW<a name="ZH-CN_TOPIC_0000002483335645"></a>

## 功能说明<a name="section36583473819"></a>

打印算子WARNING级别日志。

## 函数原型<a name="section13230182415108"></a>

```
OP_LOGW(opName, ...)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="27.6%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="17.119999999999997%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="55.279999999999994%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="27.6%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a>opName</p>
</td>
<td class="cellrowborder" valign="top" width="17.119999999999997%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="55.279999999999994%" headers="mcps1.1.4.1.3 "><p id="p2090913710352"><a name="p2090913710352"></a><a name="p2090913710352"></a>待打印对象，可以是算子名，表示打印算子信息；也可以是某个函数名，表示打印函数内相关信息。支持const char*或std::string类型。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

无

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
bool BroadcastDim(int64_t& dim1, const int64_t dim2)
{
    if ((dim1 != 1) && (dim2 != 1)) {
        OP_LOGW("BroadcastDim", "%ld and %ld cannot broadcast!", dim1, dim2);
        return false;
    }

    return true;
}
```

