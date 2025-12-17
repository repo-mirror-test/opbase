# IsEmpty<a name="ZH-CN_TOPIC_0000002515603005"></a>

## 功能说明<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_zh-cn_topic_0000001647821269_section36583473819"></a>

判断aclTensor是否为空tensor。

## 函数原型<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
bool IsEmpty()
```

## 参数说明<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_zh-cn_topic_0000001647821269_section25791320141317"></a>

如果aclTensor为空tensor，返回true，否则为false。

## 约束说明<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098037_zh-cn_topic_0000001919329902_section1086173012323"></a>

```
// 判断input为空tensor则return，否则获取他的数据类型
void Func(const aclTensor *input) {
    if (input->IsEmpty()) {
        return;
    }
    op::DataType dataType = input->GetDataType();
}
```

