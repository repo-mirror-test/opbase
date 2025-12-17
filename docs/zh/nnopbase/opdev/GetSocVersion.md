# GetSocVersion<a name="ZH-CN_TOPIC_0000002483563062"></a>

## 功能说明<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_zh-cn_topic_0000001647821269_section36583473819"></a>

获取昇腾AI处理器的短型号信息，格式形如Ascend_xxx_。

## 函数原型<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
SocVersion GetSocVersion()
```

## 参数说明<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回SocVersion。

## 约束说明<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078653746_zh-cn_topic_0000001921160566_section351220174618"></a>

```
void func() {
    // ASCENDXXX请替换为实际版本型号
    if (GetCurrentPlatformInfo().GetSocVersion() != SocVersion::ASCENDXXX) {
        return;
    }
}
```

