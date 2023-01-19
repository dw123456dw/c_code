#include "mainwindow.h"
#include <QMenuBar>      //菜单
#include <QToolBar>      //工具栏
#include <QPushButton>   //按钮
#include <QWidget>       //窗口
#include <QStatusBar>    //状态栏
#include <QLabel>        //工具控件
#include <QDockWidget>   //铆接
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //重置窗口大小
    resize(1400,1200);
    //创建一个菜单栏,菜单栏只能有一个
    QMenuBar* bar=menuBar();
    //将菜单栏添加到窗口
    this->setMenuBar(bar);
    setMenuBar(bar);
    QMenu* filemenu = bar->addMenu("文件");
    QMenu* editmenu = bar->addMenu("编辑");

    QAction* newaction = filemenu->addAction("新建");
    //添加分割线
    filemenu->addSeparator();
    QAction* openaction = filemenu->addAction("打开");

    //工具栏可以有多个
    QToolBar* toolbar=new QToolBar(this);
    //设置默认停靠位置
    addToolBar(Qt::LeftToolBarArea,toolbar);
    //设置只能在哪边停靠
    toolbar->setAllowedAreas(Qt::LeftToolBarArea);
    //设置不可拖动
    toolbar->setFloatable(false);
    //设置总开关
    toolbar->setMovable(false);

    //工具栏中添加内容
    //toolbar->addAction("新建");
    toolbar->addAction(newaction);
    toolbar->addSeparator();
    //toolbar->addAction("打开");
    toolbar->addAction(openaction);

    QPushButton* btn=new QPushButton("新窗口",this);
    toolbar->addWidget(btn);

    QWidget* one=new QWidget;
    connect(btn,&QPushButton::clicked,one,[=](){
        one->show();
    });

    //状态栏只有一个
    QStatusBar* stbar=statusBar();
    //设置状态栏
    setStatusBar(stbar);
    //用一个工具控件
    QLabel* label=new QLabel("提示信息",this);
    //把工具控件加入到工具栏
    stbar->addWidget(label);

    QLabel* label2=new QLabel("右侧提示信息",this);
    stbar->addPermanentWidget(label2);
    //铆接部件（浮动窗口）可以有多个类似按钮
    QDockWidget* dock=new QDockWidget("浮动",this);
    //把铆接加入
    addDockWidget(Qt::BottomDockWidgetArea,dock);
    //设置停靠位置
    dock->setAllowedAreas(Qt::TopDockWidgetArea|Qt::LeftDockWidgetArea);

    //设置核心部件   只能有一个
    QTextEdit* edit=new QTextEdit(this);
    setCentralWidget(edit);
}

MainWindow::~MainWindow()
{

}

