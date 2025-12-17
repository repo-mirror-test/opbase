# aclDestroyIntArray<a name="ZH-CN_TOPIC_0000001983530444"></a>

## 函数功能<a name="section36583473819"></a>

销毁通过[aclCreateIntArray](aclCreateIntArray.md)接口创建的aclIntArray。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclDestroyIntArray(const aclIntArray *array)
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
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="p6936124317513"><a name="p6936124317513"></a><a name="p6936124317513"></a>需要销毁的aclIntArray。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

## 约束与限制<a name="section141811212135015"></a>

无

## 调用示例<a name="section26551054173412"></a>

接口调用请参考[aclCreateIntArray](aclCreateIntArray.md)的调用示例。

