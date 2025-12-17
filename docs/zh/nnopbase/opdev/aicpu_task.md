# aicpu\_task<a name="ZH-CN_TOPIC_0000002483403108"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11181822161320"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11181822161320"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5181112213137"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5181112213137"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1469265919387"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p368812510583"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p368812510583"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p368812510583"></a>PrintAicpuAllTimeStampInfo(const char *opType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15693459123817"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15693459123817"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15693459123817"></a>打印AI CPU task执行时的系统时间戳。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row136931159153812"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11688195125817"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11688195125817"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11688195125817"></a>AppendTensor(aclOpExecutor *executor, const aclTensor *arg, V &amp;l)</p>
</td>
<td class="cellrowborder" rowspan="4" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p669314596383"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p669314596383"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p669314596383"></a>将aclTensor指针塞入到容器中模板函数。</p>
<p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8693105911384"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8693105911384"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8693105911384"></a></p>
<p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p66931959153819"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p66931959153819"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p66931959153819"></a></p>
<p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p869355916388"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p869355916388"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p869355916388"></a></p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1769317592389"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p96886595812"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p96886595812"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p96886595812"></a>AppendTensor(aclOpExecutor *executor, const aclScalar *arg, V &amp;l)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row369312593388"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p156889513589"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p156889513589"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p156889513589"></a>AppendTensor(aclOpExecutor *executor, const aclIntArray *arg, V &amp;l)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row569355910381"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p17688185175813"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p17688185175813"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p17688185175813"></a>AppendTensor(aclOpExecutor *executor, const aclTensorList *arg, V &amp;l)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1469385915389"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46881153581"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46881153581"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46881153581"></a>CreateTensorListImpl(aclOpExecutor *executor, OpArg &amp;arg, TensorList &amp;l)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p86931592384"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p86931592384"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p86931592384"></a>从输入的args中创建Tensor列表模板函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1569305916381"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1968819520583"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1968819520583"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1968819520583"></a>CreateTensorList(aclOpExecutor *executor, OpArgList &amp;t, TensorList &amp;l)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1769395953818"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1769395953818"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1769395953818"></a>创建Tensor列表。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row13740935183919"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1268845195819"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1268845195819"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1268845195819"></a>Append1Byte(uint8_t *buf, uint8_t src)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14740183593913"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14740183593913"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14740183593913"></a>向指定的buffer后再拼接一个字节。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row16740103519395"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46331198593"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46331198593"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p46331198593"></a>AppendAttrForKey(const V &amp;value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
<td class="cellrowborder" rowspan="2" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13620172713596"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13620172713596"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13620172713596"></a>给task key字段里面拼接属性信息模板函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row148141438163919"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p863451925911"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p863451925911"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p863451925911"></a>AppendAttrForKey(const std::string &amp;value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row481413820395"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1225574414593"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1225574414593"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1225574414593"></a>AppendAttrForKey(const std::string *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
<td class="cellrowborder" rowspan="9" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p113941749185910"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p113941749185910"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p113941749185910"></a>向Key中拼接属性信息。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1081493843918"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p152553442591"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p152553442591"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p152553442591"></a>AppendAttrForKey(std::string *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row281510384393"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p625519440598"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p625519440598"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p625519440598"></a>AppendAttrForKey(const std::vector&lt;V&gt; &amp;value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row158151388395"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p122551944165917"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p122551944165917"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p122551944165917"></a>AppendAttrForKey(const aclIntArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1881583819393"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12553443595"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12553443595"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12553443595"></a>AppendAttrForKey(aclIntArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row081583816392"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7255134417597"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7255134417597"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7255134417597"></a>AppendAttrForKey(const aclFloatArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row158154381392"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p125574417599"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p125574417599"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p125574417599"></a>AppendAttrForKey(aclFloatArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row7740235103915"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1255844135910"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1255844135910"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1255844135910"></a>AppendAttrForKey(const aclBoolArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row167401335193913"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5255444135915"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5255444135915"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p5255444135915"></a>AppendAttrForKey(aclBoolArray *value, uint8_t *&amp;key, size_t &amp;keyLen)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row14741183520399"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p144562385011"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p144562385011"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p144562385011"></a>AddAicpuAttr(const aclIntArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
<td class="cellrowborder" rowspan="6" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p69915471904"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p69915471904"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p69915471904"></a>添加AI CPU属性字段。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row157411635193914"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13456133813013"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13456133813013"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p13456133813013"></a>AddAicpuAttr(aclIntArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row37411335123919"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p16456153814013"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p16456153814013"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p16456153814013"></a>AddAicpuAttr(const aclFloatArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row37431261607"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245615382020"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245615382020"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245615382020"></a>AddAicpuAttr(aclFloatArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row27436260013"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456183816014"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456183816014"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456183816014"></a>AddAicpuAttr(const aclBoolArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row7744926801"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15456173819014"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15456173819014"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15456173819014"></a>AddAicpuAttr(aclBoolArray *value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row42671619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12836771119"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12836771119"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p12836771119"></a>AddAicpuAttr(const V &amp;value, const std::string &amp;attrName, AicpuAttrs &amp;attrs)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p47781151612"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p47781151612"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p47781151612"></a>向AI CPU属性map中加入简单数据类型属性。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1426019117"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p158361071816"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p158361071816"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p158361071816"></a>GetTid()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778161518120"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778161518120"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778161518120"></a>获取当前工作的线程id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1726718119"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p383697511"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p383697511"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p383697511"></a>aclnnAicpuFinalize()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778151518120"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778151518120"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p7778151518120"></a>AI CPU模块去初始化函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row12269110119"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p19836271412"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p19836271412"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p19836271412"></a>CreatAicpuKernelLauncher(uint32_t opType, op::internal::AicpuTaskSpace &amp;space, aclOpExecutor *executor, const FVector&lt;std::string&gt; &amp;attrNames, op::OpArgContext *args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p0778171518110"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p0778171518110"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p0778171518110"></a>创建AI CPU task下发对象。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row116385111029"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p727812217210"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p727812217210"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p727812217210"></a>AicpuTask()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p82421927222"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p82421927222"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p82421927222"></a>AicpuTask类默认的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row634020151218"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1427812224215"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1427812224215"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1427812224215"></a>AicpuTask(const std::string &amp;opType, const ge::UnknowShapeOpType unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10242127625"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10242127625"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10242127625"></a>AicpuTask类的构造函数(带入参)。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10333111272818"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10333111272818"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p10333111272818"></a>AicpuTfTask(const std::string &amp;opType, const ge::UnknowShapeOpType unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1821618215430"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1821618215430"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1821618215430"></a>AI CPU tensorflow算子框架task构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1234654219454"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1234654219454"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1234654219454"></a>aclnnStatus Init(const FVector&lt;const aclTensor *&gt; &amp;inputs, const FVector&lt;aclTensor *&gt; &amp;outputs, const AicpuAttrs &amp;attrs)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p32151211438"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p32151211438"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p32151211438"></a>算子框架task初始化函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245102314715"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245102314715"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1245102314715"></a>aclnnStatus Run(aclOpExecutor *executor, aclrtStream stream)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8174188194812"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8174188194812"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8174188194812"></a>算子框架task执行函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1787504211489"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1787504211489"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1787504211489"></a>AicpuTask(const std::string &amp;opType, const ge::UnknowShapeOpType unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1416151816499"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1416151816499"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1416151816499"></a>AI CPU task构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row161811622181311"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p73341412102815"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p73341412102815"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p73341412102815"></a>AicpuCCTask(const std::string &amp;opType, const ge::UnknowShapeOpType unknownType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p92142217432"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p92142217432"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p92142217432"></a>AI CPU CANN算子框架task构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1741575212511"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8728155616509"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8728155616509"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p8728155616509"></a>aclnnStatus SetIoTensors(aclOpExecutor *executor, op::OpArgContext *args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p62533582517"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p62533582517"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p62533582517"></a>刷新task的输入、输出地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row24151452132520"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15673316175215"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15673316175215"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p15673316175215"></a>void SetSpace(void *space)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p188001559105216"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p188001559105216"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p188001559105216"></a>设置task所在的容器。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row0416145211259"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p663213482536"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p663213482536"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p663213482536"></a>void SetVisit(bool visit)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p175813912544"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p175813912544"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p175813912544"></a>设置task是否被占用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row6416165262513"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p03342012202820"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p03342012202820"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p03342012202820"></a>AicpuTaskSpace(const std::string &amp;opType,  const ge::UnknowShapeOpType unknownType = ge::DEPEND_IN_SHAPE,  const bool isTf = false)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p148572114563"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p148572114563"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p148572114563"></a>AI CPU task容器构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row206751676260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p2397787577"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p2397787577"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p2397787577"></a>AicpuTask *FindTask(aclOpExecutor *executor,  op::OpArgContext *args,</p>
<p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p53349124281"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p53349124281"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p53349124281"></a>const FVector&lt;const aclTensor *&gt; &amp;inputs)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456314475578"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456314475578"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1456314475578"></a>查找是否可复用的task。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1667687182618"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1133421232819"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1133421232819"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1133421232819"></a>AicpuTask *GetOrCreateTask(aclOpExecutor *executor, const FVector&lt;std::string&gt; &amp;attrNames, op::OpArgContext *args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p89359469599"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p89359469599"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p89359469599"></a>获取新建或者复用的task。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row7676187122611"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14924515502"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14924515502"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p14924515502"></a>void SetRef(const size_t index, const bool isInput = true)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p117891448904"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p117891448904"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p117891448904"></a>设置指定索引为引用类型输入。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row96761578263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11926132915116"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11926132915116"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p11926132915116"></a>bool IsRef(const size_t index, const bool isInput = true) const</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p136761278267"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p136761278267"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p136761278267"></a>获取指定索引是否为引用类型输入。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row126761971260"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p128976317280"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p128976317280"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p128976317280"></a>uint64_t CalcHostInputDataSize(const FVector&lt;const aclTensor *&gt; &amp;inputs, size_t alignBytes) const</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p146765711267"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p146765711267"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p146765711267"></a>获取输入为host侧数据的总大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row1067617142619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59901531754"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59901531754"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59901531754"></a>uint64_t CalcDeviceCacheSize(const FVector&lt;const aclTensor *&gt; &amp;inputs,</p>
<p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p127731022649"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p127731022649"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p127731022649"></a>std::unique_ptr&lt;AicpuTask&gt; &amp;aicpuTask) const</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1367611716266"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1367611716266"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p1367611716266"></a>计算device侧预留的内存大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row106761778266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p168971431102816"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p168971431102816"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p168971431102816"></a>void Clear()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p18631559356"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p18631559356"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p18631559356"></a>清理缓存的task。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row36761078266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p207388241463"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p207388241463"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p207388241463"></a>static size_t GenHashBinary(const uint8_t *addr, uint32_t len)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59021217177"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59021217177"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p59021217177"></a>获取task哈希表键值种子。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_row106761676263"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p197679461076"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p197679461076"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p197679461076"></a>size_t GenTaskKey(uint8_t inputKey[], size_t &amp;keyLen, op::OpArgContext *args, const FVector&lt;const aclTensor *&gt; &amp;inputs) const</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p31543291098"><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p31543291098"></a><a name="zh-cn_topic_0000002078499042_zh-cn_topic_0000001916948368_p31543291098"></a>生成task查找的key。</p>
</td>
</tr>
</tbody>
</table>

