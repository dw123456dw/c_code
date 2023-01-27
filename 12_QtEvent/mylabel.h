#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit mylabel(QWidget *parent = nullptr);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *);
    virtual void mouseMoveEvent(QMouseEvent *ev);
    virtual void mousePressEvent(QMouseEvent *ev);
    virtual void mouseReleaseEvent(QMouseEvent *ev);

    //通过Event事件拦截一些信息 （鼠标移动）
    bool event(QEvent *e);
signals:

};

#endif // MYLABEL_H
