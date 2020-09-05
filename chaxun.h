#ifndef CHAXUN_H
#define CHAXUN_H

#include <QWidget>
#include <QPushButton>

class chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit chaxun(QWidget *parent = nullptr);
    void sendSlot2 ();

signals:
    void mySignal2 ();

public slots:
private :
   QPushButton a5;
};

#endif // CHAXUN_H
