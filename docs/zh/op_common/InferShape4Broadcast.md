# InferShape4Broadcast<a name="ZH-CN_TOPIC_0000002483335653"></a>

## 功能说明<a name="section36583473819"></a>

图模式场景下，broadcast类算子的InferShape方法（用于推导输出张量的形状shape）。

## 函数原型<a name="section13230182415108"></a>

```
ge::graphStatus InferShape4Broadcast(gert::InferShapeContext* context)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="24.98%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.990000000000002%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="50.029999999999994%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="24.98%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a><span>context</span></p>
</td>
<td class="cellrowborder" valign="top" width="24.990000000000002%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="50.029999999999994%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a><span>GE传入的InferShape上下文</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回类型为ge::graphStatus：

-   ge::GRAPH\_SUCCESS：InferShape成功。
-   ge::GRAPH\_FAIL：InferShape失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section423216448015"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// IsFinite算子进行inferShape推导，其推导过程与Broadcast算子推导过程一致，可直接复用
ge::graphStatus InferShape4IsFinite(gert::InferShapeContext* context)
{
    return Ops::Base::InferShape4Broadcast(context);
}
// IsFinite算子及其推导函数注册到GE
IMPL_OP_INFERSHAPE(IsFinite).InferShape(InferShape4IsFinite);
}
```

