#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->radioButton_2->setChecked(true);
    connect(ui->btnman,&QRadioButton::clicked,[=](){
        qDebug() << "选中男人";
    });

//    connect(ui->checkBox_4,&QCheckBox::stateChanged,[](int s){
//        qDebug() << s;
//    });

    connect(ui->checkBox_4,&QCheckBox::clicked,[](){
        qDebug() << 1;
    });

//    QListWidgetItem* item1=new QListWidgetItem("床前明月光");
//    ui->listWidget->addItem(item1);

//    item1->setTextAlignment(Qt::AlignHCenter);

    QStringList list;
    list << "床前明月光" << "疑是地上霜" << "举头望明月" << "低头思故乡" ;
    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}

