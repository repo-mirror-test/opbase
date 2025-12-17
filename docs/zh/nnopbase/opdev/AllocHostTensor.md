# AllocHostTensor<a name="ZH-CN_TOPIC_0000002483563052"></a>

## 功能说明<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_section36583473819"></a>

申请一个host侧tensor，提供多个重载函数，可以指定不同的输入属性，如不同的数据类型。

## 函数原型<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_section13230182415108"></a>

-   **根据不同的输入信息组合，申请一个host侧tensor**

    ```
    aclTensor *AllocHostTensor(const op::Shape &shape, op::DataType datatype, op::Format format = op::Format::FORMAT_ND)
    ```

    ```
    aclTensor *AllocHostTensor(const op::Shape &storageShape, const op::Shape &originShape, op::DataType dataType, op::Format storageFormat, op::Format originFormat)
    ```

-   **申请一个host侧tensor，将指定数据类型的内存作为该tensor内容**

    ```
    aclTensor *AllocHostTensor(const int64_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const uint64_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const bool *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const char *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const int32_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const uint32_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const int16_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const uint16_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const int8_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const uint8_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const double *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const float *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const fp16_t *value, uint64_t size, op::DataType dataType)
    ```

    ```
    aclTensor *AllocHostTensor(const bfloat16 *value, uint64_t size, op::DataType dataType)
    ```

## 参数说明<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_section75395119104"></a>

-   根据不同的输入信息组合，申请一个host侧tensor。

    <a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_table149254634014"></a>
    <table><thead align="left"><tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row13924466405"><th class="cellrowborder" valign="top" width="20.46%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p492646164014"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p492646164014"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p492646164014"></a>参数</p>
    </th>
    <th class="cellrowborder" valign="top" width="12.17%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p199218464404"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p199218464404"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p199218464404"></a>输入/输出</p>
    </th>
    <th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p12921646154014"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p12921646154014"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p12921646154014"></a>说明</p>
    </th>
    </tr>
    </thead>
    <tbody><tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row12927465405"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p979814316124"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p979814316124"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p979814316124"></a>shape</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4798543111219"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4798543111219"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4798543111219"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p479804321214"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p479804321214"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p479804321214"></a>将aclTensor的<a href="GetStorageShape.md">StorageShape</a>和<a href="GetOriginalShape.md">OriginShape</a>都设置为指定的shape。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row092194624018"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1379817432129"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1379817432129"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1379817432129"></a>dataType</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17798743121213"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17798743121213"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17798743121213"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8798174319124"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8798174319124"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8798174319124"></a>指定aclTensor的数据类型。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row1720227131214"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8727153514215"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8727153514215"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p8727153514215"></a>format</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1272711353426"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1272711353426"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1272711353426"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1572723524211"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1572723524211"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1572723524211"></a>将aclTensor的<a href="GetStorageFormat.md">StorageFormat</a>和<a href="GetOriginalFormat.md">OriginFormat</a>都设置为指定的format。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row1278973311218"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10223152134318"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10223152134318"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10223152134318"></a>storageShape</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223122114431"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223122114431"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223122114431"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223142124315"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223142124315"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p9223142124315"></a>将aclTensor的<a href="GetStorageShape.md">StorageShape</a>设置为指定shape。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row168608353126"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1563752314316"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1563752314316"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1563752314316"></a>originShape</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p15637423124311"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p15637423124311"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p15637423124311"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p063752315431"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p063752315431"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p063752315431"></a>将aclTensor的<a href="GetOriginalShape.md">OriginShape</a>设置为指定shape。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row102541938121218"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384626184312"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384626184312"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384626184312"></a>storageFormat</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p113841826124313"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p113841826124313"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p113841826124313"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384926144314"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384926144314"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1384926144314"></a>将aclTensor的<a href="GetStorageFormat.md">StorageFormat</a>设置为指定format。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row102124218120"><td class="cellrowborder" valign="top" width="20.46%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1555942834318"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1555942834318"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p1555942834318"></a>originFormat</p>
    </td>
    <td class="cellrowborder" valign="top" width="12.17%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p95591328144314"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p95591328144314"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p95591328144314"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10624132924510"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10624132924510"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10624132924510"></a>将aclTensor的<a href="GetOriginalFormat.md">OriginFormat</a>设置为指定format。</p>
    </td>
    </tr>
    </tbody>
    </table>

-   申请一个host侧tensor，将指定数据类型的内存作为该tensor内容。

    <a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_table111938719446"></a>
    <table><thead align="left"><tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
    </th>
    <th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
    </th>
    <th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
    </th>
    </tr>
    </thead>
    <tbody><tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p1169694155618"></a>value</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4147251103416"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4147251103416"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p4147251103416"></a>指向不同数据类型的源数据。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p19185154915611"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p19185154915611"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p19185154915611"></a>size</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17947146143514"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17947146143514"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p17947146143514"></a>源数据的元素个数。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_row1713019284242"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10130828132414"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10130828132414"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p10130828132414"></a>dataType</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p151314288246"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p151314288246"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p151314288246"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p3131112822412"><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p3131112822412"></a><a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_p3131112822412"></a>将源数据转为dataType指定的数据类型后，写入tensor。</p>
    </td>
    </tr>
    </tbody>
    </table>

## 返回值说明<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回申请得到的aclTensor，申请失败则返回nullptr。

## 约束说明<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002078653730_zh-cn_topic_0000001949510813_section351220174618"></a>

```
// 申请一个host侧tensor，并将myArray中的数据拷贝到tensor中
void Func(aclOpExecutor *executor) {
    int64_t myArray[10];
    aclTensor *tensor = executor->AllocHostTensor(myArray, 10, DT_INT64);
}
```

