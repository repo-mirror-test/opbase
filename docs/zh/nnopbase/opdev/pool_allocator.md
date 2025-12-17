# pool\_allocator<a name="ZH-CN_TOPIC_0000002483563064"></a>

本章接口为预留接口，后续有可能变更或废弃，不建议开发者使用，开发者无需关注。

**表 1**  接口列表

<a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_table10181182215132"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row1918116227138"><th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.1"><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p11181822161320"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p11181822161320"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p11181822161320"></a>接口定义</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.3.1.2"><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p5181112213137"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p5181112213137"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p5181112213137"></a>功能说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row12181172271314"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p97771258121613"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p97771258121613"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p97771258121613"></a>MallocPtr(size_t size)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p6155515170"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p6155515170"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p6155515170"></a>从内存池中申请size字节的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row2018110223134"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p4777058121612"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p4777058121612"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p4777058121612"></a>FreePtr(void *block)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p151535151710"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p151535151710"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p151535151710"></a>将data block释放回内存池。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row9181192201317"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1777165819166"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1777165819166"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1777165819166"></a>PoolAllocator()</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p815654173"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p815654173"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p815654173"></a>PoolAllocator构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row01811122131319"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p077785811617"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p077785811617"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p077785811617"></a>PoolAllocator(const PoolAllocator&lt;U&gt; &amp;)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p91585121714"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p91585121714"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p91585121714"></a>PoolAllocator拷贝构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row161811622181311"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p12777175831617"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p12777175831617"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p12777175831617"></a>allocate(size_t n)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p61511514170"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p61511514170"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p61511514170"></a>从内存池中申请n个T类型大小的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row536910312043"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1643513391049"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1643513391049"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p1643513391049"></a>deallocate(T *p, [[maybe_unused]] size_t n)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p14899471949"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p14899471949"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p14899471949"></a>将p释放回内存池。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row936923110418"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p043563913420"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p043563913420"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p043563913420"></a>construct(_Up *__p, _Args &amp;&amp;...__args)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p2089347344"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p2089347344"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p2089347344"></a>用给定的参数__args和地址__p调用_Up的构造函数。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_row1436916311345"><td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.1 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p94351939642"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p94351939642"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p94351939642"></a>destroy(_Up *__p)</p>
</td>
<td class="cellrowborder" valign="top" width="50%" headers="mcps1.2.3.1.2 "><p id="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p118916477412"><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p118916477412"></a><a name="zh-cn_topic_0000002078653750_zh-cn_topic_0000001919471334_p118916477412"></a>调用__p的析构函数。</p>
</td>
</tr>
</tbody>
</table>

