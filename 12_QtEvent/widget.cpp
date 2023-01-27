#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //启动定时器
    id1 = startTimer(1000); //间隔 毫秒
    id2 = startTimer(2000);
    //以类的方式用定时器
    QTimer * timer =new QTimer(this);

    timer->start(500);

    connect(timer,&QTimer::timeout,[=](){
        static int num3=1;
        ui->label_4->setText(QString::number(num3++));
    });
    //点击暂停就暂停
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        timer->stop();
    });

    //给label_1安装事件过滤器
    ui->label_1->installEventFilter(this);
    //重写eventFilter函数
}

bool Widget::eventFilter(QObject * obj,QEvent * e)
{
    if(obj==ui->label_1)
    {
        if(e->type()==QEvent::MouseButtonPress)
        {
            QMouseEvent* ev=static_cast<QMouseEvent*>(e);
            qDebug() << "在过滤器中鼠标按下" << ev->x() << "" << ev->y();
            return true;
        }
    }
    return QWidget::eventFilter(obj,e);
}

void Widget::timerEvent(QTimerEvent *ev)
{
    if(ev->timerId()==id1)
    {
        static int num=1;
        ui->label_2->setText(QString::number(num++));
    }

    if(ev->timerId()==id2)
    {
        static int num2=1;
        ui->label_3->setText(QString::number(num2++));
    }
}




Widget::~Widget()
{
    delete ui;
}

