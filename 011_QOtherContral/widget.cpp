#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击按钮获取值
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        qDebug() << ui->widget->getnum();
    });

    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->widget->setnum(50);
    });

}

Widget::~Widget()
{
    delete ui;
}

