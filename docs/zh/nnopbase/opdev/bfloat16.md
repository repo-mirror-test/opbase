# bfloat16<a name="ZH-CN_TOPIC_0000002483563022"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row1918116227138"><th class="cellrowborder" valign="top" width="46.53%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11181822161320"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11181822161320"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="53.47%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5181112213137"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5181112213137"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row12181172271314"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18649143514010"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18649143514010"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18649143514010"></a>from_bits()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p164563496410"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p164563496410"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p164563496410"></a>空结构体，暂时没用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row2018110223134"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p764911351400"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p764911351400"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p764911351400"></a>from_bits_t()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19456749184120"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19456749184120"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19456749184120"></a>空结构体，暂时没用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row9181192201317"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15649133544011"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15649133544011"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15649133544011"></a>bfloat16(uint16_t bits, [[maybe_unused]] from_bits_t fromBits)</p>
</td>
<td class="cellrowborder" rowspan="6" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1145654911414"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1145654911414"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1145654911414"></a>struct bfloat16的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row01811122131319"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36493353405"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36493353405"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36493353405"></a>bfloat16()</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row161811622181311"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4649635124013"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4649635124013"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4649635124013"></a>bfloat16(float v)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row8181192221312"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1865013515405"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1865013515405"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1865013515405"></a>bfloat16(const complex64 &amp;val)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row7182522101317"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p56503355407"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p56503355407"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p56503355407"></a>bfloat16(const complex128 &amp;val)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row93592161401"><td class="cellrowborder" valign="top" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p0650635184011"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p0650635184011"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p0650635184011"></a>bfloat16(const T &amp;val)</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row6359151612405"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p20650123516402"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p20650123516402"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p20650123516402"></a>float()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p194571349114112"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p194571349114112"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p194571349114112"></a>将结构体struct bfloat16成员变量value从uint16_t型转为float型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row1435915162404"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86508353401"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86508353401"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86508353401"></a>bool()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1225185641019"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1225185641019"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1225185641019"></a>判断当前bfloat16数值的绝对值是否大于float数据类型的epsilon值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row335991616401"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1265003516408"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1265003516408"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1265003516408"></a>epsilon()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p72251456171016"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p72251456171016"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p72251456171016"></a>返回bfloat16数据类型的epsilon值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row5359191644012"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p165013354400"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p165013354400"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p165013354400"></a>short()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338418171117"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338418171117"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338418171117"></a>将当前bfloat16数值转换为short类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row635991618401"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18650163554018"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18650163554018"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p18650163554018"></a>int()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19384151771116"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19384151771116"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19384151771116"></a>将当前bfloat16数值转换为int类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row8359716194018"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86501835144011"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86501835144011"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p86501835144011"></a>long()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p113841017111118"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p113841017111118"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p113841017111118"></a>将当前bfloat16数值转换为long类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row76392044010"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p166501635194020"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p166501635194020"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p166501635194020"></a>char()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p83848171115"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p83848171115"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p83848171115"></a>将当前bfloat16数值转换为char类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row86317206401"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7650735204020"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7650735204020"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7650735204020"></a>double()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338451761115"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338451761115"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1338451761115"></a>将当前bfloat16数值转换为double类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row863162011405"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1382265514010"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1382265514010"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1382265514010"></a>complex64()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1838431741111"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1838431741111"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1838431741111"></a>将当前bfloat16数值转换为complex64类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row5631820154010"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5822255134017"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5822255134017"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5822255134017"></a>complex128()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p183844173114"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p183844173114"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p183844173114"></a>将当前bfloat16数值转换为complex128类型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row863112010401"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282210553404"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282210553404"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282210553404"></a>round_to_bfloat16(float v)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15384141721112"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15384141721112"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p15384141721112"></a>将浮点数转换为bfloat16，舍入方法为round-nearest-to-even。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row4631720204017"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822145517409"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822145517409"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822145517409"></a>highest()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660181341415"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660181341415"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660181341415"></a>bfloat16数据类型的最大值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row46462012402"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582213553401"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582213553401"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582213553401"></a>lowest()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13660171351414"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13660171351414"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13660171351414"></a>bfloat16数据类型的最小值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row86482017409"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822175516402"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822175516402"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822175516402"></a>min_positive_normal()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p146601013151417"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p146601013151417"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p146601013151417"></a>bfloat16数据类型最小的正数正常值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row364112024019"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p6822055154013"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p6822055154013"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p6822055154013"></a>IsZero()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p76601613171414"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p76601613171414"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p76601613171414"></a>判断当前bfloat16数值是不是0。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row26402016404"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282217557405"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282217557405"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282217557405"></a>float_isnan(const float &amp;x)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p10660191312144"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p10660191312144"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p10660191312144"></a>判断float类型数值x是不是非正常数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row36416203404"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822195594012"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822195594012"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p11822195594012"></a>isinf(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660121319146"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660121319146"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660121319146"></a>判断给定的bfloat16数值a是不是无穷大。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row126412013405"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58225554404"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58225554404"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58225554404"></a>isnan(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19660613201420"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19660613201420"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19660613201420"></a>判断给定的bfloat16数值a是否不是一个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row156361752154013"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582375517405"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582375517405"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1582375517405"></a>isfinite(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p266061311417"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p266061311417"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p266061311417"></a>判断给定的bfloat16数值a是否为有限值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row116378521401"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p482320553403"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p482320553403"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p482320553403"></a>exp(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p066011137144"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p066011137144"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p066011137144"></a>计算e的a次幂。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row8637125224011"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58231955124017"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58231955124017"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p58231955124017"></a>log(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1066014136148"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1066014136148"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1066014136148"></a>计算a的自然对数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row18637195284020"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19823125519400"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19823125519400"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p19823125519400"></a>log10(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p2660121319148"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p2660121319148"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p2660121319148"></a>计算以10为底的a的对数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row13637115219407"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p582318554401"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p582318554401"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p582318554401"></a>sqrt(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p766031316142"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p766031316142"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p766031316142"></a>计算a的平方根。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row1563718521400"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p982317553401"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p982317553401"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p982317553401"></a>pow(const bfloat16 &amp;a, const bfloat16 &amp;b)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660151317146"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660151317146"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p5660151317146"></a>计算a的b次幂。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row86371252114019"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p108231755114010"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p108231755114010"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p108231755114010"></a>sin(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660131361413"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660131361413"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4660131361413"></a>计算a角度的正弦值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row663716520407"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p178237553404"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p178237553404"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p178237553404"></a>cos(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p666151317143"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p666151317143"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p666151317143"></a>计算a角度的余弦值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row19637155214018"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p128232559403"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p128232559403"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p128232559403"></a>tan(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36611113171413"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36611113171413"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p36611113171413"></a>计算a角度的正切值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row3637105214017"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282335517401"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282335517401"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1282335517401"></a>tanh(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7661171371416"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7661171371416"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p7661171371416"></a>计算a角度的双曲正切值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row864112011405"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546692114413"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546692114413"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546692114413"></a>floor(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13700331201120"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13700331201120"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p13700331201120"></a>返回不大于bfloat16数值a的最大整数值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row1738914412"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74667219419"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74667219419"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74667219419"></a>ceil(const bfloat16 &amp;a)</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p9700131171116"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p9700131171116"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p9700131171116"></a>返回不小于bfloat16数值a的最小整数值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row197381217419"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p54667210413"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p54667210413"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p54667210413"></a>min()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p117000310113"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p117000310113"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p117000310113"></a>返回bfloat16数据类型最小的正数正常值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row197384111417"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p174661721164110"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p174661721164110"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p174661721164110"></a>max()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p570017317111"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p570017317111"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p570017317111"></a>返回bfloat16数据类型的最大值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row19739214417"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74669213411"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74669213411"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p74669213411"></a>round_error()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p16700143141112"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p16700143141112"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p16700143141112"></a>最大舍入误差的量。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row873916164117"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1846692114412"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1846692114412"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1846692114412"></a>infinity()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p37009313115"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p37009313115"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p37009313115"></a>返回bfloat16数据类型的无穷大值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row16739012416"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546632124114"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546632124114"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1546632124114"></a>quiet_NaN()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p187001931171113"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p187001931171113"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p187001931171113"></a>返回bfloat16数据类型的quite(non-signaling) NaN值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row37391319418"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p134667219416"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p134667219416"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p134667219416"></a>signaling_NaN()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p87009313112"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p87009313112"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p87009313112"></a>返回bfloat16数据类型的signaling NaN值。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_row885034194117"><td class="cellrowborder" valign="top" width="46.53%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4466192154112"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4466192154112"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p4466192154112"></a>denorm_min()</p>
</td>
<td class="cellrowborder" valign="top" width="53.47%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1700103161120"><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1700103161120"></a><a name="zh-cn_topic_0000002114053013_zh-cn_topic_0000001917539994_p1700103161120"></a>返回bfloat16数据类型最小正非规格化值。</p>
</td>
</tr>
</tbody>
</table>

