#include "maininterface.h"
#include "ui_maininterface.h"
#include <QPainter>

MainInterface::MainInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    //配置主场景
    //固定大小
    setFixedSize(520,788);
    //设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    //设置标题
    setWindowTitle("DW带你翻金币");
    //退出
    connect(ui->actionexit,&QAction::triggered,[=](){
        this->close();
    });

    //加载音乐
    QSound * startsount=new QSound(":/res/TapButtonSound.wav",this);


    //开始的按钮
    MyPushButton *startBtn=new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5,this->height()*0.7);

    level = new ClassLevel;

    //返回上一个场景  ,自己写了个信号
    connect(level,&ClassLevel::backtointerface,[=](){
        this->setGeometry(level->geometry());
        level->hide();
        this->show();
    });

    connect(startBtn,&QPushButton::clicked,[=](){
        //播放音乐
        startsount->play();

        startBtn->zoom1();
        startBtn->zoom2();
        //延时进入选择关卡  暂停0.5秒在开新窗口用户体验+10
        QTimer::singleShot(500,this,[=](){
            //设置位置
            level->setGeometry(this->geometry());

            //自身隐藏
            this->hide();
            //进入选择
            level->show();
        });
    });
}
    //背景图片
void MainInterface::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;

    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //画背景上的图标
    pix.load(":/res/Title.png");
    //缩放图片
    //pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix);
}
MainInterface::~MainInterface()
{
    delete ui;
}

