#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>
mylabel::mylabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标追踪
    setMouseTracking(true);
}
void mylabel::enterEvent(QEvent *event)
{
    qDebug() << "鼠标进入";
}
void mylabel::leaveEvent(QEvent *)
{
    qDebug() << "鼠标离开";
}
void mylabel::mouseMoveEvent(QMouseEvent *ev)
{
//    if(ev->buttons() & 1)
//    {
//            qDebug() << "鼠标移动" << ev->x() << "" << ev->y();
//    }
    qDebug() << "鼠标移动" << ev->x() << "" << ev->y();

}
void mylabel::mousePressEvent(QMouseEvent *ev)
{
//        if(ev->button()==Qt::LeftButton) //1
//        {
//            qDebug() << "鼠标按下" << ev->x() << "" << ev->y();
//        }
        qDebug() << "鼠标按下" << ev->x() << "" << ev->y();
}
void mylabel::mouseReleaseEvent(QMouseEvent *ev)
{
        qDebug() << "鼠标松开";
}
bool mylabel::event(QEvent *e)
{
    if(e->type()==QEvent::MouseButtonPress)
    {
        QMouseEvent* ev=static_cast<QMouseEvent*>(e);
        qDebug() << "在消息拦截中鼠标按下" << ev->x() << "" << ev->y();
        return true;
    }
    return QLabel::event(e);
}
