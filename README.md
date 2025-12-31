### 当前版本: 0.0.251231-alpha
### 该项目使用混合许可证, 子项目信息如下:
 - 寄生引擎脚本语言(Parasite Script Language): MIT LICENSE. 编译器位置: TODO.
 - 寄生引擎代码编辑器(Parasite Coding Space):  MIT LICENSE. **本仓库是Parasite Coding Space的仓库**.

### 本项目所使用的外部库:
 - [SDL3](https://github.com/libsdl-org/SDL):             Zlib LICENSE.
 - [SDL3_image](https://github.com/libsdl-org/SDL_image): Zlib LICENSE.
 - [SDL3_ttf](https://github.com/libsdl-org/SDL_ttf):     Zlib LICENSE.
 - [SDL3_mixer](https://github.com/libsdl-org/SDL_mixer): Zlib LICENSE.
 - [Vulkan SDK](https://github.com/SaschaWillems/Vulkan): MIT LICENSE.

本分支暂无Resource.

# 欢迎来到ParasiteEngine
致力于性能优化与实用性的游戏引擎: Parasite Engine寄生引擎

用C++编写,以SDL3为基石,使用Vulkan API提升3D性能(注:Vulkan API部分暂未实现),目前支持Windows(WIN32)平台.

作为一个游戏引擎,Parasite Engine使用自有编辑器和脚本语言进行开发.
在使用它开发项目时,你需要通过初始化场景和编写节点树来绑定基本元素.但Parasite Engine与Godot不同,它的脚本拥有独立的工作流程,不依赖引擎的回调,这一点与python开发相似.*(你甚至可以将所有源代码塞在同一个.psscript文件里,不过不太推荐)*

更多内容待定...