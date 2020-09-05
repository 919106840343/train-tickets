#ifndef MAIPIAO_H
#define MAIPIAO_H

#include <QWidget>
#include <QPushButton>
#include "maipiao2.h"

class maipiao : public QWidget
{
    Q_OBJECT
public:
    explicit maipiao(QWidget *parent = nullptr);
    void sendSlot1 ();
    void changewind4 ();
    void deal4 ();
signals:
    void mySignal1 ();
public slots:
private:
    QPushButton a4;
    QPushButton a7;
    maipiao2 b4;
};

#endif // MAIPIAO_H
