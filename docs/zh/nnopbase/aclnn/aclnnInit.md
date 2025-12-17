# aclnnInit<a name="ZH-CN_TOPIC_0000002020209813"></a>

## 函数功能<a name="section36583473819"></a>

单算子API执行框架中aclnnXxx接口的初始化函数，在调用该类算子接口前必须先进行aclnn相关资源的初始化（如读取环境变量、配置文件、加载资源库等），否则会导致系统内部出错，影响业务正常运行。

> **说明：** 
>调用aclnnInit或aclInit接口，均能实现资源初始化，二者区别在于aclnnInit仅完成aclnn相关资源初始化，而aclInit完成acl接口中各种资源（包含aclnn）的初始化。因此aclnnInit相对于aclInit更轻量一些。若两个接口都调用，也不返回失败。

## 函数原型<a name="section13230182415108"></a>

```
aclnnStatus aclnnInit(const char *configPath)
```

## 参数说明<a name="section75395119104"></a>

<a name="zh-cn_topic_0122830089_table438764393513"></a>
<table><thead align="left"><tr id="zh-cn_topic_0122830089_row53871743113510"><th class="cellrowborder" valign="top" width="17.66%" id="mcps1.1.4.1.1"><p id="zh-cn_topic_0122830089_p1438834363520"><a name="zh-cn_topic_0122830089_p1438834363520"></a><a name="zh-cn_topic_0122830089_p1438834363520"></a>参数名</p>
</th>
<th class="cellrowborder" valign="top" width="15.4%" id="mcps1.1.4.1.2"><p id="p1769255516412"><a name="p1769255516412"></a><a name="p1769255516412"></a>输入/输出</p>
</th>
<th class="cellrowborder" valign="top" width="66.94%" id="mcps1.1.4.1.3"><p id="zh-cn_topic_0122830089_p173881843143514"><a name="zh-cn_topic_0122830089_p173881843143514"></a><a name="zh-cn_topic_0122830089_p173881843143514"></a>说明</p>
</th>
</tr>
</thead>
<tbody><tr id="zh-cn_topic_0122830089_row2038874343514"><td class="cellrowborder" valign="top" width="17.66%" headers="mcps1.1.4.1.1 "><p id="p18701325105920"><a name="p18701325105920"></a><a name="p18701325105920"></a>configPath</p>
</td>
<td class="cellrowborder" valign="top" width="15.4%" headers="mcps1.1.4.1.2 "><p id="p18691425175910"><a name="p18691425175910"></a><a name="p18691425175910"></a>输入</p>
</td>
<td class="cellrowborder" valign="top" width="66.94%" headers="mcps1.1.4.1.3 "><p id="p7500955589"><a name="p7500955589"></a><a name="p7500955589"></a>aclnn的初始化配置文件所在路径（包含文件名），开发者可通过此配置开启aclnn接口的debug调试能力。默认为NULL。</p>
<p id="p440491315817"><a name="p440491315817"></a><a name="p440491315817"></a>配置文件需要为json格式，例如，configPath的取值为“/home/acl.json”，acl.json的配置示例如下：</p>
<a name="screen1669182313581"></a><a name="screen1669182313581"></a><pre class="screen" codetype="Json" id="screen1669182313581">{
   "op_debug_config":{
           "enable_debug_kernel":"on",
    }
}</pre>
<p id="p13142145145718"><a name="p13142145145718"></a><a name="p13142145145718"></a>配置项“enable_debug_kernel”支持的取值如下：</p>
<a name="ul614219451574"></a><a name="ul614219451574"></a><ul id="ul614219451574"><li>on：开启aclnn接口的debug调试能力，即算子在执行过程中会检测Global Memory是否内存越界，内部流水线是否同步等操作。</li><li>off：不开启aclnn接口的debug调试能力。 默认值为off。</li></ul>
</td>
</tr>
</tbody>
</table>

## 返回值说明<a name="section25791320141317"></a>

返回0表示成功，返回其他值表示失败，返回码列表参见[公共接口返回码](公共接口返回码.md)。

## 约束与限制<a name="section95095435610"></a>

-   本接口需与[aclnnFinalize](aclnnFinalize.md)接口配套使用，分别完成aclnn资源初始化与去初始化。
-   一个进程内只允许调用一次aclnnInit接口，不支持重复调用。

## 调用示例<a name="section897811370313"></a>

关键代码示例如下，仅供参考，不支持直接拷贝运行。

```
// 资源初始化
auto ret = aclnnInit("/home/acl.json");
...
// 创建算子接口参数对象
ret = aclCreate***(...);
...
// 调用算子两段式接口
ret = aclnnXxxGetWorkspaceSize(...);
ret = aclnnXxx(...);
...
// 销毁算子接口参数对象
ret = aclDestroy***();
...
// 资源去初始化
ret = aclnnFinalize();
```

