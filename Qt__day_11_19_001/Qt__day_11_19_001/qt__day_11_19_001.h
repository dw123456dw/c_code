#pragma once
#include <QPushButton>

#include <QtWidgets/QWidget>
#include "ui_qt__day_11_19_001.h"

//命名规范
//类名 首字母大写，单词与单词之间首字母也是大写
//函数名 变量名  首子母小写，单词与单词之间首字母也是大写


class Qt__day_11_19_001 : public QWidget
{
    Q_OBJECT //宏  允许类使用信号和槽的机制

public:
    Qt__day_11_19_001(QWidget *parent = nullptr);
    ~Qt__day_11_19_001();

private:
    Ui::Qt__day_11_19_001Class ui;
};
