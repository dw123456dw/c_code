#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        //手动调用绘图事件 update
        update();

    });

}

void Widget::paintEvent(QPaintEvent *event)
{
//    //在this窗口上画画
//    QPainter painter(this);

//    //画笔
//    QPen pen(QColor(255,0,0));
//    painter.setPen(pen);

//    //画刷 ,给封闭图形上色
//    QBrush brush(Qt::cyan);
//    painter.setBrush(brush);

//    //划线
//    painter.drawLine(QPoint(0,0),QPoint(100,100));

//    //画圆
//    painter.drawEllipse(QPoint(100,100),50,50);


    //高级设置
    QPainter painter(this);
    posx+=20;

    if(posx>this->width())
    {
        posx=0;
    }


    painter.drawPixmap(posx,0,QPixmap(":/photo/2.jpg"));
}




Widget::~Widget()
{
    delete ui;
}

