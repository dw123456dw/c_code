#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    //pixmap绘图设备
//    QPixmap pix(300,300);
//    //填充颜色
//    pix.fill(Qt::white);
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),50,50);

//    pix.save("D:\\pix.png");

    QImage img(300,300,QImage::Format_RGB32);
    img.fill(Qt::white);

    QPainter painter(&img);
    painter.setPen(QPen(Qt::blue));
    painter.drawEllipse(QPoint(150,150),50,50);
    img.save("D:\\img.png");
}

Widget::~Widget()
{
    delete ui;
}

