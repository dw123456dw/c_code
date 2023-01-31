#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString path = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\俺选吕小布\\Desktop");

        ui->lineEdit->setText(path);
        QFile file(path);
        file.open(QIODevice::ReadOnly);

        QByteArray arr = file.readAll();

        ui->textEdit->setText(arr);

        file.close();

//        file.open(QIODevice::Append);
//        file.write("啊啊啊啊啊啊啊啊啊");
//        file.close();
        QFileInfo info(path);
        qDebug() << "大小" <<info.size() << "后缀" << info.suffix() << "文件名" << info.fileName();
        qDebug() << "创建日期" << info.created().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "最后一次修改日期" << info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
    });

}

Widget::~Widget()
{
    delete ui;
}

