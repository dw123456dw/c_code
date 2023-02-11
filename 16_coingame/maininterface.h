#ifndef MAININTERFACE_H
#define MAININTERFACE_H


#include <QMainWindow>
#include <QPaintEvent>
#include <mypushbutton.h>
#include <classlevel.h>
#include <QTimer>
#include <QSound>
QT_BEGIN_NAMESPACE
namespace Ui { class MainInterface; }
QT_END_NAMESPACE

class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    MainInterface(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent *);

    ClassLevel * level=NULL;
    ~MainInterface();

private:
    Ui::MainInterface *ui;
};
#endif // MAININTERFACE_H
