# CREATE\_EXECUTOR<a name="ZH-CN_TOPIC_0000002483563010"></a>

## 宏功能<a name="zh-cn_topic_0000002078498922_zh-cn_topic_0000001971181217_section0397626155918"></a>

创建一个UniqueExecutor对象，该对象为aclOpExecutor的生成工厂类。

## 宏原型<a name="zh-cn_topic_0000002078498922_zh-cn_topic_0000001971181217_section1373361681114"></a>

```
CREATE_EXECUTOR()
```

## 参数说明<a name="zh-cn_topic_0000002078498922_zh-cn_topic_0000001971181217_section76104422125"></a>

无

## 约束说明<a name="zh-cn_topic_0000002078498922_zh-cn_topic_0000001971181217_zh-cn_topic_0000001647821269_section19165124931511"></a>

-   在使用aclOpExecutor前，必需要调用此宏创建。
-   L2一阶段接口返回前，需要调用ReleaseTo将executor转移到L2接口入参的executor中。

## 调用示例<a name="zh-cn_topic_0000002078498922_zh-cn_topic_0000001971181217_section1086173012323"></a>

```
// 创建executor
auto uniqueExecutor = CREATE_EXECUTOR();
```

