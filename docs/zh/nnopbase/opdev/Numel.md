# Numel<a name="ZH-CN_TOPIC_0000002483563032"></a>

## 功能说明<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的总元素个数。

## 函数原型<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
int64_t Numel()
```

## 参数说明<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回aclTensor的总元素个数。

## 约束说明<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_section237610235566"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053029_zh-cn_topic_0000001919489834_section1086173012323"></a>

```
// 获取input的总元素个数
void Func(const aclTensor *input) {
    int64_t num = input->Numel();
}
```

