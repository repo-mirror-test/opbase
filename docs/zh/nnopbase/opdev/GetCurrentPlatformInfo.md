# GetCurrentPlatformInfo<a name="ZH-CN_TOPIC_0000002515683037"></a>

## 功能说明<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_zh-cn_topic_0000001647821269_section36583473819"></a>

获取NPU平台信息，包括昇腾AI处理器型号、参数等信息。

## 函数原型<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
const PlatformInfo &GetCurrentPlatformInfo()
```

## 参数说明<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回PlatformInfo。

## 约束说明<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098089_zh-cn_topic_0000001949519785_section351220174618"></a>

```
// 获取当前平台信息
void func() {
    const PlatformInfo npuInfo = GetCurrentPlatformInfo();
}
```

