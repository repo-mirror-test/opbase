# BroadcastInferShape<a name="ZH-CN_TOPIC_0000002515603041"></a>

## 功能说明<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_section36583473819"></a>

对于满足broadcast关系（广播规则介绍参考[NumPy](https://numpy.org/doc/stable/user/basics.broadcasting.html)官网）的两个shape，推导他们broadcast后的shape。例如\[1, 10\]与\[2, 1\] broadcast后的shape为\[2, 10\]。

## 函数原型<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool BroadcastInferShape(const op::Shape &self, const op::Shape &other, op::Shape &broadcastShape)
```

## 参数说明<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_section75395119104"></a>

<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_table111938719446"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="24.13%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
</th>
<th class="cellrowborder" valign="top" width="8.5%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="24.13%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p41575291313"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p41575291313"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p41575291313"></a>self</p>
</td>
<td class="cellrowborder" valign="top" width="8.5%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p2157152943114"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p2157152943114"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p2157152943114"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p11158162911311"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p11158162911311"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p11158162911311"></a>第一组shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="24.13%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p815882983116"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p815882983116"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p815882983116"></a>other</p>
</td>
<td class="cellrowborder" valign="top" width="8.5%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p121584294311"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p121584294311"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p121584294311"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p17158829143113"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p17158829143113"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p17158829143113"></a>第二组shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_row43623326319"><td class="cellrowborder" valign="top" width="24.13%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p3362143211315"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p3362143211315"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p3362143211315"></a>broadcastShape</p>
</td>
<td class="cellrowborder" valign="top" width="8.5%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p6362173210317"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p6362173210317"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p6362173210317"></a>输出</p>
</td>
<td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p13362143243115"><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p13362143243115"></a><a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_p13362143243115"></a>self和other经过broadcast后推导的shape。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_section25791320141317"></a>

当self与other满足broadcast关系时，返回true，否则返回false。

## 约束说明<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078499022_zh-cn_topic_0000001949523629_section1086173012323"></a>

```
// 生成shape为[2， 1]和[2, 10]的两个Shape对象，获取broadcast后的shape。
void Func() {
    gert::Shape shapeA;
    shapeA.AppendDim(1);
    shapeA.AppendDim(2);
    gert::Shape shapeB;
    shapeB.AppendDim(10);
    shapeB.AppendDim(2);
    gert::Shape shapeBrc;
    bool isBrc = BroadcastInferShape(shapeA, shapeB, shapeBrc);
}
```

