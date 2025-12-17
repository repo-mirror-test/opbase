# GetDataType<a name="ZH-CN_TOPIC_0000002483403064"></a>

## 功能说明<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的数据类型。

## 函数原型<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
op::DataType GetDataType()
```

## 参数说明<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_zh-cn_topic_0000001647821269_section25791320141317"></a>

op::DataType（即ge::DataType）表示aclTensor中元素的数据类型，包含多种数据类型，例如float16、float32等。

> **说明：** 
>ge::DataType介绍参见[《基础数据结构和接口参考》](https://www.hiascend.com/document/redirect/CannCommunitybasicopapi)中”ge命名空间 > DataType“。

## 约束说明<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078498958_zh-cn_topic_0000001948648825_section1086173012323"></a>

```
// 获取input的数据类型
void Func(const aclTensor *input) {
    op::DataType dataType = input->GetDataType();
}
```

