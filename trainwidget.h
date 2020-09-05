#ifndef TRAINWIDGET_H
#define TRAINWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "maipiao.h"
#include "chaxun.h"
#include "tui.h"

class trainWidget : public QWidget
{
    Q_OBJECT

public:
    trainWidget(QWidget *parent = 0);
    void changewind1 ();
    void deal1();
    void changewind2 ();
    void deal2();
    void changewind3 ();
    void deal3();
    ~trainWidget();
private :
    QPushButton a1;
    QPushButton a2;
    QPushButton a3;
    maipiao b1;
    chaxun b2;
    tui b3;
};


#endif // TRAINWIDGET_H
