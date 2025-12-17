# aicpu\_ext\_info\_handle<a name="ZH-CN_TOPIC_0000002483563076"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p11181822161320"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p11181822161320"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5181112213137"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5181112213137"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p10333111272818"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p10333111272818"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p10333111272818"></a>AicpuExtInfoHandler(const std::string &amp;nodeName, const uint32_t inputNum, const uint32_t outputNum, const ge::UnknowShapeOpType unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1821618215430"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1821618215430"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1821618215430"></a>AI CPU拓展参数管理类构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1433481282812"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1433481282812"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1433481282812"></a>nodeName_(nodeName)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p32151211438"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p32151211438"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p32151211438"></a>算子名称。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13334112142812"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13334112142812"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13334112142812"></a>inputNum_(inputNum)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p421572112435"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p421572112435"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p421572112435"></a>算子的输入个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833441220289"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833441220289"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833441220289"></a>outputNum_(outputNum)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18214192184312"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18214192184312"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18214192184312"></a>算子的输出个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row161811622181311"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p73341412102815"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p73341412102815"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p73341412102815"></a>unknownType_(unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p92142217432"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p92142217432"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p92142217432"></a>标识算子是什么类型的算子。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1741575212511"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1333481216282"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1333481216282"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1333481216282"></a>AicpuExtInfoHandler()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141515524256"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141515524256"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141515524256"></a>AI CPU拓展参数管理类构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row24151452132520"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p153341612142815"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p153341612142815"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p153341612142815"></a>GenTfExtBuffer(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141635292513"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141635292513"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p141635292513"></a>生成Tensorflow算子框架的拓展参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row0416145211259"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p2334111232813"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p2334111232813"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p2334111232813"></a>GenCCExtBuffer( const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5416652182510"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5416652182510"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5416652182510"></a>生成CANN算子框架的拓展参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row6416165262513"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p03342012202820"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p03342012202820"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p03342012202820"></a>Parse(const std::string &amp;extInfo, uint8_t *hostAddr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94161252132516"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94161252132516"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94161252132516"></a>解析拓展参数的函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row206751676260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p53349124281"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p53349124281"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p53349124281"></a>UpdateInputShape(const uint32_t inputIndex, const gert::Shape &amp;inputShape)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18676197162611"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18676197162611"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p18676197162611"></a>更新拓展参数中的输入shape信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1667687182618"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1133421232819"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1133421232819"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1133421232819"></a>UpdateOutputShape(const uint32_t outputIndex, const gert::Shape &amp;outputShape)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367614716261"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367614716261"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367614716261"></a>更新拓展参数中的输出shape信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row7676187122611"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1033417124285"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1033417124285"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1033417124285"></a>GetOutputShapeAndType(const uint32_t outputIndex, gert::Shape &amp;shape, ge::DataType &amp;dataType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761571269"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761571269"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761571269"></a>获取拓展参数中的shape和数据类型等信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row96761578263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833431210285"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833431210285"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1833431210285"></a>CopyH2D(const aclrtStream stream, const aclOpExecutor *executor, const uint64_t deviceExtMemSize, uint64_t &amp;deviceCacheOffset)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p136761278267"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p136761278267"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p136761278267"></a>将拓展参数从host侧拷贝至device侧。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row126761971260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p128976317280"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p128976317280"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p128976317280"></a>CopyOutputShapeD2H()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p146765711267"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p146765711267"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p146765711267"></a>将device侧算子执行更新后的输出shape更新到host侧。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1067617142619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p889703110283"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p889703110283"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p889703110283"></a>GetExtInfoDeviceBuffer(const aclOpExecutor *executor, const uint64_t deviceExtMemSize, uint64_t &amp;deviceCacheOffset)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367611716266"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367611716266"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1367611716266"></a>获取device侧预留的拓展参数内存地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row106761778266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p168971431102816"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p168971431102816"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p168971431102816"></a>GenerateKernelId()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14676167122613"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14676167122613"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14676167122613"></a>生成kernel id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row36761078266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5897173119283"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5897173119283"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p5897173119283"></a>UpdateOutputShapeFromExtInfo(const FVector&lt;aclTensor *&gt; &amp;outputs, aclrtStream stream)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761478266"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761478266"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p96761478266"></a>从device侧获取输出shape信息更新到host侧。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row106761676263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p20897931142819"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p20897931142819"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p20897931142819"></a>UpdateInputAndOutputShape(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, aclrtStream stream, const aclOpExecutor *executor, const uint64_t deviceExtMemSize, uint64_t &amp;deviceCacheOffset)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p127899441508"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p127899441508"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p127899441508"></a>二阶段执行前，刷新真实的输入、输出shape信息更新到device侧。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row10416152182517"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1389733115286"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1389733115286"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1389733115286"></a>SetSpace(void *space)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p74161352192513"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p74161352192513"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p74161352192513"></a>设置使用的task空间。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1140135662516"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17897173113283"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17897173113283"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17897173113283"></a>ParseExtShapeType(AicpuExtInfo &amp;aicpuExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1640165612517"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1640165612517"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1640165612517"></a>解析拓展参数中的shape和数据类型信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1240145611252"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1989773112819"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1989773112819"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p1989773112819"></a>ParseExtInputShape(AicpuExtInfo &amp;aicpuExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94113566252"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94113566252"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p94113566252"></a>解析拓展参数中的输入shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row10475182817286"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p198971831122817"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p198971831122817"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p198971831122817"></a>ParseExtOutputShape(AicpuExtInfo &amp;aicpuExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p947511282288"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p947511282288"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p947511282288"></a>解析拓展参数中的输出shape。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row74751428152815"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897123142813"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897123142813"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897123142813"></a>AppendExtOpName(std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17475328132816"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17475328132816"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p17475328132816"></a>向拓展参数中拼接算子名称。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row7475028182814"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p989743113281"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p989743113281"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p989743113281"></a>AppendExtShapeType(std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p847510286283"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p847510286283"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p847510286283"></a>向拓展参数中拼接shape和类型信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row647510281283"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897031172811"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897031172811"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p19897031172811"></a>AppendExtBitMap(std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p7475228172815"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p7475228172815"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p7475228172815"></a>向拓展参数中拼接bitmap信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row16475122812813"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p024415428287"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p024415428287"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p024415428287"></a>AppendExtInfoShape(const FVector&lt;const aclTensor *&gt; &amp;tensors, const aicpu::FWKAdapter::FWKTaskExtInfoType type, std::string &amp;taskExtInfo, bool isTf = false)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14475828132811"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14475828132811"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p14475828132811"></a>向拓展参数中拼接shape信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row194751228102810"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p924464214289"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p924464214289"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p924464214289"></a>AppendSessionInfo(std::string &amp;taskExtInfo)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p6475142842816"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p6475142842816"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p6475142842816"></a>向拓展参数中拼接session信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row647532802814"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p12441424286"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p12441424286"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p12441424286"></a>UpdateShape(const gert::Shape &amp;shape, AicpuShapeAndType *const shapeAndType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p347615285287"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p347615285287"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p347615285287"></a>更新shape信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_row1247617285285"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p124410424284"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p124410424284"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p124410424284"></a>GetShapeAndType(const AicpuShapeAndType &amp;shapeAndType, gert::Shape &amp;shape, ge::DataType &amp;dataType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13476132812814"><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13476132812814"></a><a name="zh-cn_topic_0000002078653774_zh-cn_topic_0000001948630329_p13476132812814"></a>获取拓展参数中的shape和数据类型信息。</p>
</td>
</tr>
</tbody>
</table>

