#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QPropertyAnimation>
#include <QMouseEvent>
class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = nullptr);
    //构造函数  参数一正常显示图片  ，参数二 按下显示的图片路径
    MyPushButton(QString normalImg , QString pressImg = "" );

    //成员属性，保存用户传入的默认路径和按下的路径
    QString normalImgPath;
    QString pressImgPath;

    void zoom1();//向下跳
    void zoom2();//向上跳

    //重写鼠标点击和松开事件
    void mousePressEvent(QMouseEvent* e);
    void mouseReleaseEvent(QMouseEvent* e);
signals:

};

#endif // MYPUSHBUTTON_H
