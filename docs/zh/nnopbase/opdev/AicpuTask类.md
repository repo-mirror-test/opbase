# AicpuTask类<a name="ZH-CN_TOPIC_0000002483403106"></a>

AicpuTask类用于管理AI CPU task相关的一些参数和方法，包括组装task、task初始化、task下发、task执行等功能。

具体定义如下：

```
class AicpuTask {
public:
    AicpuTask(const std::string &opType, const ge::UnknowShapeOpType unknownType)
        : opType_(opType), unknownType_(unknownType) {}
    virtual ~AicpuTask() = default;
    virtual aclnnStatus Init(const FVector<const aclTensor *> &inputs, const FVector<aclTensor *> &outputs,
                             const AicpuAttrs &attrs) = 0;
    virtual aclnnStatus Run(aclOpExecutor *executor, aclrtStream stream) = 0;
    aclnnStatus SetIoTensors(aclOpExecutor *executor, op::OpArgContext *args);
    friend class AicpuTaskSpace;
    void SetSpace(void *space)
    {
        space_ = space;
    }
    void SetVisit(bool visit);
protected:
    const std::string opType_;
    const ge::UnknowShapeOpType unknownType_;
    std::unique_ptr<AicpuArgsHandler> argsHandle_;
    std::unique_ptr<AicpuExtInfoHandler> extInfoHandle_;
    uint64_t launchId_ = 0U;
    uint64_t summaryItemId_ = 0U;
    void *space_ = nullptr;
    FVector<const aclTensor *> inputs_;
    FVector<aclTensor *> outputs_;
    // 长度可能不够，后续考虑长度可扩展
    uint8_t inputKey_[kAicpuKeyBufLen] = {};
    size_t keyLen_ = 0;
    bool isVisit_ = false;
    uint64_t deviceExtMemSize_ = 0;
    uint64_t deviceCacheOffset_ = 0;
};
```

关于类中成员的详细说明请参见[表1](#zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_table137305691717)。

**表 1**  AicpuTask类成员说明

<a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_table137305691717"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row1737318565175"><th class="cellrowborder" valign="top" width="19.18%" id="mcps1.2.5.1.1"><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p122671119181816"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p122671119181816"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p122671119181816"></a>属性名</p>
</th>
<th class="cellrowborder" valign="top" width="30.709999999999997%" id="mcps1.2.5.1.2"><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1326731941810"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1326731941810"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1326731941810"></a>属性类型</p>
</th>
<th class="cellrowborder" valign="top" width="11.68%" id="mcps1.2.5.1.3"><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19267201915187"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19267201915187"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19267201915187"></a>默认值</p>
</th>
<th class="cellrowborder" valign="top" width="38.43%" id="mcps1.2.5.1.4"><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11267141991818"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11267141991818"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11267141991818"></a>属性说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row23731856151711"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11401112310189"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11401112310189"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11401112310189"></a>opType_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6372124415616"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6372124415616"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6372124415616"></a>const std::string</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18402102315183"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18402102315183"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18402102315183"></a>""</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p0401152313182"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p0401152313182"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p0401152313182"></a>Task对应的AI CPU算子名。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row11588046111818"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p134011323131811"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p134011323131811"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p134011323131811"></a>UnknownType_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10549315186"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10549315186"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10549315186"></a>const ge::UnknowShapeOpType</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p740162320187"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p740162320187"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p740162320187"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1710242413112"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1710242413112"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1710242413112"></a>标识算子shape是基类，具体类型UnknowShapeOpType。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row203731356181717"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402162341816"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402162341816"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402162341816"></a>argsHandle_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1540214236184"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1540214236184"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1540214236184"></a>std::unique_ptr&lt;AicpuArgsHandler&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p164025231189"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p164025231189"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p164025231189"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11417142141720"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11417142141720"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11417142141720"></a>管理task封装参数的对象。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row1537475620174"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7402202315182"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7402202315182"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7402202315182"></a>extInfoHandle_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402122316183"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402122316183"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11402122316183"></a>std::unique_ptr&lt;AicpuExtInfoHandler&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4402172391818"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4402172391818"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4402172391818"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1887415345186"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1887415345186"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1887415345186"></a>管理task封装拓展参数的对象。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row10625163115196"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p96251931121916"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p96251931121916"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p96251931121916"></a>launchId_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10625531131913"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10625531131913"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p10625531131913"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p126251831181914"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p126251831181914"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p126251831181914"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1862533121915"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1862533121915"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1862533121915"></a>用于profiling采集的任务下发id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row1312823112112"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1712823152114"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1712823152114"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1712823152114"></a>summaryItemId_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1412813117212"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1412813117212"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1412813117212"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p141282311211"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p141282311211"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p141282311211"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6128731142118"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6128731142118"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p6128731142118"></a>用于统计条目的id。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row310974415229"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7109124492217"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7109124492217"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p7109124492217"></a>space_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p13110204419223"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p13110204419223"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p13110204419223"></a>void*</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4110144142219"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4110144142219"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4110144142219"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p61101444112211"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p61101444112211"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p61101444112211"></a>记录task属于哪个task管理集合。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row96581275232"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p14658727182314"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p14658727182314"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p14658727182314"></a>inputs_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p146581427162311"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p146581427162311"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p146581427162311"></a>FVector&lt;const aclTensor *&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4658827122317"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4658827122317"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4658827122317"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p36584271233"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p36584271233"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p36584271233"></a>task对应算子的输入tensor指针列表。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row1688513817236"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488517387232"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488517387232"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488517387232"></a>outputs_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488563842319"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488563842319"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p488563842319"></a>FVector&lt;const aclTensor *&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1988612387239"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1988612387239"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1988612387239"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p788693822317"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p788693822317"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p788693822317"></a>task对应算子的输出tensor指针列表。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row162681558231"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18268145518230"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18268145518230"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p18268145518230"></a>inputKey_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1726810555230"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1726810555230"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1726810555230"></a>uint8_t [kAicpuKeyBufLen]</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p42681855152319"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p42681855152319"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p42681855152319"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p2026814550235"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p2026814550235"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p2026814550235"></a>task对应的key字段。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row16937105712234"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1793713576238"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1793713576238"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1793713576238"></a>keyLen_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19387577231"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19387577231"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19387577231"></a>size_t</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19938205742313"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19938205742313"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p19938205742313"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11938157182311"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11938157182311"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p11938157182311"></a>key字段长度。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row56151013242"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1061516032415"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1061516032415"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1061516032415"></a>isVisit_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p16152062415"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p16152062415"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p16152062415"></a>bool</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p9615403246"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p9615403246"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p9615403246"></a>false</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p20615160162414"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p20615160162414"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p20615160162414"></a>当前task是否正被使用。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row18662338102420"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p5662138152418"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p5662138152418"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p5662138152418"></a>deviceExtMemSize_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4662103817243"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4662103817243"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p4662103817243"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p15662133817241"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p15662133817241"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p15662133817241"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1866211380247"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1866211380247"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1866211380247"></a>device侧预留的内存。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_row13859950132410"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1685911502245"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1685911502245"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1685911502245"></a>deviceCacheOffset_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p138593505245"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p138593505245"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p138593505245"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="11.68%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1859105032417"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1859105032417"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p1859105032417"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="38.43%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p17859175014248"><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p17859175014248"></a><a name="zh-cn_topic_0000002114053109_zh-cn_topic_0000001921172050_p17859175014248"></a>device侧预留内存的偏移。</p>
</td>
</tr>
</tbody>
</table>

