#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->dw=new Teacher(this);
    this->wb=new Student(this);
    //connect(dw,&Teacher::hungry,wb,&Student::trect);

    //调用有参的联系
    //由于出现了重载，因此需要函数指针名式指出
    void (Teacher:: *teachersignal)(QString)=&Teacher::hungry;
    void (Student:: *studenttrect)(QString)=&Student::trect;

    connect(dw,teachersignal,wb,studenttrect);  //相当于把dw和wb的函数连接在一起
    //classover();
    this->resize(600,400);
    QPushButton *btn=new QPushButton("下课",this);
    //点击按钮触发下课
    //connect(btn,&QPushButton::clicked,this,&Widget::classover);

    //无参和槽连接
    void (Teacher:: *teachersignal2)()=&Teacher::hungry;
    void (Student:: *studenttrect2)()=&Student::trect;
    connect(dw,teachersignal2,wb,studenttrect2);
    //信号和信号连接
    connect(btn,&QPushButton::clicked,dw,teachersignal2);
    //信号断开
    //disconnect(dw,teachersignal2,wb,studenttrect2);  //相当于点击按钮没有请客响应了

    //拓展
    //1一个信号可以连接多个槽函数
    //2多个信号可以连接同一个槽
    //3信号和槽函数的参数类型必须一一对应
    //4信号和槽的参数个数是否要一致？信号参数个数多于槽函数参数
    connect(btn,&QPushButton::clicked,this,&QWidget::close);

    //int ret=[]()->int{return 1000;}();
    //qDebug() << "ret=" <<ret;

    //lambda表达式
    QPushButton *btn2=new QPushButton;
    btn2->setText("关闭");
    btn2->setParent(this);
    btn2->move(100,0);
    //第四个参数用lambda
    connect(btn2,&QPushButton::clicked,this,[=](){
        //this->close();
        emit dw->hungry("鸡腿");
        btn2->setText("aaa");

    });



}

Widget::~Widget()
{
    delete ui;
}

void Widget::classover()
{
    //emit dw->hungry();
    emit dw->hungry("宫保鸡丁");
}
