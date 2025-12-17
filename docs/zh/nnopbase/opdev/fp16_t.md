# fp16\_t<a name="ZH-CN_TOPIC_0000002515603021"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p11181822161320"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p11181822161320"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5181112213137"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5181112213137"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p7581162212111"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p7581162212111"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p7581162212111"></a>tagFp16(void)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481613355517"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481613355517"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481613355517"></a>fp16_t的默认构造函数且不带任何参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058102282115"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058102282115"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058102282115"></a>tagFp16(const T &amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18161033185517"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18161033185517"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18161033185517"></a>fp16_t的构造函数且有一个可以是任何数据类型的参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p12581162262112"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p12581162262112"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p12581162262112"></a>tagFp16(const bfloat16&amp; value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p198168330551"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p198168330551"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p198168330551"></a>fp16_t的构造函数且有一个bfloat16数据类型参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p165811922102118"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p165811922102118"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p165811922102118"></a>tagFp16(const uint16_t &amp;uiVal)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p281715339554"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p281715339554"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p281715339554"></a>fp16_t的构造函数且有一个uint16_t数据类型参数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row161811622181311"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p65818223215"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p65818223215"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p65818223215"></a>tagFp16(const tagFp16 &amp;fp)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1181723317554"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1181723317554"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1181723317554"></a>fp16_t的构造函数且有一个fp16_t数据类型参数（拷贝构造函数）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row8181192221312"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p185814227218"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p185814227218"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p185814227218"></a>float()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p9817123315515"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p9817123315515"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p9817123315515"></a>重写转换运算符以将fp16_t转换为float（fp32）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row7182522101317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p05811222202119"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p05811222202119"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p05811222202119"></a>bfloat16()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18817113312557"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18817113312557"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18817113312557"></a>重写转换运算符以将fp16_t转换为bfloat16。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row93592161401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358162214213"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358162214213"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358162214213"></a>double()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1881713385515"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1881713385515"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1881713385515"></a>重写转换运算符以将fp16_t转换为double（fp64）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row6359151612405"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1758142217212"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1758142217212"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1758142217212"></a>int8_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p3817233125517"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p3817233125517"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p3817233125517"></a>重写转换运算符以将fp16_t转换为int8_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1435915162404"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205811422112119"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205811422112119"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205811422112119"></a>uint8_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171933115519"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171933115519"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171933115519"></a>重写转换运算符以将fp16_t转换为uint8_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row335991616401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p14581722162112"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p14581722162112"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p14581722162112"></a>int16_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p13817183335517"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p13817183335517"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p13817183335517"></a>重写转换运算符以将fp16_t转换为int16_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row5359191644012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5581112216217"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5581112216217"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p5581112216217"></a>uint16_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171233105519"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171233105519"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98171233105519"></a>重写转换运算符以将fp16_t转换为uint16_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row635991618401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p4581422112117"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p4581422112117"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p4581422112117"></a>int32_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p20817173319558"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p20817173319558"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p20817173319558"></a>重写转换运算符以将fp16_t转换为int32_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row8359716194018"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135811322192113"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135811322192113"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135811322192113"></a>uint32_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16817183375515"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16817183375515"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16817183375515"></a>重写转换运算符以将fp16_t转换为uint32_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row76392044010"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p758116221215"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p758116221215"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p758116221215"></a>int64_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481718331559"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481718331559"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481718331559"></a>重写转换运算符以将fp16_t转换为int64_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row86317206401"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821222132116"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821222132116"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821222132116"></a>uint64_t()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1481733305516"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1481733305516"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1481733305516"></a>重写转换运算符以将fp16_t转换为uint64_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row863162011405"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17582222172112"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17582222172112"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17582222172112"></a>bool()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p2817143375518"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p2817143375518"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p2817143375518"></a>重写转换运算符以将fp16_t转换为bool。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row5631820154010"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p658232242111"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p658232242111"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p658232242111"></a>IsInf()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p158186336553"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p158186336553"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p158186336553"></a>判断fp16_t数值是不是无穷的，正无穷返回1，负无穷返回-1，否则返回0。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row125971819213"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358213222211"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358213222211"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p358213222211"></a>toFloat()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481813335556"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481813335556"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p481813335556"></a>将fp16_t转换为float（fp32）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row19592183216"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p195821222219"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p195821222219"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p195821222219"></a>toDouble()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16818173355516"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16818173355516"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p16818173355516"></a>将fp16_t转换为double（fp64）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row25971817215"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058212242112"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058212242112"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1058212242112"></a>toInt8()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18181633195510"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18181633195510"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18181633195510"></a>将fp16_t转换为int8_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row15599189217"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p0582182262114"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p0582182262114"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p0582182262114"></a>toUInt8()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1381820338553"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1381820338553"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1381820338553"></a>将fp16_t转换为uint8_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row156041815212"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821622192115"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821622192115"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p135821622192115"></a>toInt16()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p381883319551"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p381883319551"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p381883319551"></a>将fp16_t转换为int16_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1160151810213"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p145821122142113"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p145821122142113"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p145821122142113"></a>toUInt16()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p128185338558"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p128185338558"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p128185338558"></a>将fp16_t转换为uint16_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row660131818212"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1458212218212"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1458212218212"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1458212218212"></a>toInt32()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1581814338556"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1581814338556"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1581814338556"></a>将fp16_t转换为int32_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1379032722114"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205821522122110"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205821522122110"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p205821522122110"></a>toUInt32()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p181810331551"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p181810331551"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p181810331551"></a>将fp16_t转换为uint32_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row18790192772111"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p8582202218211"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p8582202218211"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p8582202218211"></a>ExtractFP16(const uint16_t &amp;val, uint16_t *s, int16_t *e, uint16_t *m)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818833115518"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818833115518"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818833115518"></a>提取fp16_t对象的符号、指数和尾数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1079132719218"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p45821622142117"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p45821622142117"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p45821622142117"></a>ReverseMan(bool negative, T *man)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818533155511"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818533155511"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p17818533155511"></a>当符号位是负数，计算尾数的补码。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row67918275216"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18283101019222"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18283101019222"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p18283101019222"></a>MinMan(const int16_t &amp;ea, T *ma, const int16_t &amp;eb, T *mb)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781823395513"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781823395513"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781823395513"></a>选择指数小于另一个指数的尾数右移。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row479122732115"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22831610192218"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22831610192218"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22831610192218"></a>RightShift(T man, int16_t shift)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781813365514"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781813365514"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1781813365514"></a>尾数右移shift位。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row1960111872118"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p102831410122218"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p102831410122218"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p102831410122218"></a>GetManSum(int16_t ea, const T &amp;ma, int16_t eb, const T &amp;mb)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1281953355519"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1281953355519"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p1281953355519"></a>获取两个fp16_t数的尾数和，T支持类型：uint16_t/uint32_t/uint64_t。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row561161812110"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19283101015223"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19283101015223"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19283101015223"></a>ManRoundToNearest(bool bit0, bool bit1, bool bitLeft, T man, uint16_t shift = 0)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19819193320556"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19819193320556"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p19819193320556"></a>将fp16_t或float尾数舍入为最接近的值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row4978872218"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p02831610132220"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p02831610132220"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p02831610132220"></a>GetManBitLength(T man)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p10819173385518"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p10819173385518"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p10819173385518"></a>获取浮点数尾数的位长度。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_row79716819226"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22849101225"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22849101225"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p22849101225"></a>isnan(op::fp16_t value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98191533145511"><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98191533145511"></a><a name="zh-cn_topic_0000002114098061_zh-cn_topic_0000001919329918_p98191533145511"></a>判断数值是不是无法表示(Not a Number)。</p>
</td>
</tr>
</tbody>
</table>

