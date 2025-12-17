# OP\_LOGE<a name="ZH-CN_TOPIC_0000002450255770"></a>

## 产品支持情况<a name="section8178181118225"></a>

<a name="table38301303189"></a>
<table><thead align="left"><tr id="row20831180131817"><th class="cellrowborder" valign="top" width="57.99999999999999%" id="mcps1.1.3.1.1"><p id="p1883113061818"><a name="p1883113061818"></a><a name="p1883113061818"></a><span id="ph20833205312295"><a name="ph20833205312295"></a><a name="ph20833205312295"></a>产品</span></p>
</th>
<th class="cellrowborder" align="center" valign="top" width="42%" id="mcps1.1.3.1.2"><p id="p783113012187"><a name="p783113012187"></a><a name="p783113012187"></a>是否支持</p>
</th>
</tr>
</thead>
<tbody><tr id="row220181016240"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p48327011813"><a name="p48327011813"></a><a name="p48327011813"></a><span id="ph583230201815"><a name="ph583230201815"></a><a name="ph583230201815"></a><term id="zh-cn_topic_0000001312391781_term1253731311225"><a name="zh-cn_topic_0000001312391781_term1253731311225"></a><a name="zh-cn_topic_0000001312391781_term1253731311225"></a>Atlas A3 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term12835255145414"><a name="zh-cn_topic_0000001312391781_term12835255145414"></a><a name="zh-cn_topic_0000001312391781_term12835255145414"></a>Atlas A3 推理系列产品</term></span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p7948163910184"><a name="p7948163910184"></a><a name="p7948163910184"></a>√</p>
</td>
</tr>
<tr id="row173226882415"><td class="cellrowborder" valign="top" width="57.99999999999999%" headers="mcps1.1.3.1.1 "><p id="p14832120181815"><a name="p14832120181815"></a><a name="p14832120181815"></a><span id="ph1483216010188"><a name="ph1483216010188"></a><a name="ph1483216010188"></a><term id="zh-cn_topic_0000001312391781_term11962195213215"><a name="zh-cn_topic_0000001312391781_term11962195213215"></a><a name="zh-cn_topic_0000001312391781_term11962195213215"></a>Atlas A2 训练系列产品</term>/<term id="zh-cn_topic_0000001312391781_term1551319498507"><a name="zh-cn_topic_0000001312391781_term1551319498507"></a><a name="zh-cn_topic_0000001312391781_term1551319498507"></a>Atlas 800I A2 推理产品</term>/A200I A2 Box 异构组件</span></p>
</td>
<td class="cellrowborder" align="center" valign="top" width="42%" headers="mcps1.1.3.1.2 "><p id="p19948143911820"><a name="p19948143911820"></a><a name="p19948143911820"></a>√</p>
</td>
</tr>
</tbody>
</table>

## 功能说明<a name="section36583473819"></a>

打印算子ERROR级别日志。

## 函数原型<a name="section13230182415108"></a>

```
OP_LOGE(opName, ...)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="27.67%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="15.809999999999999%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="56.52%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="27.67%" headers="mcps1.1.4.1.1 "><p id="p93115273169"><a name="p93115273169"></a><a name="p93115273169"></a>opName</p>
</td>
<td class="cellrowborder" valign="top" width="15.809999999999999%" headers="mcps1.1.4.1.2 "><p id="p1410411283156"><a name="p1410411283156"></a><a name="p1410411283156"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="56.52%" headers="mcps1.1.4.1.3 "><p id="li1722319319715p0"><a name="li1722319319715p0"></a><a name="li1722319319715p0"></a>待打印对象，可以是算子名，表示打印算子信息；也可以是某个函数名，表示打印函数内相关信息。支持const char*或std::string类型。</p>
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
        OP_LOGE("BroadcastDim", "%ld and %ld cannot broadcast!", dim1, dim2);
        return false;
    }

    return true;
}
```

