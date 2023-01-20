#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //只能在本地文件中找到资源
    //ui->actionnew->setIcon(QIcon("C:/Users/俺选吕小布/Desktop/书/1.jpg"));
    //ui->actionopen->setIcon(QIcon("C:/Users/俺选吕小布/Desktop/书/2.jpg"));
    //我们应该将资源和程序打包在一起
    ui->actionnew->setIcon(QIcon(":/new/prefix2/photo/1.jpg"));
    ui->actionopen->setIcon(QIcon(":/new/prefix2/photo/2.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

