#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::trect()
{
    qDebug() << "请老师吃饭";
}

void Student::trect(QString foodname)
{
    qDebug() << "请老师吃" <<foodname.toUtf8().data();
}
