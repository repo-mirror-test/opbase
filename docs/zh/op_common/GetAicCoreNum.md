# GetAicCoreNum<a name="ZH-CN_TOPIC_0000002483215685"></a>

## 功能说明<a name="section28189382416"></a>

获取平台AI Cube的核数。

## 函数原型<a name="section108187381641"></a>

```
template <typename T>
uint32_t GetAicCoreNum(const T *context)
```

## 参数说明<a name="section681813389411"></a>

<a name="table48184381943"></a>
<table><thead align="left"><tr id="row16818113810412"><th class="cellrowborder" valign="top" width="26.047395260473955%" id="mcps1.1.4.1.1"><p id="p198181838345"><a name="p198181838345"></a><a name="p198181838345"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="26.05739426057394%" id="mcps1.1.4.1.2"><p id="p168182038942"><a name="p168182038942"></a><a name="p168182038942"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="47.8952104789521%" id="mcps1.1.4.1.3"><p id="p4818938646"><a name="p4818938646"></a><a name="p4818938646"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row188182381418"><td class="cellrowborder" valign="top" width="26.047395260473955%" headers="mcps1.1.4.1.1 "><p id="p168181238046"><a name="p168181238046"></a><a name="p168181238046"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="26.05739426057394%" headers="mcps1.1.4.1.2 "><p id="p38181338143"><a name="p38181338143"></a><a name="p38181338143"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="47.8952104789521%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section12818338340"></a>

返回平台AI Cube的核数，uint32\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section1381923817418"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
compileInfo->vectorCoreNum = GetAicCoreNum(context_);
```

