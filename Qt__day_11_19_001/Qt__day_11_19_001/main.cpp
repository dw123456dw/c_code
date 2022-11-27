#include "qt__day_11_19_001.h"
#include <QtWidgets/QApplication>

//    argc 命令行变量的数量   argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在QT中，有且只有一个
    QApplication a(argc, argv);
    //窗口对象，继承了qwidget
    Qt__day_11_19_001 w;
    //窗口默认不会显示，必须调用show方法
    w.show();

    //让应用程序进入消息循环
    //让代码阻塞到这行
    return a.exec();
}
