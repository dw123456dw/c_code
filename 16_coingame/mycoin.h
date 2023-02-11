#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QDebug>
#include <QTimer>
#include <QMouseEvent>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);
    MyCoin(QString btnImg);

    //金币的属性
    int posX;
    int posY;
    bool flag;

    //改变标志
    void changeFlag();
    QTimer* timer1;  //正到反
    QTimer* timer2;  //反到正
    int min=1;
    int max=8;

    bool isAnimation=false;
    //重写鼠标点击事件
    void mousePressEvent(QMouseEvent *e);

    bool isWin=false;
signals:

};

#endif // MYCOIN_H
