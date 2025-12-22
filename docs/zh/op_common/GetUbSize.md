# GetUbSize<a name="ZH-CN_TOPIC_0000002483335665"></a>

## 功能说明<a name="section1166914118413"></a>

获取平台UB（Unified Buffer的简写）空间大小，单位bytes。

## 函数原型<a name="section76698411841"></a>

```
template <typename T>
uint32_t GetUbSize(const T *context)
```

## 参数说明<a name="section20669194116415"></a>

<a name="table5670184112417"></a>
<table><thead align="left"><tr id="row56701641746"><th class="cellrowborder" valign="top" width="29.14%" id="mcps1.1.4.1.1"><p id="p19670041749"><a name="p19670041749"></a><a name="p19670041749"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="29.15%" id="mcps1.1.4.1.2"><p id="p1267019412419"><a name="p1267019412419"></a><a name="p1267019412419"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="41.71%" id="mcps1.1.4.1.3"><p id="p1467017419414"><a name="p1467017419414"></a><a name="p1467017419414"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row1670134110411"><td class="cellrowborder" valign="top" width="29.14%" headers="mcps1.1.4.1.1 "><p id="p126707416417"><a name="p126707416417"></a><a name="p126707416417"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="29.15%" headers="mcps1.1.4.1.2 "><p id="p067004118418"><a name="p067004118418"></a><a name="p067004118418"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="41.71%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section0670141746"></a>

返回平台UB空间大小，uint64\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section10670134112417"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
compileInfo->ubSize = GetUbSize(context_);
```

