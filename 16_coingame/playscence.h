#ifndef PLAYSCENCE_H
#define PLAYSCENCE_H

#include <QMainWindow>
#include <QDebug>
#include <QMenuBar>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QLabel>
#include "mycoin.h"
#include "dataconfig.h"
#include <QPropertyAnimation>
#include <QSound>
class PlayScence : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScence(QWidget *parent = nullptr);
    PlayScence(int levelindex);
    int levelindex;

    void paintEvent(QPaintEvent *);

    int gameArray[4][4];  //维护每关的数据

    MyCoin * coinbtn[4][4];

    bool isWin;
signals:
    void backtointerface();

};

#endif // PLAYSCENCE_H
