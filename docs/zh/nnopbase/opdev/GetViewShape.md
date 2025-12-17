# GetViewShape<a name="ZH-CN_TOPIC_0000002515602999"></a>

## 功能说明<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的ViewShape。ViewShape表示aclTensor的逻辑shape。

假设一个aclTensor的StorageShape和ViewShape如下：

-   StorageShape为\[10, 20\]：表示该aclTensor在内存上是按照\[10, 20\]排布的。
-   ViewShape为\[2, 5, 20\]：在算子使用时，表示该aclTensor可被视为一块\[2, 5, 20\]的数据使用。

## 函数原型<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
gert::Shape GetViewShape()
```

## 参数说明<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回值为gert::Shape，记录了一组shape信息，例如一个三维shape：\[10, 20, 30\]。

> **说明：** 
>gert::Shape介绍参见[《基础数据结构和接口参考》](https://www.hiascend.com/document/redirect/CannCommunitybasicopapi)中”gert命名空间 > Shape“。

## 约束说明<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098025_zh-cn_topic_0000001948643461_section1086173012323"></a>

```
void Func(const aclTensor *input) {
    auto shape = input->GetViewShape();
}
```

