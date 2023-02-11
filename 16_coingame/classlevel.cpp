#include "classlevel.h"
#include "playscence.h"
ClassLevel::ClassLevel(QWidget *parent) : QMainWindow(parent)
{
    //配置选择关卡场景
    this->setFixedSize(520,788);
    //设置图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("关卡选择");
    //创建菜单栏
    QMenuBar *bar = menuBar();
    setMenuBar(bar);

    //创建开始菜单
    QMenu *startMenu=bar->addMenu("开始");
    //创建退出的菜单项
    QAction *exit= startMenu->addAction("退出");

    connect(exit,&QAction::triggered,[=](){
        this->close();
    });

    //选关音乐
    QSound * choosesound=new QSound(":/res/TapButtonSound.wav",this);
    //返回音乐
    QSound * backsound=new QSound(":/res/BackButtonSound.wav",this);

    //返回按钮
    MyPushButton *backBtn=new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width()-20,this->height()-backBtn->height()-20);

    //点击返回
    connect(backBtn,&MyPushButton::clicked,[=](){
//        qDebug() << "点击返回按钮";
        //点击返回发送一个信号给主场景
        //做一个延时
        //播放
        backsound->play();

        QTimer::singleShot(500,this,[=](){
            emit backtointerface();
        });
    });

    //创建选择关卡的按钮
    for(int i=0;i<20;i++)
    {
        MyPushButton *menubtn = new MyPushButton(":/res/LevelIcon.png");
        menubtn->setParent(this);
        menubtn->move(90+i%4*100,230+i/4*80);

        connect(menubtn,&QPushButton::clicked,[=](){
            //播放音乐
            choosesound->play();

            QString str = QString("选择了第 %1 关").arg(i+1);
            qDebug() << str;

            //进入游戏场景
            this->play=new PlayScence(i+1);
            //设置游戏场景的初始位置
            play->setGeometry(this->geometry());
            play->show();
            this->hide();



            connect(play,&PlayScence::backtointerface,[=](){
                this->setGeometry(play->geometry());
                this->show();
                delete play;     //每关都不一样
                play=NULL;
            });
        });

        QLabel *label=new  QLabel;
        label->setParent(this);
        label->setFixedSize(menubtn->width(),menubtn->height());
        label->move(110+i%4*100,230+i/4*80);
        label->setText(QString::number(i+1));

        //由于label会覆盖Pushbutton所以需要设置一下label的一些属性
        label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }
}
void ClassLevel::paintEvent(QPaintEvent* )
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载标题
    pix.load(":/res/Title.png");
    painter.drawPixmap((this->width()-pix.width())*0.5,30,pix.width()+30,pix.height()+50,pix);

}
