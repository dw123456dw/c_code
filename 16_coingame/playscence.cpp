#include "playscence.h"


PlayScence::PlayScence(int levelnum)
{
    this->levelindex=levelnum;
    QString str=QString("进入了第 %1 关").arg(levelnum);
    qDebug() << str;
    //初始化游戏场景
    //设置固定大小
    this->setFixedSize(520,788);
    //设置标题
    this->setWindowTitle("翻金币场景");
    //设置图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));\
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

    //添加音乐
    QSound * backsound=new QSound(":/res/BackButtonSound.wav",this);
    QSound * flipsound=new QSound(":/res/ConFlipSound.wav",this);
    QSound * winsound=new QSound(":/res/LevelWinSound.wav",this);


    //返回按钮
    MyPushButton *backBtn=new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width()-20,this->height()-backBtn->height()-20);

    //点击返回
    connect(backBtn,&MyPushButton::clicked,[=](){
        backsound->play();
        QTimer::singleShot(500,this,[=](){
            emit backtointerface();
        });
        qDebug() << "翻金币场景点击返回按钮";
    });

    //显示当前的关卡数
    QLabel * label=new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);
    //将字体设置到控件中
    label->setFont(font);
    QString str1=QString("Level: %1").arg(this->levelindex);
    label->setText(str1);
    label->setGeometry(25,this->height()-50,200,50);

    dataConfig config;
    //初始化每个关卡的数组
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            this->gameArray[i][j] = config.m_data[this->levelindex][i][j];
        }
    }
    //胜利图片显示
    QLabel * winlabel =new QLabel;
    QPixmap temppix;
    temppix.load(":/res/LevelCompletedDialogBg.png");
    winlabel->setGeometry(0,0,temppix.width(),temppix.height());
    winlabel->setPixmap(temppix);
    winlabel->setParent(this);
    winlabel->move((this->width()-temppix.width())*0.5,-temppix.height());



    //显示金币的背景图案
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            //绘制背景图片
            QPixmap pix=QPixmap(":/res/BoardNode(1).png");
            QLabel * label=new QLabel;
            label->setGeometry(0,0,pix.width()+50,pix.height()+50);
            label->setPixmap(pix);
            label->setParent(this);
            label->move(160+i*50,250+j*50);

            //创建金币
            QString str;
            if(this->gameArray[i][j]==1)
            {
                //金币
                str = ":/res/Coin0001.png";
            }
            else
            {
                //银币
                str = ":/res/Coin0008.png";
            }
            MyCoin * coin=new MyCoin(str);
            coin->setParent(this);
            coin->move(163+i*50,275+j*50);

            //给金币属性赋值
            coin->posX=i;
            coin->posY=j;
            coin ->flag=this->gameArray[i][j];

            //将币放入数组
            coinbtn[i][j] = coin;
            //点击金币就翻面
            connect(coin,&MyCoin::clicked,[=](){
                //播放音乐
                flipsound->play();

                coin->changeFlag();
                this->gameArray[i][j]=this->gameArray[i][j]==0?1:0;

                //翻转周围币 ,延时翻转
                QTimer::singleShot(300,this,[=](){
                    if(coin->posX+1<=3)
                    {
                        coinbtn[coin->posX+1][coin->posY]->changeFlag();
                        this->gameArray[coin->posX+1][coin->posY]=this->gameArray[coin->posX+1][coin->posY]==0?1:0;
                    }
                    if(coin->posX-1>=0)
                    {
                        coinbtn[coin->posX-1][coin->posY]->changeFlag();
                        this->gameArray[coin->posX-1][coin->posY]=this->gameArray[coin->posX-1][coin->posY]==0?1:0;
                    }
                    if(coin->posY+1<=3)
                    {
                        coinbtn[coin->posX][coin->posY+1]->changeFlag();
                        this->gameArray[coin->posX][coin->posY+1]=this->gameArray[coin->posX][coin->posY+1]==0?1:0;
                    }
                    if(coin->posY-1>=0)
                    {
                        coinbtn[coin->posX][coin->posY-1]->changeFlag();
                        this->gameArray[coin->posX][coin->posY-1]=this->gameArray[coin->posX][coin->posY-1]==0?1:0;
                    }

                    //判断是否胜利
                    this->isWin=true;
                    for(int i=0;i<4;i++)
                    {
                        for(int j=0;j<4;j++)
                        {
                            if(coinbtn[i][j]->flag == false)
                            {
                                this->isWin=false;
                                break;
                            }
                        }
                    }
                    if(this->isWin == true)
                    {
                        qDebug() << "游戏胜利";
                        //添加胜利音乐
                        winsound->play();

                        //将所有胜利标志置为true
                        for(int i=0;i<4;i++)
                        {
                            for(int j=0;j<4;j++)
                            {
                                coinbtn[i][j]->isWin=true;
                            }
                        }
                        //胜利图片出现
                        QPropertyAnimation * animation=new QPropertyAnimation(winlabel,"geometry");
                        //设置时间间隔
                        animation->setDuration(1000);
                        //设置开始位置
                        animation->setStartValue(QRect(winlabel->x(),winlabel->y(),winlabel->width(),winlabel->height()));
                        //设置结束位置
                        animation->setEndValue(QRect(winlabel->x(),winlabel->y()+200,winlabel->width(),winlabel->height()));
                        //设置曲线
                        animation->setEasingCurve(QEasingCurve::OutBounce);
                        //执行
                        animation->start();
                    }
                });

            });
        }
    }
}

void PlayScence::paintEvent(QPaintEvent *)
{
    //创建背景
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //创建标题
    pix.load(":/res/Title.png");
    painter.drawPixmap((this->width()-pix.width())*0.5,30,pix.width()+30,pix.height()+50,pix);
}





