#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "ui_widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class mywidget : public QWidget
{
    Q_OBJECT
public:
    explicit mywidget(QWidget *parent = nullptr);

private:
    Ui::Widget *ui;

signals:
public slots:


};

#endif // MYWIDGET_H
