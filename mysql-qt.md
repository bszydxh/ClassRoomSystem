# 使qt6支持mysql8连接
踩坑小寄巧
## 写在前面
用qt下载器下载好的包是不包含mysql驱动的，这就非常的恶心，
要么你自己编译一遍，要么你自己编译一遍

同时需要明确你开发qt的编译器种类

这里我使用的是Windows，win下主流的c++编译器是 msvc 和 mingw-gcc 两种

其次你需要找到自己的qt安装地址

## 使用GitHub上与预编译好的dll（建议方法）

这位老哥把众多qt版本的mysql驱动编译成了DLL

按照[仓库readme.md](https://github.com/thecodemonkey86/qt_mysql_driver)操作即可

这里贴一下releases地址

[thecodemonkey86/qt_mysql_driver/releases](https://github.com/thecodemonkey86/qt_mysql_driver/releases)