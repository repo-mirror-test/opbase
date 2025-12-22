# aclGetFormat<a name="ZH-CN_TOPIC_0000002020090301"></a>

## 功能说明<a name="section36583473819"></a>

获取aclTensor的format，aclTensor由[aclCreateTensor](aclCreateTensor.md)接口创建。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclGetFormat(const aclTensor *tensor, aclFormat *format)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="29.03%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="24.529999999999998%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="46.44%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="29.03%" headers="mcps1.1.4.1.1 "><p id="p14938343556"><a name="p14938343556"></a><a name="p14938343556"></a>tensor</p>
</td>
<td class="cellrowborder" valign="top" width="24.529999999999998%" headers="mcps1.1.4.1.2 "><p id="p13937204313518"><a name="p13937204313518"></a><a name="p13937204313518"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="li622515318718p0"><a name="li622515318718p0"></a><a name="li622515318718p0"></a>输入的aclTensor。</p>
</td>
</tr>
<tr id="row142925372239"><td class="cellrowborder" valign="top" width="29.03%" headers="mcps1.1.4.1.1 "><p id="p42921837142313"><a name="p42921837142313"></a><a name="p42921837142313"></a>format</p>
</td>
<td class="cellrowborder" valign="top" width="24.529999999999998%" headers="mcps1.1.4.1.2 "><p id="p22921737182313"><a name="p22921737182313"></a><a name="p22921737182313"></a>输出</p>
</td>
<td class="cellrowborder" valign="top" width="46.44%" headers="mcps1.1.4.1.3 "><p id="li182267310720p0"><a name="li182267310720p0"></a><a name="li182267310720p0"></a>返回的aclTensor的数据格式。</p>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

可能失败的原因：

-   返回161001：参数tensor或format为空指针。

## 约束说明<a name="section141811212135015"></a>

无

## 调用示例<a name="section897811370313"></a>

假设已有aclTensor对象（xTensor），获取其数据类型、数据排布格式、维度、步长、偏移等属性，再根据这些属性创建一个新的aclTensor对象（yTensor ）。

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 1.创建xTensor
int64_t xViewDims = {2, 4};       
int64_t xStridesValue = {4, 1};  // 第1维步长4，第2维步长1
int64_t xStorageDims = {2, 4};    
xTensor = aclCreateTensor(xViewDims, 2, ACL_FLOAT16, xStridesValue, 0, ACL_FORMAT_ND, xStorageDims, 2, nullptr);

// 2. 获取xTensor的各种属性值
// 获取xTensor的逻辑shape，viewDims为{2, 4}, viewDimsNum为2
int64_t *viewDims = nullptr;
uint64_t viewDimsNum = 0;
auto ret = aclGetViewShape(xTensor, &viewDims, &viewDimsNum);
// 获取xTensor的数据类型为ACL_FLOAT16
aclDataType dataType = aclDataType::ACL_DT_UNDEFINED;
ret = aclGetDataType(xTensor, &dataType);
// 获取xTensor的步长信息，stridesValue为{4, 1}, stridesNum为2
int64_t *stridesValue = nullptr;
uint64_t stridesNum = 0;
ret = aclGetViewStrides(xTensor, &stridesValue, &stridesNum);
// 获取xTensor的首元素对于storage的偏移值，offset为0
int64_t offset = 0;
ret = aclGetViewOffset(xTensor, &offset);
// 获取xTensor的数据排布格式为ACL_FORMAT_ND
aclFormat format = aclFormat::ACL_FORMAT_UNDEFINED;
ret = aclGetFormat(xTensor, &format);
// 获取xTensor的实际物理排布shape，storageDims为{2, 4}, storageDimsNum为2
int64_t *storageDims = nullptr;
uint64_t storageDimsNum = 0;
ret = aclGetStorageShape(xTensor, &storageDims, &storageDimsNum);
// device侧地址
void *deviceAddr;

// 3.根据xTensor的属性创建新的tensor
aclTensor *yTensor = aclCreateTensor(viewDims, viewDimsNum, dataType, stridesValue, offset, format, storageDims, storageDimsNum, deviceAddr);

// 4.手动释放内存
delete[] viewDims;
delete[] stridesValue;
delete[] storageDims;
```

