# op\_arg\_def<a name="ZH-CN_TOPIC_0000002483563048"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11181822161320"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11181822161320"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5181112213137"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5181112213137"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row41435492361"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1869362376"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1869362376"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1869362376"></a>VisitTupleElem(const F &amp;func, const std::tuple&lt;Ts...&gt; &amp;tp)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1366131743716"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1366131743716"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1366131743716"></a>遍历OpArgBase的所有元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row814344973614"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p8869561377"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p8869561377"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p8869561377"></a>VisitTupleElemNoReturn(const F &amp;func, const std::tuple&lt;Ts...&gt; &amp;tp)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p36713179370"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p36713179370"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p36713179370"></a>遍历OpArgBase的所有元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11143549153613"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p386918613373"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p386918613373"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p386918613373"></a>VisitTupleElemAt(size_t idx, const F &amp;func, const std::tuple&lt;Ts...&gt; &amp;tp)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p267517203717"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p267517203717"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p267517203717"></a>对OpArgBase给定idx的元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row9144749183616"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p186918693715"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p186918693715"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p186918693715"></a>OpArgBase(const std::tuple&lt;T...&gt; &amp;arg)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1067117133712"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1067117133712"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1067117133712"></a>OpArgBase构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1714494993615"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158691069377"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158691069377"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158691069377"></a>OpArgBase(std::tuple&lt;T...&gt; &amp;&amp;arg)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16741793719"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16741793719"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16741793719"></a>OpArgBase构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11441493364"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p986918633710"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p986918633710"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p986918633710"></a>OpArgBase()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3679177371"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3679177371"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3679177371"></a>OpArgBase构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row7182522101317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14285171619218"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14285171619218"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14285171619218"></a>Size()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158101110182916"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158101110182916"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p158101110182916"></a>获取OpArgBase的元素个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row93592161401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p928519163212"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p928519163212"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p928519163212"></a>VisitBy(const F &amp;func)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p681017107296"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p681017107296"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p681017107296"></a>遍历OpArgBase的所有元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row6359151612405"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p728620166211"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p728620166211"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p728620166211"></a>VisitTupleElem(func, arg_)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18811131011297"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18811131011297"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18811131011297"></a>遍历OpArgBase的所有元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1435915162404"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1928617169218"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1928617169218"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1928617169218"></a>VisitByNoReturn(const F &amp;func)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1181161011293"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1181161011293"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1181161011293"></a>对OpArgBase给定idx的元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row335991616401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102861316225"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102861316225"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102861316225"></a>VisitAt(size_t idx, const F &amp;func)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7811151015293"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7811151015293"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7811151015293"></a>对OpArgBase给定idx的元素，调用func。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row831112412261"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1128614161825"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1128614161825"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1128614161825"></a>OpArgTypeStr(int argType)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p48117106295"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p48117106295"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p48117106295"></a>将argType转换为字符串。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row731132462612"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14286101611211"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14286101611211"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p14286101611211"></a>ExtractOpArgType(const T &amp;t, const Ts &amp;...ts)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p68113104291"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p68113104291"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p68113104291"></a>获取ts中类型为V的元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row531119241261"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13286316527"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13286316527"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13286316527"></a>ExtractOpArgTypeTuple(const Tuple &amp;t)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1681141032919"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1681141032919"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1681141032919"></a>获取t中类型为V的元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row158258276267"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p258616261272"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p258616261272"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p258616261272"></a>OpArgValue()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p08118106294"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p08118106294"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p08118106294"></a>OpArgValue的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row7543939112617"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31506389278"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31506389278"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31506389278"></a>OpArgValue(const aclTensor *value)</p>
</td>
<td class="cellrowborder" rowspan="28" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1889194972918"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1889194972918"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1889194972918"></a>用给定的value构造OpArgValue并赋值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row65431739192612"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1015093819274"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1015093819274"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1015093819274"></a>OpArgValue(aclTensor *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1584719429267"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815014380275"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815014380275"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815014380275"></a>OpArgValue(const aclTensorList *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row784710424269"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p171501438192715"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p171501438192715"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p171501438192715"></a>OpArgValue(aclTensorList *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row158478423260"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p121501438182713"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p121501438182713"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p121501438182713"></a>OpArgValue(std::string *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11847144214265"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p181501638202711"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p181501638202711"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p181501638202711"></a>OpArgValue(const std::string *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row984824212613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p715010386275"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p715010386275"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p715010386275"></a>OpArgValue(std::string &amp;value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row684884213267"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p915011382278"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p915011382278"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p915011382278"></a>OpArgValue(const std::string &amp;value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row178481142162610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5150143815279"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5150143815279"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5150143815279"></a>OpArgValue(const char *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1684884272616"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815173811278"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815173811278"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p815173811278"></a>OpArgValue(char *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row8848134216261"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815153817278"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815153817278"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815153817278"></a>OpArgValue(std::vector&lt;std::tuple&lt;void *, const aclTensor *&gt;&gt; *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row48481442112613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13151538102712"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13151538102712"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13151538102712"></a>OpArgValue(const std::vector&lt;std::tuple&lt;void*, const aclTensor*&gt;&gt; *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row8543539192610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7934352142720"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7934352142720"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7934352142720"></a>OpArgValue(double value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row4544153992619"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p179341952182715"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p179341952182715"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p179341952182715"></a>OpArgValue(uint32_t value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row9544193962610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p129343524275"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p129343524275"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p129343524275"></a>OpArgValue(int32_t value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row19544143919260"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p119341952112717"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p119341952112717"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p119341952112717"></a>OpArgValue(float value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1154418391264"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193417523272"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193417523272"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193417523272"></a>OpArgValue(const bool value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row10544123910267"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13934135262715"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13934135262715"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13934135262715"></a>OpArgValue(const DataType value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1454423982619"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1593455214279"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1593455214279"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1593455214279"></a>OpArgValue(aclScalar *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row75449394264"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1893485222712"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1893485222712"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1893485222712"></a>OpArgValue(const aclScalar *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row6544123952611"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p093411528278"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p093411528278"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p093411528278"></a>OpArgValue(aclIntArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11545153972613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193425232710"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193425232710"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193425232710"></a>OpArgValue(const aclIntArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row21695368268"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p79341052112720"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p79341052112720"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p79341052112720"></a>OpArgValue(aclFloatArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row141691536152618"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39346529276"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39346529276"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39346529276"></a>OpArgValue(const aclFloatArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row5169236162618"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6934155272711"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6934155272711"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6934155272711"></a>OpArgValue(aclBoolArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row316919361264"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1393510523270"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1393510523270"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1393510523270"></a>OpArgValue(const aclBoolArray *value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row5169836162610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6935145217276"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6935145217276"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p6935145217276"></a>OpArgValue(op::OpImplMode value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1416918361265"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p493535292716"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p493535292716"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p493535292716"></a>OpArgValue(const T &amp;value)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row6169153615268"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39355527274"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39355527274"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p39355527274"></a>OpArg()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p52791639192917"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p52791639192917"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p52791639192917"></a>OpArg的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row131691736202612"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11935152172717"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11935152172717"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11935152172717"></a>OpArgList()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13279103916296"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13279103916296"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13279103916296"></a>OpArgList的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row417063615267"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193595222718"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193595222718"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p193595222718"></a>OpArgList(OpArg *args_, size_t count_)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3279103992913"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3279103992913"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3279103992913"></a>用给定的args创建OpArgList。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row15170153602610"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7935252152712"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7935252152712"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7935252152712"></a>OpArgContext()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p2279143962920"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p2279143962920"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p2279143962920"></a>OpArgContext的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row181701836192617"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18407417202810"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18407417202810"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18407417202810"></a>GetOpArg(OpArgDef type)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1627914397298"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1627914397298"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1627914397298"></a>用给定的type获取OpArgList。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row191701536202615"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407517122811"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407517122811"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407517122811"></a>ContainsOpArgType(OpArgDef type)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p162792039162910"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p162792039162910"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p162792039162910"></a>判断OpArgContext是否包含执行类型的OpArgList。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row317083682613"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407017132819"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407017132819"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407017132819"></a>AppendOpWorkspaceArg(aclTensorList *tensorList)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9279193912912"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9279193912912"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9279193912912"></a>将给定的TensorList作为workspace参数加入OpArgContext中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11129633122612"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p640717176282"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p640717176282"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p640717176282"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclTensor *tensor, OpArg *&amp;currArg)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102791239172918"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102791239172918"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p102791239172918"></a>将给定的参数加入OpArgList中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row18129233162619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p44071217162814"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p44071217162814"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p44071217162814"></a>AppendOpArg([[maybe_unused]] size_t idx, aclTensor *tensor, OpArg *&amp;currArg)</p>
</td>
<td class="cellrowborder" rowspan="28" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11435846143017"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11435846143017"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11435846143017"></a>将给定的参数加入OpArgList中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1112923392611"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1407217132816"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1407217132816"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1407217132816"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclTensorList *tensorList, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row713033313264"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407617182811"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407617182811"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407617182811"></a>AppendOpArg([[maybe_unused]] size_t idx, aclTensorList *tensorList, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row17130153392610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407141710286"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407141710286"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4407141710286"></a>AppendOpArg([[maybe_unused]] size_t idx, [[maybe_unused]] const std::nullptr_t tensor, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row2013003312265"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1240712178282"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1240712178282"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1240712178282"></a>AppendOpArg([[maybe_unused]] size_t idx, const bool value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row5130173332614"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5407717182812"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5407717182812"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p5407717182812"></a>AppendOpArg([[maybe_unused]] size_t idx, const DataType value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row18130833192613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140731710282"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140731710282"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140731710282"></a>AppendOpArg([[maybe_unused]] size_t idx, aclScalar *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row2130533172614"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140712178282"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140712178282"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p140712178282"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclScalar *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row9130193315260"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13407217102813"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13407217102813"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p13407217102813"></a>AppendOpArg([[maybe_unused]] size_t idx, aclIntArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1613053332618"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407171720288"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407171720288"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12407171720288"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclIntArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row7130133317269"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p164078176283"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p164078176283"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p164078176283"></a>AppendOpArg([[maybe_unused]] size_t idx, aclFloatArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row8131233192619"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12159133382817"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12159133382817"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p12159133382817"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclFloatArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row3131103313261"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p515923311288"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p515923311288"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p515923311288"></a>AppendOpArg([[maybe_unused]] size_t idx, aclBoolArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row168261927102613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815933310287"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815933310287"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1815933310287"></a>AppendOpArg([[maybe_unused]] size_t idx, const aclBoolArray *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1382617276260"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p10159333122819"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p10159333122819"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p10159333122819"></a>AppendOpArg([[maybe_unused]] size_t idx, std::string *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row14826192712261"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18159633172814"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18159633172814"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p18159633172814"></a>AppendOpArg([[maybe_unused]] size_t idx, const std::string *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row9826527172613"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7159333142813"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7159333142813"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p7159333142813"></a>AppendOpArg([[maybe_unused]] size_t idx, std::string &amp;value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row158265271264"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16160103362819"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16160103362819"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p16160103362819"></a>AppendOpArg([[maybe_unused]] size_t idx, const std::string &amp;value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row9826527102611"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p416063311285"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p416063311285"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p416063311285"></a>AppendOpArg([[maybe_unused]] size_t idx, const char *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row198263273261"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31606337284"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31606337284"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p31606337284"></a>AppendOpArg([[maybe_unused]] size_t idx, char *value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row7826027192618"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p191607330289"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p191607330289"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p191607330289"></a>AppendOpArg([[maybe_unused]] size_t idx, double value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row18826112762610"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p116023313285"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p116023313285"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p116023313285"></a>AppendOpArg([[maybe_unused]] size_t idx, float value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row1282752792619"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p19160143318287"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p19160143318287"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p19160143318287"></a>AppendOpArg([[maybe_unused]] size_t idx, int32_t value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row882719272266"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11607335281"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11607335281"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p11607335281"></a>AppendOpArg([[maybe_unused]] size_t idx, uint32_t value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row2827427142611"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160153317284"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160153317284"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160153317284"></a>AppendOpArg([[maybe_unused]] size_t idx, op::OpImplMode value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row11827192713269"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p01601233162810"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p01601233162810"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p01601233162810"></a>AppendOpArg([[maybe_unused]] size_t idx, std::vector&lt;std::tuple&lt;void*, const aclTensor*&gt;&gt; &amp;value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row6311724172619"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9160173316282"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9160173316282"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p9160173316282"></a>AppendOpArg([[maybe_unused]] size_t idx, const std::vector&lt;std::tuple&lt;void*, const aclTensor*&gt;&gt; &amp;value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row6311112413267"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160133172816"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160133172816"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160133172816"></a>AppendOpArg([[maybe_unused]] size_t idx, T value, OpArg *&amp;currArg)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row153111924172620"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p141605335285"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p141605335285"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p141605335285"></a>OpArgContextSize(const T &amp;t, const Ts &amp;...ts)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p33375545288"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p33375545288"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p33375545288"></a>用给定的参数计算OpArgContext的大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row18312132416268"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160193320286"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160193320286"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p3160193320286"></a>OpArgContextInit(OpArgContext &amp;ctx, OpArg *&amp;currArg, const T &amp;t, const Ts &amp;...ts)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p433775419286"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p433775419286"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p433775419286"></a>用给定的参数初始化OpArgContext。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row4312324112613"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160203312820"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160203312820"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160203312820"></a>MakeOpArgContext(const Ts &amp;...ts)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1133775412288"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1133775412288"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p1133775412288"></a>用给定的参数创建OpArgContext</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row331222410266"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160183312817"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160183312817"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p17160183312817"></a>GetOpArgContext(const Ts &amp;...ts)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4337054112819"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4337054112819"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p4337054112819"></a>用给定的参数获取OpArgContext</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_row13312424132619"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p201601533182819"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p201601533182819"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p201601533182819"></a>DestroyOpArgContext(OpArgContext *ctx)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p103376544283"><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p103376544283"></a><a name="zh-cn_topic_0000002114053061_zh-cn_topic_0000001919471322_p103376544283"></a>销毁指定的OpArgContext</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_row61034219271"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_p15788711192618"><a name="zh-cn_topic_0000002114053061_p15788711192618"></a><a name="zh-cn_topic_0000002114053061_p15788711192618"></a>Allocated(size_t size)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_p10788171119261"><a name="zh-cn_topic_0000002114053061_p10788171119261"></a><a name="zh-cn_topic_0000002114053061_p10788171119261"></a>申请size大小的内存</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053061_row23862415274"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053061_p1238871512266"><a name="zh-cn_topic_0000002114053061_p1238871512266"></a><a name="zh-cn_topic_0000002114053061_p1238871512266"></a>DeAllocated(void *addr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053061_p4388161582610"><a name="zh-cn_topic_0000002114053061_p4388161582610"></a><a name="zh-cn_topic_0000002114053061_p4388161582610"></a>释放地址addr的内存</p>
</td>
</tr>
</tbody>
</table>

