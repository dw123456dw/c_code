#ifndef CLASSLEVEL_H
#define CLASSLEVEL_H

#include <QMainWindow>
#include <QMenuBar>
#include <QPaintEvent>
#include <QPainter>
#include <mypushbutton.h>
#include <QTimer>
#include <QLabel>
#include <playscence.h>
#include <QSound>
class ClassLevel : public QMainWindow
{
    Q_OBJECT
public:
    explicit ClassLevel(QWidget *parent = nullptr);
    //重写    绘图事件
    void paintEvent(QPaintEvent* );

    //游戏场景对象指针
    PlayScence * play=NULL;
signals:
    void backtointerface();
};

#endif // CLASSLEVEL_H
