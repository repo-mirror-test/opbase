# GetAivCoreNum<a name="ZH-CN_TOPIC_0000002450096174"></a>

## 功能说明<a name="section132286361144"></a>

获取平台AI Vector的核数。

## 函数原型<a name="section2228143619413"></a>

```
template <typename T>
uint32_t GetAivCoreNum(const T *context)
```

## 参数说明<a name="section1022813368418"></a>

<a name="table2229113612413"></a>
<table><thead align="left"><tr id="row102292361244"><th class="cellrowborder" valign="top" width="27.77%" id="mcps1.1.4.1.1"><p id="p1322915363415"><a name="p1322915363415"></a><a name="p1322915363415"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="27.779999999999998%" id="mcps1.1.4.1.2"><p id="p62296361414"><a name="p62296361414"></a><a name="p62296361414"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="44.45%" id="mcps1.1.4.1.3"><p id="p142299361846"><a name="p142299361846"></a><a name="p142299361846"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="row7229173615415"><td class="cellrowborder" valign="top" width="27.77%" headers="mcps1.1.4.1.1 "><p id="p14229236445"><a name="p14229236445"></a><a name="p14229236445"></a>context</p>
</td>
<td class="cellrowborder" valign="top" width="27.779999999999998%" headers="mcps1.1.4.1.2 "><p id="p422963614413"><a name="p422963614413"></a><a name="p422963614413"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="44.45%" headers="mcps1.1.4.1.3 "><p id="p122910366420"><a name="p122910366420"></a><a name="p122910366420"></a><span>Tiling的上下文</span>信息，类型为<span>TilingContext/TilingParseContext</span>。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section2022916361747"></a>

返回平台AI Vector的核数，uint32\_t类型，返回0代表获取失败。

## 约束说明<a name="section186749179365"></a>

无

## 调用示例<a name="section1722933610415"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
compileInfo->vectorCoreNum = GetAivCoreNum(context_);
```

