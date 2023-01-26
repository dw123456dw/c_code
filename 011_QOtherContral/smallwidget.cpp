#include "smallwidget.h"
#include "ui_smallwidget.h"

smallwidget::smallwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallwidget)
{
    ui->setupUi(this);
    //Qspinbox移动Qslider跟着移动
    void(QSpinBox::* spingal)(int)=&QSpinBox::valueChanged;//用指针是因为重载了编译器认不出来
    connect(ui->spinBox,spingal,ui->horizontalSlider,&QSlider::setValue);
    //Qslider滑动Qspinbox数字跟着动
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
}
//设置数字
void smallwidget::setnum(int num)
{
    ui->spinBox->setValue(num);
}
//获取数字
int  smallwidget::getnum()
{
    return ui->spinBox->value();
}





smallwidget::~smallwidget()
{
    delete ui;
}
