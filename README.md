## QT库存管理系统

本项目为最简单的入门项目，用于学习qt界面设计，qss样式的学习以及与数据库的交互。

* 这里使用的数据库为`sqlite3`
* system文件夹为主程序
* exe文件为打包好的`debug`版程序，可以直接运行
* `build...`文件夹为主程序构建时自己产生的调试文件，我的数据库文件`data.db`也放在里面的`debug`文件夹下

### debug版程序的打包方法

* 主程序写好之后，进入build.../debug/ 找到主程序`system.exe`，单独将它放在一个文件夹中，我把它取名成了`exe`文件夹。
* 找到你的qt应用程序，进入Qt/`版本号`(5.14.3)/选择你的版本（我的为Mingw32bit）/bin/ 进入cmd
* 将该目录下的`windeployqt.exe`运行；或者在cmd中输入:
    ```shell
    windeployqt.exe 你复制的exe程序路径（或者你直接把文件拖进去也可以）
    ```
    按回车，初步打包完成。
* 最后一步，将之前进入的bin文件夹下的三个文件以及之前的数据库文件拖入exe文件夹下就打包完成了
    
    需要的文件：
    * libgcc_s_dw2-1.dll
    * libstdc++-6.dll
    * libwinpthread-1.dll
    * data.db
