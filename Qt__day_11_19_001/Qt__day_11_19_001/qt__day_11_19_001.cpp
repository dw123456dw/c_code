#include "qt__day_11_19_001.h"
#include "MyPushButton.h"

Qt__day_11_19_001::Qt__day_11_19_001(QWidget *parent)
    : QWidget(parent)   //初始化列表
{
    QPushButton *btn = new QPushButton();
    btn->setParent(this);
    btn->setText("第一个按纽");

    QPushButton* btn2 = new QPushButton("第二个按钮",this);
    //设置窗口大小
    resize(600,500);
    //移动第二个按钮
    btn2->move(100,100);
    //设置窗口标题
    setWindowTitle("第一个窗口");
    //固定窗口大小
    setFixedSize(600,400);

    MyPushButton* mybtn = new MyPushButton;
    mybtn->setText("我的第二个按钮");
    mybtn->setParent(this);
    mybtn->move(200,0);

    //发送信号者，发送的信号（地址），信号的接收者，信号的处理（地址）
    connect(mybtn,&MyPushButton::clicked,this,&Qt__day_11_19_001::close);
    ui.setupUi(this);
}

Qt__day_11_19_001::~Qt__day_11_19_001()
{

}
