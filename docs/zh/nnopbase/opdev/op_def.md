# op\_def<a name="ZH-CN_TOPIC_0000002483563050"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p11181822161320"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p11181822161320"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p5181112213137"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p5181112213137"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row11988105510012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p13731138211"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p13731138211"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p13731138211"></a>ToOpImplMode(const std::string &amp;implModeStr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p91173618318"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p91173618318"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p91173618318"></a>将implModeStr字符串转换为OpImplMode。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row3988155708"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p177319811120"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p177319811120"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p177319811120"></a>ToString(OpImplMode implMode)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p511193617314"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p511193617314"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p511193617314"></a>将OpImplMode转换为字符串。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row15988555009"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7731158717"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7731158717"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7731158717"></a>ImplModeToString(OpImplMode implMode)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p9115368313"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p9115368313"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p9115368313"></a>将implModeStr字符串转换为OpImplMode。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1087572611467"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1087572611467"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1087572611467"></a>Add(uint32_t &amp;id, const char *opName)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p207421633144617"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p207421633144617"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p207421633144617"></a>将opName注册到OpTypeDict中，返回算子的id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p38757267462"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p38757267462"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p38757267462"></a>ToOpType(const std::string &amp;opName)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p10742103310462"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p10742103310462"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p10742103310462"></a>用opName从OpTypeDict中查找算子的id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row11533230403"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p6875182610466"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p6875182610466"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p6875182610466"></a>ToString(uint32_t opType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1674223374615"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1674223374615"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1674223374615"></a>用算子的id从OpTypeDict中查找算子名。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row12531823184013"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1987510264468"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1987510264468"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1987510264468"></a>GetAllOpTypeSize()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p874319338465"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p874319338465"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p874319338465"></a>获取OpTypeDict中注册算子的个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row0180630194013"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751026204613"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751026204613"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751026204613"></a>ToOpTypeByConfigJson(const std::string &amp;op_config_json)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107431733104616"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107431733104616"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107431733104616"></a>用算子json文件名查找算子的id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row141801330114016"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1687512616465"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1687512616465"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1687512616465"></a>UpdateConfigJsonPath(uint32_t opType, const std::string &amp;opFile)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1474317337466"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1474317337466"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1474317337466"></a>用给定的算子的id更新算子的json文件名。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row318113013409"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875226164619"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875226164619"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875226164619"></a>ReadFile2String(const char *filename, std::string &amp;content)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107435337465"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107435337465"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p107435337465"></a>读取filename到content中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row1018112302405"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751926154612"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751926154612"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p198751926154612"></a>ReadDirBySuffix(const std::string &amp;dir, const std::string &amp;suffix, std::vector&lt;std::string&gt; &amp;paths)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p474343312466"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p474343312466"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p474343312466"></a>获取dir目录下所有后缀为suffix的文件。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row2808532154020"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875142610463"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875142610463"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p7875142610463"></a>ToIndex(OpImplMode implMode)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p674383312461"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p674383312461"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p674383312461"></a>获取OpImplMode的index。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row7808103211403"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p98757267463"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p98757267463"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p98757267463"></a>ToIndexChar(OpImplMode implMode)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1743933144614"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1743933144614"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p1743933144614"></a>获取OpImplMode字符形式的index。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_row104821529454"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831729658"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831729658"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831729658"></a>GetOpConfigJsonFileName(uint32_t opType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831929557"><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831929557"></a><a name="zh-cn_topic_0000002078653726_zh-cn_topic_0000001919471326_p114831929557"></a>根据算子id获取Config Json文件名。</p>
</td>
</tr>
</tbody>
</table>

