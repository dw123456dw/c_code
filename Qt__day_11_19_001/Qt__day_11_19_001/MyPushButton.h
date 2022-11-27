#pragma once
#include <iostream>
#include <QPushButton>
#include <QDebug>

class MyPushButton : public QPushButton
{
    Q_OBJECT //宏  允许类使用信号和槽的机制
public:
    explicit MyPushButton(QWidget* parent = nullptr);

    ~MyPushButton();

signals:
public slots:
};
