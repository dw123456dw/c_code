#include "mywidget.h"

mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    ,ui(new Ui::Widget)
{
    this->show();
    this->setWindowTitle("第二个窗口");
}
