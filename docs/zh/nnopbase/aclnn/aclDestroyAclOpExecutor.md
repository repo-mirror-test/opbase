# aclDestroyAclOpExecutor<a name="ZH-CN_TOPIC_0000002020090313"></a>

## 功能说明<a name="section36583473819"></a>

aclOpExecutor是框架定义的算子执行器，用来执行算子计算的容器，开发者无需关注其内部实现，直接使用即可。

-   对于非复用状态的aclOpExecutor，调用一阶段接口aclxxXxxGetworkspaceSize时框架会自动创建aclOpExecutor，调用二阶段接口aclxxXxx时框架会自动释放aclOpExecutor，无需手动调用本接口释放。
-   对于复用状态的aclOpExecutor（调用[aclSetAclOpExecutorRepeatable](aclSetAclOpExecutorRepeatable.md)接口使能复用），算子执行器的管理由用户自行处理，因此aclOpExecutor的销毁需显式调用本接口手动销毁。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclDestroyAclOpExecutor(aclOpExecutor *executor)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="28.99%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.57%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="46.44%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="28.99%" headers="mcps1.1.4.1.1 "><p id="p5336125854112"><a name="p5336125854112"></a><a name="p5336125854112"></a>executor</p>
</td>
<td class="cellrowborder" valign="top" width="24.57%" headers="mcps1.1.4.1.2 "><p id="p1333575820413"><a name="p1333575820413"></a><a name="p1333575820413"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="p1923551494413"><a name="p1923551494413"></a><a name="p1923551494413"></a>待销毁的aclOpExecutor。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

可能失败的原因：

-   返回561103：executor是空指针。

## 约束说明<a name="section141811212135015"></a>

本接口需与[aclSetAclOpExecutorRepeatable](aclSetAclOpExecutorRepeatable.md)接口配套使用，分别完成aclOpExecutor的复用与销毁。

## 调用示例<a name="section13281956318"></a>

接口调用请参考[aclSetAclOpExecutorRepeatable](aclSetAclOpExecutorRepeatable.md)的调用示例。

