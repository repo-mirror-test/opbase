# GetViewStrides<a name="ZH-CN_TOPIC_0000002515603003"></a>

## 功能说明<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_zh-cn_topic_0000001647821269_section36583473819"></a>

获取aclTensor的ViewStrides。

## 函数原型<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
FVector<int64_t> GetViewStrides()
```

## 参数说明<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回一个FVector（参见[表3](aclnn开发接口列表.md#zh-cn_topic_0000002114052989_table2712056035)）对象，里面存放aclTensor各个维度的stride大小。

## 约束说明<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002114098033_zh-cn_topic_0000001919489830_section1086173012323"></a>

```
// 获取input的View Stride并依次打印出每一维的stride大小
void Func(const aclTensor *input) {
    auto strides = input->GetViewStrides();
    for (int64_t stride : strides) {
        std::cout << stride << std::endl;
    }
}
```

