#include "mycoin.h"

//MyCoin::MyCoin(QWidget *parent) : QPushButton(parent)
//{

//}
MyCoin::MyCoin(QString btnImg)
{
    QPixmap pix;
    bool ret=pix.load(btnImg);
    if(!ret)
    {
        QString str=QString("图片 %1 加载失败").arg(btnImg);
        qDebug() << str;
        return ;
    }

    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
    //初始化定时器
    timer1=new QTimer(this);
    timer2=new QTimer(this);

    //监听信号   金变银
    connect(timer1,&QTimer::timeout,[=](){
        QPixmap pix;
        QString str=QString(":/res/Coin000%1.png").arg(this->min++);
        pix.load(str);

        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(),pix.height()));


        if(this->min > this->max)
        {
            this->min=1;
            isAnimation=false;
            timer1->stop();
        }
    });
    //银变金
    connect(timer2,&QTimer::timeout,[=](){
        QPixmap pix;
        QString str=QString(":/res/Coin000%1.png").arg(this->max--);
        pix.load(str);

        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(),pix.height()));


        if(this->max < this->min)
        {
            this->max=8;
            isAnimation=false;
            timer2->stop();
        }
    });

}

void MyCoin::mousePressEvent(QMouseEvent *e)
{
    //胜利时禁用金币按钮
    if(this->isAnimation || this->isWin)
    {
        return ;
    }
    else
    {
       return QPushButton::mousePressEvent(e);
    }
}

void MyCoin::changeFlag()
{
    if(this->flag)
    {
        timer1->start(30);
        this->flag=false;
        this->isAnimation=true;
    }
    else
    {
        timer2->start(30);
        this->isAnimation=true;
        this->flag=true;
    }
}




