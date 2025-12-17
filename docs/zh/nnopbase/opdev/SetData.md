# SetData<a name="ZH-CN_TOPIC_0000002515683009"></a>

## 功能说明<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_section36583473819"></a>

针对通过AllocHostTensor申请得到的host侧tensor，设置指定位置的数据。

## 函数原型<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_section13230182415108"></a>

-   针对tensor，设置指定索引处的值

    ```
    void SetData(int64_t index, const T value, op::DataType dataType)
    ```

-   针对tensor，用一块已有内存初始化tensor数据

    ```
    void SetData(const T *value, uint64_t size, op::DataType dataType)
    ```

## 参数说明<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_section75395119104"></a>

> **说明：** 
>ge::DataType介绍参见[《基础数据结构和接口参考》](https://www.hiascend.com/document/redirect/CannCommunitybasicopapi)中”ge命名空间 > DataType“。

-   设置指定索引处的值的接口说明

    <a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_table111938719446"></a>
    <table><thead align="left"><tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_row6223476444"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p10223674448"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p10223674448"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p10223674448"></a>参数</p>
    </th>
    <th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p645511218169"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p645511218169"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p645511218169"></a>输入/输出</p>
    </th>
    <th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1922337124411"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1922337124411"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1922337124411"></a>说明</p>
    </th>
    </tr>
    </thead>
    <tbody><tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_row152234713443"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1169694155618"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1169694155618"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p1169694155618"></a>index</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p320343694214"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p320343694214"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p320343694214"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p4147251103416"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p4147251103416"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p4147251103416"></a>需要修改aclTensor的第几个元素。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_row1518516493561"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p572125814019"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p572125814019"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p572125814019"></a>value</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p7185124955616"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p7185124955616"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_p7185124955616"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p17947146143514"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p17947146143514"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p17947146143514"></a>将aclTensor的指定元素修改为value的值。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_row1299516116111"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p599610117120"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p599610117120"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p599610117120"></a>dataType</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p203051181418"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p203051181418"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p203051181418"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p89762363914"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p89762363914"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p89762363914"></a>数据类型为<span id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph36553613160"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph36553613160"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph36553613160"></a>op::DataType（即ge::DataType）</span>。将value转为指定的dataType后，再写入aclTensor。</p>
    </td>
    </tr>
    </tbody>
    </table>

-   用一块已有内存初始化tensor数据的接口说明

    <a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_table713625114912"></a>
    <table><thead align="left"><tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_row111365515492"><th class="cellrowborder" valign="top" width="17.22%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p191362052494"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p191362052494"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p191362052494"></a>参数</p>
    </th>
    <th class="cellrowborder" valign="top" width="15.409999999999998%" id="mcps1.1.4.1.2"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p3136145144913"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p3136145144913"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p3136145144913"></a>输入/输出</p>
    </th>
    <th class="cellrowborder" valign="top" width="67.36999999999999%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p71367554910"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p71367554910"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p71367554910"></a>说明</p>
    </th>
    </tr>
    </thead>
    <tbody><tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_row2013611515493"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p10136155204917"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p10136155204917"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p10136155204917"></a>value</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p21368511491"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p21368511491"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p21368511491"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p101366534910"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p101366534910"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p101366534910"></a>指向需要写入aclTensor的数据内存指针。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_row131367512494"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p181362574910"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p181362574910"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p181362574910"></a>size</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p18136105124915"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p18136105124915"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p18136105124915"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p2136105164916"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p2136105164916"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p2136105164916"></a>需要写入的元素个数。</p>
    </td>
    </tr>
    <tr id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_row1413619534919"><td class="cellrowborder" valign="top" width="17.22%" headers="mcps1.1.4.1.1 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p11136654497"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p11136654497"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p11136654497"></a>dataType</p>
    </td>
    <td class="cellrowborder" valign="top" width="15.409999999999998%" headers="mcps1.1.4.1.2 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p8136852499"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p8136852499"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p8136852499"></a>输入</p>
    </td>
    <td class="cellrowborder" valign="top" width="67.36999999999999%" headers="mcps1.1.4.1.3 "><p id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p196174381918"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p196174381918"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_p196174381918"></a>数据类型为<span id="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph15114164561811"><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph15114164561811"></a><a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_ph15114164561811"></a>op::DataType（即ge::DataType）</span>。将数据转为指定的dataType后，再写入aclTensor。</p>
    </td>
    </tr>
    </tbody>
    </table>

## 返回值说明<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_section25791320141317"></a>

无

## 约束说明<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_zh-cn_topic_0000001647821269_section19165124931511"></a>

入参指针不能为空。

## 调用示例<a name="zh-cn_topic_0000002078653694_zh-cn_topic_0000001919489838_section1086173012323"></a>

```
// 初始化一块int64_t内存，分别将input的前10个数字，置为该内存的内容。并将input的第11个数字置为myArray的第一个数字。
void Func(const aclTensor *input) {
    int64_t myArray[10];
    input->SetData(myArray, 10, DT_INT64);
    input->SetData(10, myArray[0], DT_INT64);
}
```

