# 项目文档
## build参数说明
[build参数说明](./context/build.md)

## op\_common接口

介绍CANN算子调用或开发时依赖的公共接口或宏等，主要涉及如下几类，接口列表如[表1](#table15234174894110)所示。

表中的接口为正式接口，支持版本后向兼容；不在表中的接口为预留接口，用户暂不需要关注。

-   log：算子日志打印相关宏。
-   math：数学计算相关接口。
-   platform：算子执行平台信息相关接口。
-   infershape：算子shape处理相关接口。

**表 1**  op\_common接口列表

<a name="table15234174894110"></a>
<table><thead align="left"><tr id="row423415482416"><th class="cellrowborder" valign="top" width="15%" id="mcps1.2.5.1.1"><p id="p12234144810418"><a name="p12234144810418"></a><a name="p12234144810418"></a>分类</p>
</th>
<th class="cellrowborder" valign="top" width="25%" id="mcps1.2.5.1.2"><p id="p423484815416"><a name="p423484815416"></a><a name="p423484815416"></a>接口</p>
</th>
<th class="cellrowborder" valign="top" width="50%" id="mcps1.2.5.1.3"><p id="p1234648144110"><a name="p1234648144110"></a><a name="p1234648144110"></a>说明</p>
</th>
<th class="cellrowborder" valign="top" width="15%" id="mcps1.2.5.1.4"><p id="p1842415715426"><a name="p1842415715426"></a><a name="p1842415715426"></a>所属头文件</p>
</th>
</tr>
</thead>
<tbody><tr id="row5234134814116"><td class="cellrowborder" rowspan="6" valign="top" width="10.778922107789223%" headers="mcps1.2.5.1.1 "><p id="p6234114811414"><a name="p6234114811414"></a><a name="p6234114811414"></a>log</p>
<p id="p2234154815419"><a name="p2234154815419"></a><a name="p2234154815419"></a></p>
<p id="p172341448154115"><a name="p172341448154115"></a><a name="p172341448154115"></a></p>
<p id="p142341248114114"><a name="p142341248114114"></a><a name="p142341248114114"></a></p>
<p id="p923564884117"><a name="p923564884117"></a><a name="p923564884117"></a></p>
<p id="p1423584894119"><a name="p1423584894119"></a><a name="p1423584894119"></a></p>
<p id="p17892172512408"><a name="p17892172512408"></a><a name="p17892172512408"></a></p>
<p id="p118921325184015"><a name="p118921325184015"></a><a name="p118921325184015"></a></p>
<p id="p1189252554010"><a name="p1189252554010"></a><a name="p1189252554010"></a></p>
<p id="p168927256406"><a name="p168927256406"></a><a name="p168927256406"></a></p>
<p id="p6892142510406"><a name="p6892142510406"></a><a name="p6892142510406"></a></p>
</td>
<td class="cellrowborder" valign="top" width="25.477452254774523%" headers="mcps1.2.5.1.2 "><p id="p02341848114110"><a name="p02341848114110"></a><a name="p02341848114110"></a><a href="./op_common/OP_LOGE.md">OP_LOGE</a></p>
</td>
<td class="cellrowborder" valign="top" width="36.116388361163885%" headers="mcps1.2.5.1.3 "><p id="p2234144874116"><a name="p2234144874116"></a><a name="p2234144874116"></a>打印算子ERROR级别日志。</p>
</td>
<td class="cellrowborder" rowspan="6" valign="top" width="27.62723727627237%" headers="mcps1.2.5.1.4 "><p id="p742427134215"><a name="p742427134215"></a><a name="p742427134215"></a>pkg_inc/op_common/log/log.h</p>
<p id="p1142497124213"><a name="p1142497124213"></a><a name="p1142497124213"></a></p>
<p id="p1042414774212"><a name="p1042414774212"></a><a name="p1042414774212"></a></p>
<p id="p3424137194217"><a name="p3424137194217"></a><a name="p3424137194217"></a></p>
<p id="p44243784214"><a name="p44243784214"></a><a name="p44243784214"></a></p>
<p id="p3424775428"><a name="p3424775428"></a><a name="p3424775428"></a></p>
<p id="p689661784019"><a name="p689661784019"></a><a name="p689661784019"></a></p>
<p id="p38977175409"><a name="p38977175409"></a><a name="p38977175409"></a></p>
<p id="p2897111774017"><a name="p2897111774017"></a><a name="p2897111774017"></a></p>
<p id="p20897151715404"><a name="p20897151715404"></a><a name="p20897151715404"></a></p>
<p id="p489731784012"><a name="p489731784012"></a><a name="p489731784012"></a></p>
</td>
</tr>
<tr id="row8234548104115"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p142342048194110"><a name="p142342048194110"></a><a name="p142342048194110"></a><a href="./op_common/OP_LOGD.md">OP_LOGD</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p62341448134114"><a name="p62341448134114"></a><a name="p62341448134114"></a>打印算子DEBUG级别日志。</p>
</td>
</tr>
<tr id="row122341548184117"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p92345483419"><a name="p92345483419"></a><a name="p92345483419"></a><a href="./op_common/OP_LOGI.md">OP_LOGI</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p1823404817418"><a name="p1823404817418"></a><a name="p1823404817418"></a>打印算子INFO级别日志。</p>
</td>
</tr>
<tr id="row11234848104118"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p162341748184111"><a name="p162341748184111"></a><a name="p162341748184111"></a><a href="./op_common/OP_LOGW.md">OP_LOGW</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p7235144814118"><a name="p7235144814118"></a><a name="p7235144814118"></a>打印算子WARNING级别日志。</p>
</td>
</tr>
<tr id="row1723517486410"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p22351748154112"><a name="p22351748154112"></a><a name="p22351748154112"></a><a href="./op_common/OP_CHECK_IF.md">OP_CHECK_IF</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p42350489415"><a name="p42350489415"></a><a name="p42350489415"></a>当condition条件成立时，输出日志，并执行return表达式。</p>
</td>
</tr>
<tr id="row1923564864112"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p14235134814116"><a name="p14235134814116"></a><a name="p14235134814116"></a><a href="./op_common/OP_CHECK_NULL_WITH_CONTEXT.md">OP_CHECK_NULL_WITH_CONTEXT</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p152351648204111"><a name="p152351648204111"></a><a name="p152351648204111"></a>根据传入的context上下文，校验传入的指针是否为nullptr。</p>
</td>
</tr>
<tr id="row201341245184015"><td class="cellrowborder" rowspan="5" valign="top" width="10.778922107789223%" headers="mcps1.2.5.1.1 "><p id="p18135245174019"><a name="p18135245174019"></a><a name="p18135245174019"></a>math</p>
<p id="p496112114110"><a name="p496112114110"></a><a name="p496112114110"></a></p>
<p id="p76291024110"><a name="p76291024110"></a><a name="p76291024110"></a></p>
<p id="p17964413194111"><a name="p17964413194111"></a><a name="p17964413194111"></a></p>
<p id="p146156178417"><a name="p146156178417"></a><a name="p146156178417"></a></p>
</td>
<td class="cellrowborder" valign="top" width="25.477452254774523%" headers="mcps1.2.5.1.2 "><p id="p1135194514019"><a name="p1135194514019"></a><a name="p1135194514019"></a><a href="./op_common/FloorDiv.md">FloorDiv</a></p>
</td>
<td class="cellrowborder" valign="top" width="36.116388361163885%" headers="mcps1.2.5.1.3 "><p id="p3135845204016"><a name="p3135845204016"></a><a name="p3135845204016"></a><span>向下取整的除法</span>。</p>
</td>
<td class="cellrowborder" rowspan="5" valign="top" width="27.62723727627237%" headers="mcps1.2.5.1.4 "><p id="p91350459405"><a name="p91350459405"></a><a name="p91350459405"></a><span>pkg_inc/op_common/op_host/util/math_util.h</span></p>
<p id="p16961152114118"><a name="p16961152114118"></a><a name="p16961152114118"></a></p>
<p id="p3628109416"><a name="p3628109416"></a><a name="p3628109416"></a></p>
<p id="p1996412137419"><a name="p1996412137419"></a><a name="p1996412137419"></a></p>
<p id="p96159176416"><a name="p96159176416"></a><a name="p96159176416"></a></p>
</td>
</tr>
<tr id="row796172164115"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p16961162154120"><a name="p16961162154120"></a><a name="p16961162154120"></a><a href="./op_common/FloorAlign.md">FloorAlign</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p18961132164114"><a name="p18961132164114"></a><a name="p18961132164114"></a><span>以align为单元，向下对齐</span>。</p>
</td>
</tr>
<tr id="row362191016419"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p1762310144111"><a name="p1762310144111"></a><a name="p1762310144111"></a><a href="./op_common/CeilDiv.md">CeilDiv</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p56219104411"><a name="p56219104411"></a><a name="p56219104411"></a><span>向上取整的除法</span>。</p>
</td>
</tr>
<tr id="row10964121312417"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p39641913204114"><a name="p39641913204114"></a><a name="p39641913204114"></a><a href="./op_common/CeilAlign.md">CeilAlign</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p5964913104115"><a name="p5964913104115"></a><a name="p5964913104115"></a><span>以align为单元，向上对齐</span>。</p>
</td>
</tr>
<tr id="row1261481718417"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p12615161754118"><a name="p12615161754118"></a><a name="p12615161754118"></a><a href="./op_common/IsFloatEqual.md">IsFloatEqual</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p331619231547"><a name="p331619231547"></a><a name="p331619231547"></a>判断两个float类型或double类型的数值是否相等。</p>
</td>
</tr>
<tr id="row1614192114415"><td class="cellrowborder" rowspan="4" valign="top" width="10.778922107789223%" headers="mcps1.2.5.1.1 "><p id="p1214821204119"><a name="p1214821204119"></a><a name="p1214821204119"></a>platform</p>
<p id="p680642404116"><a name="p680642404116"></a><a name="p680642404116"></a></p>
<p id="p5410132812418"><a name="p5410132812418"></a><a name="p5410132812418"></a></p>
<p id="p18392146104117"><a name="p18392146104117"></a><a name="p18392146104117"></a></p>
</td>
<td class="cellrowborder" valign="top" width="25.477452254774523%" headers="mcps1.2.5.1.2 "><p id="p3141121134116"><a name="p3141121134116"></a><a name="p3141121134116"></a><a href="./op_common/GetAivCoreNum.md">GetAivCoreNum</a></p>
</td>
<td class="cellrowborder" valign="top" width="36.116388361163885%" headers="mcps1.2.5.1.3 "><p id="p15141021194120"><a name="p15141021194120"></a><a name="p15141021194120"></a><span>获取平台AI Vector的核数</span>。</p>
</td>
<td class="cellrowborder" rowspan="4" valign="top" width="27.62723727627237%" headers="mcps1.2.5.1.4 "><p id="p18141021144119"><a name="p18141021144119"></a><a name="p18141021144119"></a><span>pkg_inc/op_common/op_host/util/platform_util.h</span></p>
<p id="p1580719244418"><a name="p1580719244418"></a><a name="p1580719244418"></a></p>
<p id="p1441072816419"><a name="p1441072816419"></a><a name="p1441072816419"></a></p>
<p id="p5392174684115"><a name="p5392174684115"></a><a name="p5392174684115"></a></p>
</td>
</tr>
<tr id="row68061924144115"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p1807112434112"><a name="p1807112434112"></a><a name="p1807112434112"></a><a href="./op_common/GetAicCoreNum.md">GetAicCoreNum</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p138071524164119"><a name="p138071524164119"></a><a name="p138071524164119"></a><span>获取平台AI Cube的核数。</span></p>
</td>
</tr>
<tr id="row104104283414"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p641032817416"><a name="p641032817416"></a><a name="p641032817416"></a><a href="./op_common/GetUbSize.md">GetUbSize</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p1341010289419"><a name="p1341010289419"></a><a name="p1341010289419"></a><span>获取平台UB（Unified Buffer）空间大小，单位bytes</span>。</p>
</td>
</tr>
<tr id="row33921046134110"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p639215467413"><a name="p639215467413"></a><a name="p639215467413"></a><a href="./op_common/GetUbBlockSize.md">GetUbBlockSize</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p5392346114117"><a name="p5392346114117"></a><a name="p5392346114117"></a><span>获取平台UB（Unified Buffer）的block单元大小，单位bytes</span>。</p>
</td>
</tr>
<tr id="row67322509415"><td class="cellrowborder" rowspan="7" valign="top" width="10.778922107789223%" headers="mcps1.2.5.1.1 "><p id="p117328508418"><a name="p117328508418"></a><a name="p117328508418"></a>infershape</p>
<p id="p12672123819466"><a name="p12672123819466"></a><a name="p12672123819466"></a></p>
<p id="p14270144194613"><a name="p14270144194613"></a><a name="p14270144194613"></a></p>
<p id="p12554154411469"><a name="p12554154411469"></a><a name="p12554154411469"></a></p>
<p id="p5498194894618"><a name="p5498194894618"></a><a name="p5498194894618"></a></p>
<p id="p9682650204619"><a name="p9682650204619"></a><a name="p9682650204619"></a></p>
<p id="p142067530462"><a name="p142067530462"></a><a name="p142067530462"></a></p>
</td>
<td class="cellrowborder" valign="top" width="25.477452254774523%" headers="mcps1.2.5.1.2 "><p id="p18732155012410"><a name="p18732155012410"></a><a name="p18732155012410"></a><a href="./op_common/SetUnknownRank.md">SetUnknownRank</a></p>
</td>
<td class="cellrowborder" valign="top" width="36.116388361163885%" headers="mcps1.2.5.1.3 "><p id="p3732250204120"><a name="p3732250204120"></a><a name="p3732250204120"></a><span>设置输入shape为维度不确定的动态shape</span>。</p>
</td>
<td class="cellrowborder" rowspan="4" valign="top" width="27.62723727627237%" headers="mcps1.2.5.1.4 "><p id="p15733950194112"><a name="p15733950194112"></a><a name="p15733950194112"></a><span>pkg_inc/op_common/op_host/util/shape_util.h</span></p>
<p id="p1672163818461"><a name="p1672163818461"></a><a name="p1672163818461"></a></p>
<p id="p827074144613"><a name="p827074144613"></a><a name="p827074144613"></a></p>
<p id="p15551744104611"><a name="p15551744104611"></a><a name="p15551744104611"></a></p>
</td>
</tr>
<tr id="row36727383469"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p206722382467"><a name="p206722382467"></a><a name="p206722382467"></a><a href="./op_common/IsUnknownRank.md">IsUnknownRank</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p20672143844613"><a name="p20672143844613"></a><a name="p20672143844613"></a><span>检查输入shape是否为维度不确定的shape</span>。</p>
</td>
</tr>
<tr id="row72701941154620"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p82709413462"><a name="p82709413462"></a><a name="p82709413462"></a><a href="./op_common/SetUnknownShape.md">SetUnknownShape</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p102701441164615"><a name="p102701441164615"></a><a name="p102701441164615"></a><span>设置输入shape的维度为rank，且每根轴长度都为不确定值</span>。</p>
</td>
</tr>
<tr id="row17554174418464"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p1555564494612"><a name="p1555564494612"></a><a name="p1555564494612"></a><a href="./op_common/IsUnknownShape.md">IsUnknownShape</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p12555134494614"><a name="p12555134494614"></a><a name="p12555134494614"></a><span>检查输入shape的每一根轴长度是否都为不确定值</span>。</p>
</td>
</tr>
<tr id="row149834864611"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p19498184834616"><a name="p19498184834616"></a><a name="p19498184834616"></a><a href="./op_common/InferShape4Broadcast.md">InferShape4Broadcast</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p12498154834617"><a name="p12498154834617"></a><a name="p12498154834617"></a><span>broadcast类算子的infershape方法</span>。</p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.3 "><p id="p7498248164612"><a name="p7498248164612"></a><a name="p7498248164612"></a><span>pkg_inc/op_common/op_host/infershape_broadcast_util.h</span></p>
</td>
</tr>
<tr id="row66821950114613"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p868210502462"><a name="p868210502462"></a><a name="p868210502462"></a><a href="./op_common/InferShape4Elewise.md">InferShape4Elewise</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p0682115054617"><a name="p0682115054617"></a><a name="p0682115054617"></a><span>elewise类算子的infershape方法</span>。</p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.3 "><p id="p106829501460"><a name="p106829501460"></a><a name="p106829501460"></a><span>pkg_inc/op_common/op_host/infershape_elewise_util.h</span></p>
</td>
</tr>
<tr id="row2206175354612"><td class="cellrowborder" valign="top" headers="mcps1.2.5.1.1 "><p id="p1620635374620"><a name="p1620635374620"></a><a name="p1620635374620"></a><a href="./op_common/InferShape4Reduce.md">InferShape4Reduce</a></p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.2 "><p id="p1920645311469"><a name="p1920645311469"></a><a name="p1920645311469"></a><span>reduce类算子的infershape方法</span>。</p>
</td>
<td class="cellrowborder" valign="top" headers="mcps1.2.5.1.3 "><p id="p7206165313466"><a name="p7206165313466"></a><a name="p7206165313466"></a><span>pkg_inc/op_common/op_host/infershape_reduce_util.h</span></p>
</td>
</tr>
</tbody>
</table>

