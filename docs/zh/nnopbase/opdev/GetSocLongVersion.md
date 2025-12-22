# GetSocLongVersion<a name="ZH-CN_TOPIC_0000002483403092"></a>

## 功能说明<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_zh-cn_topic_0000001647821269_section36583473819"></a>

获取昇腾AI处理器的长型号信息，格式形如Ascend_xxxyy_。

## 函数原型<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
const std::string &GetSocLongVersion()
```

## 参数说明<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回字符串形式的长型号信息。

## 约束说明<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114053085_zh-cn_topic_0000001921000862_section351220174618"></a>

```
void func() {
    // Ascendxxx请替换为实际版本型号
    if (GetCurrentPlatformInfo().GetSocLongVersion() != "Ascendxxx") {
        return;
    }
}
```

