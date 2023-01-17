#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //早期的槽函数必须写在这下面，高级QT版本可以写在public下
    //返回值 void 需要声明，也需要实现
    //可以有参数，可以发生重载
    void trect();

    void trect(QString foodname);
};

#endif // STUDENT_H
