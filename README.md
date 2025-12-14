# ParasiteEngine
致力于性能优化与实用性的游戏引擎:Parasite Engine寄生引擎

## 注意
该项目使用混合许可证.
Parasite-Python Language Standard : MIT License.
Parasite Engine toolchains (For WIN32 platform) : AGPL 3.0.

# 特性
用C++编写,以SDL3为基石,使用Vulkan API提升3D性能(注:Vulkan API部分暂未实现),目前支持Windows(WIN32)平台.

作为一个游戏引擎,必不可少的是一个
 - 解释/编译核心: 寄生引擎的专有解释/编译器使用代码生成模式,将用户的脚本代码转译成C++代码,并使用各平台编译器将其作为纯C/C++语言项目配置,编译,并发行.
 - 脚本语言: 为了使引擎同时具有快速与清晰,并拥有极高的可拓展能力和较低的上手难度,本引擎采用类Python语言作为脚本工具,我将其称之为Parasite-Python(简称P-Py)
 - IDE: 尽管这对于一个真的能用来开发游戏的引擎来说是必须的,但目前(截止至本次提交代码)并没有实现IDE的打算

大概就这样了,我要睡觉了 [doge]

版本: v0.0.251214a