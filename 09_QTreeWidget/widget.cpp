#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");
    //创建根节点
    QTreeWidgetItem* up=new QTreeWidgetItem(QStringList() << "上单");
    QTreeWidgetItem* center=new QTreeWidgetItem(QStringList() << "中路");
    QTreeWidgetItem* down=new QTreeWidgetItem(QStringList() << "下路");
    //添加根节点
    ui->treeWidget->addTopLevelItem(up);
    ui->treeWidget->addTopLevelItem(center);
    ui->treeWidget->addTopLevelItem(down);
    //创建子节点
    QTreeWidgetItem *u1=new QTreeWidgetItem(QStringList() << "吕布" << "抗压能力贼其出众");
    QTreeWidgetItem *c1=new QTreeWidgetItem(QStringList() << "貂蝉" << "到处横条就是牛逼");
    QTreeWidgetItem *d1=new QTreeWidgetItem(QStringList() << "守约" <<"手长的一批也是巨jb恶心");
    //添加子节点
    up->addChild(u1);
    center->addChild(c1);
    down->addChild(d1);
}

Widget::~Widget()
{
    delete ui;
}

