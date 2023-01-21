#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建按钮，弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //对话框分类
        //模态对话框    非模态对话框(可以对其他窗口操作)有组设功能
//        QDialog dil(this);
//        dil.resize(200,100);
//        dil.exec();


//        qDebug() << "模态对话框弹出来了";




//        //非模态对话框的创建
//        QDialog *dil2=new QDialog(this);
//        dil2->resize(400,200);
//        //为了防止有人一直开关对话框导致一直new内存崩溃
//        dil2->setAttribute(Qt::WA_DeleteOnClose);
//        qDebug() << "非模态对话框使用" ;
//        dil2->show();
//        //一闪而过因为是匿名函数一下就回消失，因此应该创建在堆区
//        //dil2.show();



        //消息对话框
        //错误对话框
        //QMessageBox::critical(this,"critical","出现未知错误");

        //信息对话框
        //QMessageBox::information(this,"info","提示信息");

        //问题对话框
//        if(QMessageBox::Open==QMessageBox::question(this,"question","问题",QMessageBox::Open|QMessageBox::Close,QMessageBox::Close))
//        {
//            qDebug() << "已保存";
//        }
//        else
//        {
//            qDebug() << "已关闭";
//        }

        //文件对话框
        //返回值是选取的路径
        QFileDialog::getOpenFileName(this,"打开","C:\\Users\\俺选吕小布\\Desktop","(*.docx)");


    });

    //点击打开就开辟一个窗口
    connect(ui->actionopen,&QAction::triggered,[=](){
        QWidget* newwindow=new QWidget;
        newwindow->show();
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}

