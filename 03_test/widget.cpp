#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->btn=new QPushButton("open",this);
    this->btn1=new QPushButton("close",this);

    this->btn1->move(100,0);
    this->setWindowTitle("第一个窗口");
    QWidget* one=new QWidget;
    one->setWindowTitle("第二个窗口");

    connect(btn,&QPushButton::clicked,one,[=](){
        one->show();
    });
    connect(btn1,&QPushButton::clicked,one,[=](){
        one->close();
    });

}

Widget::~Widget()
{
    delete ui;
}

