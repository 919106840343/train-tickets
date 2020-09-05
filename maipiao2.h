#ifndef MAIPIAO2_H
#define MAIPIAO2_H

#include <QWidget>
#include <QPushButton>

class maipiao2 : public QWidget
{
    Q_OBJECT
public:
    explicit maipiao2(QWidget *parent = nullptr);
    void sendSlot4 ();
signals:
    void mySignal4 ();
public slots:

private :
    QPushButton a8;
};

#endif // MAIPIAO2_H
