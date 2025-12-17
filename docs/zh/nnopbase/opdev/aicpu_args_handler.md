# aicpu\_args\_handler<a name="ZH-CN_TOPIC_0000002515683053"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p11181822161320"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p11181822161320"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5181112213137"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5181112213137"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1951402213263"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1951402213263"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1951402213263"></a>AicpuArgsHandler(const std::string &amp;opType, const std::string &amp;nodeName, const uint32_t ioNum, const bool needDeviceExt)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1821618215430"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1821618215430"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1821618215430"></a>AI CPU框架用于构造AI CPU opTask时的辅助类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p95141122182616"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p95141122182616"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p95141122182616"></a>opType_(opType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p32151211438"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p32151211438"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p32151211438"></a>算子名称。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251462215261"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251462215261"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251462215261"></a>nodeName_(nodeName)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p421572112435"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p421572112435"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p421572112435"></a>预留参数，当前同算子名称。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1551413225265"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1551413225265"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1551413225265"></a>ioNum_(ioNum)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18214192184312"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18214192184312"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18214192184312"></a>算子的输入和输出个数之和。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row161811622181311"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p651442219264"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p651442219264"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p651442219264"></a>needDeviceExt_(needDeviceExt)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p92142217432"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p92142217432"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p92142217432"></a>标识是否需要分配额外device侧内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1741575212511"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251412222260"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251412222260"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1251412222260"></a>args_({})</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p157776433538"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p157776433538"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p157776433538"></a>与Runtime运行时交互的参数的对象，用于计算任务下发。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row24151452132520"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514722142613"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514722142613"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514722142613"></a>GetIoAddr()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p141635292513"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p141635292513"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p141635292513"></a>获取args内存中存放input/output地址的内存指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row0416145211259"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p451492222616"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p451492222616"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p451492222616"></a>get()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5416652182510"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5416652182510"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p5416652182510"></a>获取智能指针管理的内存的首地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row6416165262513"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p051417224261"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p051417224261"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p051417224261"></a>GetExtInfoAddr()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p94161252132516"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p94161252132516"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p94161252132516"></a>获取args中存放拓展参数的内存指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row206751676260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514112272618"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514112272618"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17514112272618"></a>GetArgs()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18676197162611"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18676197162611"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p18676197162611"></a>获取指向args内存的指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1667687182618"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4514142282615"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4514142282615"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4514142282615"></a>GetArgsEx()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367614716261"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367614716261"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367614716261"></a>获取与Runtime运行时交互的对象的指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row7676187122611"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p10515122211264"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p10515122211264"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p10515122211264"></a>GetNodeName()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761571269"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761571269"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761571269"></a>获取节点名称，当前为算子名。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row96761578263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17515132210266"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17515132210266"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p17515132210266"></a>GetIoNum()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p136761278267"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p136761278267"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p136761278267"></a>获取算子的输入和输出个数之和。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row126761971260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19515822132617"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19515822132617"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19515822132617"></a>GetHostInputSize()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p146765711267"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p146765711267"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p146765711267"></a>获取host侧输入的内存大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1067617142619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1851512210264"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1851512210264"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1851512210264"></a>GetInputAddrAlignBytes()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367611716266"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367611716266"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1367611716266"></a>获取指定的地址分配字节对齐参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row106761778266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p135153227262"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p135153227262"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p135153227262"></a>SetSpace(void *space)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14676167122613"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14676167122613"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14676167122613"></a>记录此Args handle归属于哪个算子空间。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row36761078266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p12515152232618"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p12515152232618"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p12515152232618"></a>MallocMem()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761478266"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761478266"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p96761478266"></a>申请args的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row106761676263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7515522182613"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7515522182613"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7515522182613"></a>ResetHostInputInfo()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1676197142612"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1676197142612"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1676197142612"></a>重置host侧输入的统计信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row10416152182517"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p185159221266"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p185159221266"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p185159221266"></a>AddHostInput(const size_t idx, void *data, const size_t srcSize, const size_t alignSize)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p74161352192513"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p74161352192513"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p74161352192513"></a>记录host侧输入信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1140135662516"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p85159227260"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p85159227260"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p85159227260"></a>UpdateIoAddr(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, const aclrtStream stream, aclOpExecutor *executor, const uint64_t deviceExtMemSize, const uint64_t deviceCacheOffset)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1640165612517"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1640165612517"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1640165612517"></a>更新args中的input、output的地址信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1240145611252"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1351517227269"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1351517227269"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1351517227269"></a>AicpuArgsHandler()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_p1465918189518"><a name="zh-cn_topic_0000002114098117_p1465918189518"></a><a name="zh-cn_topic_0000002114098117_p1465918189518"></a>AI CPU框架用于构造AI CPU opTask时的辅助类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1141135614252"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14515182292611"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14515182292611"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p14515182292611"></a>UpdateDeviceExtInfoAddr(void *deviceExtInfoAddr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p04155682518"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p04155682518"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p04155682518"></a>更新device侧存储拓展参数的地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1141135632515"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1394065419264"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1394065419264"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1394065419264"></a>SetLaunchArgs(const size_t argSize)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p104185612259"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p104185612259"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p104185612259"></a>设置args中参数大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row174145614253"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p694018543268"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p694018543268"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p694018543268"></a>GetDeviceCacheAddr(void *&amp;deviceAddr, aclOpExecutor *executor, const uint64_t deviceCacheOffset)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154114569251"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154114569251"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154114569251"></a>获取预留的device侧内存地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row1941105615254"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1094095412616"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1094095412616"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1094095412616"></a>AicpuCCArgsHandler(const std::string &amp;opType, const std::string &amp;nodeName, const uint32_t ioNum, const bool needDeviceExt)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19411656172512"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19411656172512"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p19411656172512"></a>AI CPU CANN算子框架参数管理类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row8414568257"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494015543263"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494015543263"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494015543263"></a>AicpuArgsHandler(opType, nodeName, ioNum, needDeviceExt)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7611854124114"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7611854124114"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p7611854124114"></a>AI CPU框架用于构造AI CPU opTask时的辅助类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row141115682514"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p13940165442611"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p13940165442611"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p13940165442611"></a>GenCCArgs(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, const AicpuAttrs &amp;attrs, std::string &amp;taskInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154295612517"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154295612517"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p154295612517"></a>生成CANN算子args中nodedef及head信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row6421156122510"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p199404546263"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p199404546263"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p199404546263"></a>BuildCCArgs(const std::string &amp;argData, const std::string &amp;kernelName, const std::string &amp;soName, const size_t extInfoSize)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4158852144316"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4158852144316"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p4158852144316"></a>封装CANN算子args中参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row659665142612"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p2940115442613"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p2940115442613"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p2940115442613"></a>SetHostArgs(const std::string &amp;argData, const size_t extInfoSize)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596951172616"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596951172616"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596951172616"></a>设置args中内存的地址和长度信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row19596205102613"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p794035419262"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p794035419262"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p794035419262"></a>SetOffsetArgs()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596165142615"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596165142615"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9596165142615"></a>设置args中偏移值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row9596155110263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p6941105412618"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p6941105412618"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p6941105412618"></a>AicpuTfArgsHandler(const std::string &amp;opType, const std::string &amp;nodeName, const uint32_t ioNum, const bool needDeviceExt)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p084917044615"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p084917044615"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p084917044615"></a>AI CPU Tensorflow算子框架参数管理类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row9597175116267"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p594115419266"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p594115419266"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p594115419266"></a>GenTfArgs(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, const AicpuAttrs &amp;attrs, STR_FWK_OP_KERNEL &amp;fwkOpKernel, std::string &amp;taskInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9597125111269"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9597125111269"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9597125111269"></a>生成CANN算子args中nodedef及head信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row17597155102619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494119549262"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494119549262"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p494119549262"></a>BuildTfArgs(STR_FWK_OP_KERNEL &amp;fwkOpKernel, const std::string &amp;taskInfo, const size_t extInfoSize)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1359775119261"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1359775119261"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p1359775119261"></a>封装Tensorflow算子args中参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_row9597951162613"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9941354102610"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9941354102610"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p9941354102610"></a>GenNodeDef(const FVector&lt;const aclTensor *&gt; &amp;inputs, const AicpuAttrs &amp;attrs, ge::Buffer &amp;nodeDefBytes)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p159715102610"><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p159715102610"></a><a name="zh-cn_topic_0000002114098117_zh-cn_topic_0000001919311410_p159715102610"></a>生成算子的描述符信息，包含输入、输出的地址和shape等信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098117_row142821716103713"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098117_p7282121673710"><a name="zh-cn_topic_0000002114098117_p7282121673710"></a><a name="zh-cn_topic_0000002114098117_p7282121673710"></a>UpdateKernelId()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098117_p328281615377"><a name="zh-cn_topic_0000002114098117_p328281615377"></a><a name="zh-cn_topic_0000002114098117_p328281615377"></a>更新args中的Kernel字段，用于匹配Device侧的Kernel Cache。</p>
</td>
</tr>
</tbody>
</table>

