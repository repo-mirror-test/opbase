# AicpuTaskSpace类<a name="ZH-CN_TOPIC_0000002515603049"></a>

AicpuTaskSpace类用于管理AI CPU task复用相关的逻辑，包括新建task、查找task等功能。

具体定义如下：

```
class AicpuTaskSpace {
public:
    // 需要设置第几类动态shape算子，Tensorflow or CANN，默认设置为CANN第一类算子
    AicpuTaskSpace(const std::string &opType,
                   const ge::UnknowShapeOpType unknownType = ge::DEPEND_IN_SHAPE,
                   const bool isTf = false)
        : opType_(opType), unknownType_(unknownType), isTf_(isTf) {}
    AicpuTask *FindTask(aclOpExecutor *executor, op::OpArgContext *args,
                        const FVector<const aclTensor *> &inputs);
    AicpuTask *GetOrCreateTask(aclOpExecutor *executor, const FVector<std::string> &attrNames,
                               op::OpArgContext *args);
    void SetRef(const size_t index, const bool isInput = true);
    bool IsRef(const size_t index, const bool isInput = true) const;
    uint64_t CalcHostInputDataSize(const FVector<const aclTensor *> &inputs, size_t alignBytes) const;
    uint64_t CalcDeviceCacheSize(const FVector<const aclTensor *> &inputs,
                                 std::unique_ptr<AicpuTask> &aicpuTask) const;
    void Clear()
    {
        hashMap_.clear();
    }
    friend class AicpuTask;
private:
    static constexpr uint64_t kHashSeed = 0x9e3779b9U;
    static size_t GenHashBinary(const uint8_t *addr, uint32_t len);
    size_t GenTaskKey(uint8_t inputKey[], size_t &keyLen, op::OpArgContext *args,
                      const FVector<const aclTensor *> &inputs) const;
    const std::string opType_;
    const ge::UnknowShapeOpType unknownType_;
    const bool isTf_;
    bool hasInit_ = false;
    std::set<size_t> inputRefIndexes_;
    std::set<size_t> outputRefIndexes_;
    std::mutex mutex_;
    using HashMap = std::unordered_map<size_t, std::vector<std::unique_ptr<AicpuTask>>>;
    HashMap hashMap_;
};
```

关于类中成员的详细说明请参见[表1](#zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_table137305691717)。

**表 1**  AicpuTaskSpace类成员说明

<a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_table137305691717"></a>
<table><thead align="left"><tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row1737318565175"><th class="cellrowborder" valign="top" width="19.18%" id="mcps1.2.5.1.1"><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p122671119181816"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p122671119181816"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p122671119181816"></a>属性名</p>
</th>
<th class="cellrowborder" valign="top" width="30.709999999999997%" id="mcps1.2.5.1.2"><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1326731941810"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1326731941810"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1326731941810"></a>属性类型</p>
</th>
<th class="cellrowborder" valign="top" width="8.1%" id="mcps1.2.5.1.3"><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p19267201915187"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p19267201915187"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p19267201915187"></a>默认值</p>
</th>
<th class="cellrowborder" valign="top" width="42.01%" id="mcps1.2.5.1.4"><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11267141991818"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11267141991818"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11267141991818"></a>属性说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row23731856151711"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11401112310189"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11401112310189"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11401112310189"></a>kHashSeed</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p6372124415616"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p6372124415616"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p6372124415616"></a>const std::string</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p18402102315183"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p18402102315183"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p18402102315183"></a>""</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p0401152313182"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p0401152313182"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p0401152313182"></a>存储task的map的哈希表的键值种子。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row11588046111818"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p134011323131811"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p134011323131811"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p134011323131811"></a>opType_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10549315186"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10549315186"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10549315186"></a>const ge::UnknowShapeOpType</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p740162320187"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p740162320187"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p740162320187"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1710242413112"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1710242413112"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1710242413112"></a>算子名称。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row203731356181717"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402162341816"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402162341816"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402162341816"></a>unknownType_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1540214236184"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1540214236184"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1540214236184"></a>std::unique_ptr&lt;AicpuArgsHandler&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p164025231189"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p164025231189"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p164025231189"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11417142141720"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11417142141720"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11417142141720"></a>标识是几类算子。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row1537475620174"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7402202315182"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7402202315182"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7402202315182"></a>isTf_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402122316183"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402122316183"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p11402122316183"></a>std::unique_ptr&lt;AicpuExtInfoHandler&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4402172391818"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4402172391818"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4402172391818"></a>false</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1887415345186"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1887415345186"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1887415345186"></a>标识是执行第三方算子框架还是CANN算子框架。</p>
<a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_ul868019531636"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_ul868019531636"></a><ul id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_ul868019531636"><li>true：第三方算子框架，当前仅支持Tensorflow框架。</li><li>false：CANN算子框架。</li></ul>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row10625163115196"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p96251931121916"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p96251931121916"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p96251931121916"></a>hasInit_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10625531131913"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10625531131913"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p10625531131913"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p126251831181914"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p126251831181914"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p126251831181914"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14211015101510"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14211015101510"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14211015101510"></a>标识task是否被初始化。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row1312823112112"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1712823152114"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1712823152114"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1712823152114"></a>inputRefIndexes_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1412813117212"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1412813117212"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1412813117212"></a>uint64_t</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p141282311211"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p141282311211"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p141282311211"></a>0</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p75021321161"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p75021321161"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p75021321161"></a>标识输入是否为ref类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row310974415229"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7109124492217"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7109124492217"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p7109124492217"></a>outputRefIndexes_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p13110204419223"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p13110204419223"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p13110204419223"></a>void*</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4110144142219"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4110144142219"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4110144142219"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p3446181791614"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p3446181791614"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p3446181791614"></a>标识输出是否为ref类。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row96581275232"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14658727182314"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14658727182314"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p14658727182314"></a>mutex_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p146581427162311"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p146581427162311"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p146581427162311"></a>FVector&lt;const aclTensor *&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4658827122317"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4658827122317"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p4658827122317"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p36584271233"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p36584271233"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p36584271233"></a>task map的锁。</p>
</td>
</tr>
<tr id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_row1688513817236"><td class="cellrowborder" valign="top" width="19.18%" headers="mcps1.2.5.1.1 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488517387232"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488517387232"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488517387232"></a>hashMap_</p>
</td>
<td class="cellrowborder" valign="top" width="30.709999999999997%" headers="mcps1.2.5.1.2 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488563842319"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488563842319"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p488563842319"></a>FVector&lt;const aclTensor *&gt;</p>
</td>
<td class="cellrowborder" valign="top" width="8.1%" headers="mcps1.2.5.1.3 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1988612387239"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1988612387239"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p1988612387239"></a>null</p>
</td>
<td class="cellrowborder" valign="top" width="42.01%" headers="mcps1.2.5.1.4 "><p id="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p16320138161617"><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p16320138161617"></a><a name="zh-cn_topic_0000002078499038_zh-cn_topic_0000001949531249_p16320138161617"></a>存储task的hash表。</p>
</td>
</tr>
</tbody>
</table>

