# small\_vector<a name="ZH-CN_TOPIC_0000002483563068"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11181822161320"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11181822161320"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5181112213137"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5181112213137"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p151498465200"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p151498465200"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p151498465200"></a>PtrToValue(const void *const ptr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34871335205617"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34871335205617"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34871335205617"></a>将void*型数据转换为uint64_t型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111491446112016"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111491446112016"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111491446112016"></a>ValueToPtr(const uint64_t value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1487235105618"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1487235105618"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1487235105618"></a>将uint64_t型数据转换为void*型。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18149174616205"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18149174616205"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18149174616205"></a>VPtrToValue(const std::vector&lt;void *&gt; v_ptr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19487123517568"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19487123517568"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19487123517568"></a>将vector容器中void*型元素转换为uint64_t型元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17149144614205"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17149144614205"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17149144614205"></a>PtrToPtr(TI *const ptr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16487193515617"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16487193515617"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16487193515617"></a>任意类型指针变量（指针地址不可修改）转换为另一任意类型的指针变量。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row15926154481913"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171495466201"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171495466201"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171495466201"></a>PtrToPtr(const TI *const ptr)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34876359567"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34876359567"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p34876359567"></a>任意类型指针变量（指针地址和所指的值不可修改）转换为另一任意类型的指针变量（指针所指的值不可修改）。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row14927124412191"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p514924612208"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p514924612208"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p514924612208"></a>PtrAdd(T *const ptr, const size_t max_buf_len, const size_t idx)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p84871435155617"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p84871435155617"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p84871435155617"></a>当指针变量ptr不为空且idx小于max_buf_len，返回指针地址ptr增加idx长度后的指针，否则返回null。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row169276444199"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p914944616203"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p914944616203"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p914944616203"></a>SmallVector(const allocator_type &amp;alloc = Alloc())</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5488113555619"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5488113555619"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5488113555619"></a>SmallVector默认构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row179273442194"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p131493463208"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p131493463208"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p131493463208"></a>SmallVector(const size_type count, const T &amp;value, const allocator_type &amp;alloc = Alloc())</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19488183513562"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19488183513562"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19488183513562"></a>SmallVector构造函数，初始化count个元素值为相同value。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1081011551194"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p161491646172011"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p161491646172011"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p161491646172011"></a>SmallVector(const size_type count, const allocator_type &amp;alloc = Alloc())</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9488935155616"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9488935155616"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9488935155616"></a>SmallVector构造函数，带有count个初始元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row108101355121919"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p121491246172016"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p121491246172016"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p121491246172016"></a>SmallVector(InputIt first, const InputIt last, const allocator_type &amp;alloc = Alloc())</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134882351568"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134882351568"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134882351568"></a>SmallVector构造函数，利用迭代器范围初始化元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row7810135511199"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9149246152018"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9149246152018"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9149246152018"></a>SmallVector(const SmallVector &amp;other)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p184881235195611"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p184881235195611"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p184881235195611"></a>SmallVector拷贝构造函数，深拷贝，复制other中元素并存储在新的内存中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row6811205571915"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171491746132012"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171491746132012"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p171491746132012"></a>SmallVector(SmallVector &amp;&amp;other)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p124880355562"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p124880355562"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p124880355562"></a>SmallVector移动构造函数，将已存在的vector对象资源移动到新创建的vector中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row188111555121915"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p714994614203"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p714994614203"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p714994614203"></a>SmallVector(const std::initializer_list&lt;T&gt; init, const allocator_type &amp;alloc = Alloc())</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1948817353569"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1948817353569"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1948817353569"></a>SmallVector构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row91881910207"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111501546192013"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111501546192013"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p111501546192013"></a>clear()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p660415214561"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p660415214561"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p660415214561"></a>清空整个SmallVector。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1218931152012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1315014652010"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1315014652010"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1315014652010"></a>ClearElements()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p560465216568"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p560465216568"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p560465216568"></a>清空整个SmallVector，并返回迭代器初始地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row755411411209"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p01501746172018"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p01501746172018"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p01501746172018"></a>FreeStorage()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2604165211564"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2604165211564"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2604165211564"></a>清空内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row18598310202017"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1715044642018"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1715044642018"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1715044642018"></a>at(const size_type index)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5604205235614"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5604205235614"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p5604205235614"></a>返回SmallVector中index位置的元素的引用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1598181022017"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p101504462205"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p101504462205"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p101504462205"></a>front()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041521564"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041521564"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041521564"></a>返回SmallVector中第一个位置元素的引用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row159912102202"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134081614122114"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134081614122114"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p134081614122114"></a>begin()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1860413520564"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1860413520564"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1860413520564"></a>返回一个迭代器，指向SmallVector容器中第一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1459961032012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408161416211"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408161416211"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408161416211"></a>back()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17604175210562"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17604175210562"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17604175210562"></a>返回SmallVector中最后一个位置元素的引用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row125996106203"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1940811452113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1940811452113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1940811452113"></a>rbegin()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1260455219560"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1260455219560"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1260455219560"></a>返回一个反向迭代器，指向SmallVector容器中的最后一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row125991210162013"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15408714152114"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15408714152114"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15408714152114"></a>data()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p86041852155610"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p86041852155610"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p86041852155610"></a>返回指向第一个元素的指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row13599111014206"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p340818146219"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p340818146219"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p340818146219"></a>GetPointer()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041525566"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041525566"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p56041525566"></a>返回指向第一个元素的指针。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1959921032018"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p840841402111"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p840841402111"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p840841402111"></a>cbegin()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16604115225618"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16604115225618"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16604115225618"></a>返回一个const_iterator，指向SmallVector容器第一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row859921092018"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p740831412113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p740831412113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p740831412113"></a>cend()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106041852175610"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106041852175610"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106041852175610"></a>返回一个const_iterator，指向SmallVector容器最后一个元素的下一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row860061011205"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408514182119"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408514182119"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p8408514182119"></a>crbegin()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960485212565"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960485212565"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960485212565"></a>返回一个const_iterator，指向SmallVector容器中最后一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1600410152017"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p154089146212"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p154089146212"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p154089146212"></a>rend()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960417521565"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960417521565"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960417521565"></a>返回一个反向迭代器，指向SmallVector容器中第一个元素之前的元素，该元素被视为其反向结束。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row126009107200"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p14408014122117"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p14408014122117"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p14408014122117"></a>crend()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p156051452195610"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p156051452195610"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p156051452195610"></a>返回一个const反向迭代器，指向SmallVector容器中第一个元素之前的元素，该元素被视为其反向结束。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row9600191017206"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2408181432112"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2408181432112"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2408181432112"></a>size()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7605752115613"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7605752115613"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7605752115613"></a>返回SmallVector容器中元素的个数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row5600110172012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p040871412113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p040871412113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p040871412113"></a>reserve(const size_type new_cap)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p166051452105620"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p166051452105620"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p166051452105620"></a>当new_cap大于已分配容量，则更改容器容量，要求为SmallVector容器的元素分配的存储空间的容量至少足以容纳返回已分配存储容量的大小个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row692737112013"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p940861413219"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p940861413219"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p940861413219"></a>capacity()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18605152105611"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18605152105611"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18605152105611"></a>返回已分配存储容量的大小。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row20927073203"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p176731456192112"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p176731456192112"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p176731456192112"></a>insert(const_iterator const pos, const T &amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960515215619"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960515215619"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p960515215619"></a>在SmallVector容器指定位置前插入元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row992811762011"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p667345682113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p667345682113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p667345682113"></a>insert(const_iterator const pos, T &amp;&amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p060575285620"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p060575285620"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p060575285620"></a>在SmallVector容器指定位置前插入value元素，value是浅拷贝。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1192867112019"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1267315614213"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1267315614213"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1267315614213"></a>insert(const_iterator const pos, const size_type count, const T &amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16056529568"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16056529568"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16056529568"></a>在SmallVector容器指定位置前插入count个值为value的元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1292815718206"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p136731656152118"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p136731656152118"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p136731656152118"></a>insert(const_iterator const pos, const InputIt first, const InputIt last)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p96051152155619"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p96051152155619"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p96051152155619"></a>将指定元素范围[first, last)中的元素复制并插入到SmallVector容器指定位置前。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1292819712010"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19673145622117"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19673145622117"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p19673145622117"></a>insert(const_iterator const pos, const std::initializer_list&lt;T&gt; value_list)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p563891814572"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p563891814572"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p563891814572"></a>在SmallVector容器指定位置前插入T类型对象数组的所有元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row11928571204"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1667365692115"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1667365692115"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1667365692115"></a>emplace(const_iterator const pos, Args &amp;&amp;...args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9638161819572"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9638161819572"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p9638161819572"></a>将一个新元素直接插入到SmallVector容器中的pos之前，该元素是通过args参数直接构造出来的。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1928107162019"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15673135612212"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15673135612212"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p15673135612212"></a>erase(const_iterator const pos)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16638171811578"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16638171811578"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16638171811578"></a>删除SmallVector容器指定位置的一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row392967142017"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2673856122114"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2673856122114"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2673856122114"></a>erase(const_iterator const first, const_iterator const last)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p126381818165714"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p126381818165714"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p126381818165714"></a>删除SmallVector容器指定范围[first, last)的元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row15929207122019"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p167355612219"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p167355612219"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p167355612219"></a>push_back(const T &amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16387188579"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16387188579"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p16387188579"></a>在SmallVector容器末尾加上一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row4929278205"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11673115652113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11673115652113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11673115652113"></a>push_back(T &amp;&amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2638181810576"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2638181810576"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p2638181810576"></a>在SmallVector容器末尾加上元素value元素，value元素是浅拷贝。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row169291178207"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p367375642120"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p367375642120"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p367375642120"></a>emplace_back(Args &amp;&amp;...args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p3638918135720"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p3638918135720"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p3638918135720"></a>在SmallVector容器末尾插入一个元素，该元素是通过args参数直接构造出来的。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row11929137102014"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p6673556112111"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p6673556112111"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p6673556112111"></a>pop_back()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7638131810571"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7638131810571"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p7638131810571"></a>删除SmallVector容器最后一个元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row175547422016"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17673156142113"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17673156142113"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17673156142113"></a>resize(const size_type count)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263815185579"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263815185579"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263815185579"></a>调整SmallVector容器大小为count。如果count小于当前容器大小，则取前count个元素，否则在容器后面使用默认构造函数增加相应的元素。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1955419432018"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106739565213"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106739565213"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p106739565213"></a>resize(const size_type count, const T &amp;value)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1963841816575"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1963841816575"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1963841816575"></a>调整SmallVector容器大小为count。如果count小于当前容器大小，则取前count个元素，否则将value复制到增加的元素中。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row135541447209"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p66731556102115"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p66731556102115"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p66731556102115"></a>swap(SmallVector &amp;other)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11638101819572"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11638101819572"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p11638101819572"></a>将SmallVector容器的内容与other SmallVector容器的内容交换。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row855413413209"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1367335682112"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1367335682112"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1367335682112"></a>GetPointer(const size_type idx = 0UL)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17638918205716"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17638918205716"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17638918205716"></a>返回指定位置的地址。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row85542413204"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p267411569218"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p267411569218"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p267411569218"></a>InitStorage(const size_type size)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263991845715"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263991845715"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p263991845715"></a>初始化整个容器内存，若size小于当前容量，初始化当前容量大小的内存，若size大于当前容量，resize容器到size大小，在初始化内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row855514432016"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p113881916192217"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p113881916192217"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p113881916192217"></a>CopyRange(T *iter, InputIt first, const InputIt last)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p67400125315"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p67400125315"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p67400125315"></a>拷贝[first, last)范围内存到迭代器iter位置。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row18555345204"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1238821682220"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1238821682220"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1238821682220"></a>MoveFrom(SmallVector &amp;other)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17406122320"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17406122320"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p17406122320"></a>从other容器拷贝内存到当前容器。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1855574122012"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1338820167223"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1338820167223"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1338820167223"></a>CheckOutOfRange(const size_type index)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1074015121138"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1074015121138"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1074015121138"></a>检查index是否超出容器范围。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row19555104142010"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1038812162228"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1038812162228"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1038812162228"></a>ExpandCap(const size_type range_begin, const size_type range_len)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p87401012738"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p87401012738"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p87401012738"></a>先申请一块新的内存，大小为原容器容量加上range_len大小，新容量不足原容量2倍则按2倍扩容。在原SmallVector容器range_begin的位置拓展range_len大小的内存，并拷贝到新内存中，释放原容器内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row955654112010"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1738871622211"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1738871622211"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1738871622211"></a>ExpandSize(const size_type range_begin, const size_type range_len)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p581133018312"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p581133018312"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p581133018312"></a>在SmallVector容器中，range_begin的位置，拓展range_len大小的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row65561149201"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p193886168221"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p193886168221"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p193886168221"></a>Expand(const size_type range_begin, const size_type range_len)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18811930931"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18811930931"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p18811930931"></a>拓展SmallVector容器内存，若拓展后大于容器最大容量，按ExpandCap方式拓展，否则按ExpandSize方式拓展。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row1618911112016"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1438811167229"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1438811167229"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p1438811167229"></a>Shrink(const size_type range_begin, const size_type range_end)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p26817511034"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p26817511034"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p26817511034"></a>在SmartVector容器中，删掉从range_begin到range_end之间的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_row2189318206"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p43881216152210"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p43881216152210"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p43881216152210"></a>swap(op::internal::SmallVector&lt;T, N, Alloc&gt; &amp;sv1, op::internal::SmallVector&lt;T, N, Alloc&gt; &amp;sv2)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p968155114318"><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p968155114318"></a><a name="zh-cn_topic_0000002078653758_zh-cn_topic_0000001948630325_p968155114318"></a>交换两个SmallVector容器sv1和sv2的元素。</p>
</td>
</tr>
</tbody>
</table>

