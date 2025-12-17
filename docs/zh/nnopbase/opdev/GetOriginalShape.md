# GetOriginalShape<a name="ZH-CN_TOPIC_0000002483563024"></a>

## 功能说明<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的OriginShape属性。

OriginShape表示aclTensor在经历transdata节点前（如果存在该节点）的原始shape信息，即tensor的shape数学描述。

## 函数原型<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
gert::Shape GetOriginalShape()
```

## 参数说明<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回值为gert::Shape，记录了一组shape信息，例如一个三维shape：\[10, 20, 30\]。

> **说明：** 
>gert::Shape介绍参见[《基础数据结构和接口参考》](https://www.hiascend.com/document/redirect/CannCommunitybasicopapi)中”gert命名空间 > Shape“。

## 约束说明<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053017_zh-cn_topic_0000001919324538_section1086173012323"></a>

```
void Func(const aclTensor *input) {
    auto shape = input->GetOriginalShape();
}
```

