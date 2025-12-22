# aclGetBoolArraySize<a name="ZH-CN_TOPIC_0000002020090305"></a>

## 功能说明<a name="section36583473819"></a>

获取aclBoolArray的大小，aclBoolArray通过[aclCreateBoolArray](aclCreateBoolArray.md)接口创建。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclGetBoolArraySize(const aclBoolArray *array, uint64_t *size)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="29.03%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.529999999999998%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="46.44%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="29.03%" headers="mcps1.1.4.1.1 "><p id="p14938343556"><a name="p14938343556"></a><a name="p14938343556"></a>array</p>
</td>
<td class="cellrowborder" valign="top" width="24.529999999999998%" headers="mcps1.1.4.1.2 "><p id="p13937204313518"><a name="p13937204313518"></a><a name="p13937204313518"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="li622515318718p0"><a name="li622515318718p0"></a><a name="li622515318718p0"></a>输入的aclBoolArray。</p>
</td>
</tr>
<tr id="row142925372239"><td class="cellrowborder" valign="top" width="29.03%" headers="mcps1.1.4.1.1 "><p id="p42921837142313"><a name="p42921837142313"></a><a name="p42921837142313"></a>size</p>
</td>
<td class="cellrowborder" valign="top" width="24.529999999999998%" headers="mcps1.1.4.1.2 "><p id="p22921737182313"><a name="p22921737182313"></a><a name="p22921737182313"></a>输出</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="p1455235624113"><a name="p1455235624113"></a><a name="p1455235624113"></a>返回aclBoolArray的大小。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

可能失败的原因：

-   返回161001：参数array或size为空指针。

## 约束说明<a name="section141811212135015"></a>

无

## 调用示例<a name="section897811370313"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 创建aclBoolArray
std::vector<bool> maskData = {true, false};
aclBoolArray *mask = aclCreateBoolArray(maskData.data(), maskData.size());
...
// 使用aclGetBoolArraySize接口获取mask的大小
uint64_t size = 0;
auto ret = aclGetBoolArraySize(mask, &size);     // 获取到的mask的size为2
...
// 销毁aclBoolArray
ret = aclDestroyBoolArray(mask);
```

