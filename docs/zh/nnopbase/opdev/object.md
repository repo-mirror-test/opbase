# object<a name="ZH-CN_TOPIC_0000002515683025"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p11181822161320"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p11181822161320"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p5181112213137"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p5181112213137"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p10998142912189"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p10998142912189"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p10998142912189"></a>Object()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1431512365183"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1431512365183"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1431512365183"></a>Object的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p14998142961815"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p14998142961815"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p14998142961815"></a>new(size_t size)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p0315143691813"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p0315143691813"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p0315143691813"></a>Object的内存申请函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1399815298183"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1399815298183"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1399815298183"></a>new(size_t size, [[maybe_unused]] const std::nothrow_t &amp;tag)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1315936191819"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1315936191819"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p1315936191819"></a>Object的内存申请函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p599852918186"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p599852918186"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p599852918186"></a>delete(void *addr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p19315113661814"><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p19315113661814"></a><a name="zh-cn_topic_0000002078653722_zh-cn_topic_0000001948630309_p19315113661814"></a>Object的内存释放函数。</p>
</td>
</tr>
</tbody>
</table>

