# GetBlockSize<a name="ZH-CN_TOPIC_0000002515603037"></a>

## 功能说明<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_zh-cn_topic_0000001647821269_section36583473819"></a>

获取当前NPU平台上一个data block内存大小（单位Byte）。

## 函数原型<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
int64_t GetBlockSize()
```

## 参数说明<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回int64\_t。

## 约束说明<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078499014_zh-cn_topic_0000001921000866_section351220174618"></a>

```
// 获取当前NPU平台上一个data block所占的内存大小
void func() {
    int64_t size = GetCurrentPlatformInfo().GetBlockSize();
}
```

