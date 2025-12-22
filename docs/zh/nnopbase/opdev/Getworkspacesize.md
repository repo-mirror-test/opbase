# GetWorkspaceSize<a name="ZH-CN_TOPIC_0000002515603033"></a>

## 功能说明<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_zh-cn_topic_0000001647821269_section36583473819"></a>

根据L2一阶段中调用的L0接口，计算需要的workspace大小。

## 函数原型<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_zh-cn_topic_0000001647821269_section13230182415108"></a>

```
uint64_t GetWorkspaceSize()
```

## 参数说明<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_zh-cn_topic_0000001647821269_section75395119104"></a>

无

## 返回值说明<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_zh-cn_topic_0000001647821269_section25791320141317"></a>

返回L2接口在运行中需要的workspace大小。

## 约束说明<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_zh-cn_topic_0000001647821269_section19165124931511"></a>

无

## 调用示例<a name="zh-cn_topic_0000002078499006_zh-cn_topic_0000001974927281_section1086173012323"></a>

```
// aclnn固定写法
void aclnnAddGetWorkspaceSize(..., uint64_t *workspaceSize, aclOpExecutor **executor) {
    auto uniqueExecutor = CREATE_EXECUTOR();
    ......
    *workspaceSize = uniqueExecutor->GetWorkspaceSize();
}
```

