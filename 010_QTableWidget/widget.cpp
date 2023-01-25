#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置列数
    ui->tableWidget->setColumnCount(3);
    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名" <<"性别"<<"年龄");
    //设置行数
    ui->tableWidget->setRowCount(5);
    //设置正文

    QList<QString> name;
    name <<"丁伟" << "张飞" << "关羽" << "刘备" << "赵云" ;
    QList<QString> sex;
    sex << "男" <<"男"<< "男" << "男" << "男" ;
    //QTableWidgetItem* l1=new QTableWidgetItem("丁伟");

    for(int i=0;i<5;i++)
    {
        int col=0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(name[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(sex[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i+21)));
    }
}

Widget::~Widget()
{
    delete ui;
}

