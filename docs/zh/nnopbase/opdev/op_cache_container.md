# op\_cache\_container<a name="ZH-CN_TOPIC_0000002515603025"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1918116227138"><th class="cellrowborder" valign="top" width="47.89%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p11181822161320"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p11181822161320"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="52.11%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5181112213137"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5181112213137"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row12181172271314"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867665984013"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867665984013"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867665984013"></a>ListHead()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p49292035164110"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p49292035164110"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p49292035164110"></a>双向链表的构造函数，用于初始化双向链表。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row2018110223134"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9676359174014"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9676359174014"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9676359174014"></a>Add(ListHead *head)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p18929173514116"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p18929173514116"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p18929173514116"></a>将head插入当前链表的表头。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row11533230403"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p367685994018"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p367685994018"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p367685994018"></a>Del()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929335164114"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929335164114"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929335164114"></a>将当前链表节点从链表中删除。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row12531823184013"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p667619599409"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p667619599409"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p667619599409"></a>Empty()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929183512415"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929183512415"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4929183512415"></a>判断链表是否为空。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row0180630194013"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14676175904013"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14676175904013"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14676175904013"></a>HlistNode()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1092963514117"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1092963514117"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1092963514117"></a>hash表节点的构造函数，用于初始化hash表节点。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row141801330114016"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p156761059114018"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p156761059114018"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p156761059114018"></a>HlistHead()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p59301735204116"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p59301735204116"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p59301735204116"></a>hash表链表头的构造函数，用于初始化hash表链表头。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row318113013409"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p126761159134011"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p126761159134011"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p126761159134011"></a>Add(HlistNode *node)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p149305353410"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p149305353410"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p149305353410"></a>将node插入hash表链表头。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1018112302405"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p0676559164010"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p0676559164010"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p0676559164010"></a>Lru()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p119301735204114"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p119301735204114"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p119301735204114"></a>LRU（Least Recently Used）链表的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row2808532154020"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p166761759104011"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p166761759104011"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p166761759104011"></a>Head()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9930163513416"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9930163513416"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p9930163513416"></a>获取LRU（Least Recently Used）链表头。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row7808103211403"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1267635918404"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1267635918404"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1267635918404"></a>Tail()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493017357413"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493017357413"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493017357413"></a>获取LRU（Least Recently Used）链表尾。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1880923215401"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1067665918409"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1067665918409"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1067665918409"></a>Sentinel()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p99301535144117"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p99301535144117"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p99301535144117"></a>获取LRU（Least Recently Used）链表哨兵节点。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row480910327405"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3676165914010"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3676165914010"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3676165914010"></a>Active(ListHead &amp;entry)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p393073513418"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p393073513418"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p393073513418"></a>将entry移动至LRU（Least Recently Used）链表头。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1580913204016"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p86778595404"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p86778595404"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p86778595404"></a>Del(ListHead &amp;entry)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p993010359418"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p993010359418"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p993010359418"></a>将entry从LRU（Least Recently Used）链表中删除。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row5657184044013"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p36771659114010"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p36771659114010"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p36771659114010"></a>OpCacheContainerIterator(pointer ptr, ListHead *sentinel, bool reverse = false)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14930235144114"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14930235144114"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p14930235144114"></a>OpCacheContainerIterator构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row531164318401"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p167717596409"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p167717596409"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p167717596409"></a>OpCacheContainerIterator(const OpCacheContainerIterator&lt;KeyType, ValueType&gt; &amp;iter)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p129301335104110"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p129301335104110"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p129301335104110"></a>OpCacheContainerIterator拷贝构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1531124354011"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p2845173043117"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p2845173043117"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p2845173043117"></a>OpCacheContainer(const hasher &amp;hash = hasher(), const key_equal &amp;equal = key_equal())</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3930193514113"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3930193514113"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3930193514113"></a>OpCacheContainer构造函数（需提供hash函数）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row10708184610401"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17677135917403"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17677135917403"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17677135917403"></a>OpCacheContainer()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17930163504110"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17930163504110"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17930163504110"></a>OpCacheContainer构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1570820461409"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867785914404"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867785914404"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p867785914404"></a>begin()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1893016351412"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1893016351412"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1893016351412"></a>获取OpCacheContainer的首节点。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row15708174612402"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1486491024111"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1486491024111"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1486491024111"></a>init(size_t capacity)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p69301353411"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p69301353411"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p69301353411"></a>OpCacheContainer初始化。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row13708146144019"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p98642107416"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p98642107416"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p98642107416"></a>find(const key_type &amp;key)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p193019359416"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p193019359416"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p193019359416"></a>用给定的key从OpCacheContainer中查找value。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1770816465409"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p10864810154117"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p10864810154117"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p10864810154117"></a>insert(reference value)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4930153564114"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4930153564114"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p4930153564114"></a>将value插入OpCacheContainer中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row670854617409"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p586418100414"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p586418100414"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p586418100414"></a>erase(reference value)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p12930103554119"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p12930103554119"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p12930103554119"></a>将value从OpCacheContainer中删除。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row970934674016"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p188642104419"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p188642104419"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p188642104419"></a>rbegin()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1493093584115"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1493093584115"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1493093584115"></a>获取OpCacheContainer的反向头节点。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row19709446164013"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864161010414"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864161010414"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864161010414"></a>rend()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8930103511412"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8930103511412"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8930103511412"></a>获取OpCacheContainer的反向尾节点。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row4709646114010"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15864171017416"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15864171017416"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15864171017416"></a>size()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5930193510417"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5930193510417"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p5930193510417"></a>获取OpCacheContainer的大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row1709246194013"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3864181011416"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3864181011416"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p3864181011416"></a>bucket(const KeyType &amp;key)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17931133534111"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17931133534111"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p17931133534111"></a>用给定的key获取OpCacheContainer的桶。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row2709646124010"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p138641410134119"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p138641410134119"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p138641410134119"></a>bucket_count()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1931193554110"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1931193554110"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p1931193554110"></a>获取OpCacheContainer的桶个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row8709164616400"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864201054120"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864201054120"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p8864201054120"></a>value_type()</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15931133544115"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15931133544115"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p15931133544115"></a>获取OpCacheContainer的value构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_row16709184613402"><td class="cellrowborder" valign="top" width="47.89%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p68641010144117"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p68641010144117"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p68641010144117"></a>GetBucket(const key_type &amp;key)</p>
</td>
<td class="cellrowborder" valign="top" width="52.11%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493153519419"><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493153519419"></a><a name="zh-cn_topic_0000002114098069_zh-cn_topic_0000001948630313_p493153519419"></a>用给定的key获取OpCacheContainer的桶。</p>
</td>
</tr>
</tbody>
</table>

