# GetOriginalFormat<a name="ZH-CN_TOPIC_0000002515603001"></a>

## 功能说明<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的OriginFormat。

OriginFormat一般表示aclTensor在经历transdata节点前（如果存在该节点）的原始Format信息。

## 函数原型<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
op::Format GetOriginalFormat()
```

## 参数说明<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回一个op::Format（即ge::Format），本身是一个枚举，包含多种不同的Format，例如NCHW、ND等。

> **说明：** 
>ge::Format介绍参见中”ge命名空间 > Format“。

## 约束说明<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098029_zh-cn_topic_0000001919484494_section1086173012323"></a>

```
void Func(const aclTensor *input) {
    auto format = input->GetOriginalFormat();
}
```

