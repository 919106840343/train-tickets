#ifndef WIDGET_H
#define WIDGET_H
#include "buytickets.h"
#include "chuxungoupiaoxinxi.h"
#include "chaxunyupiao.h"
#include "tuipiao.h"
#include <QTcpServer>
#include <QTcpSocket>

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void deal1 ();
    void deal2();
    void deal3();
    void deal4();
private slots:
    void on_mai_clicked();

    void on_cha_clicked();

    void on_yu_clicked();

    void on_tui_clicked();

    void on_connect_clicked();

private:
    Ui::Widget *ui;
    buytickets w1;
    chuxungoupiaoxinxi w2;
    chaxunyupiao w3;
    tuipiao w4;
    QTcpSocket *tcpSocket;
};

#endif // WIDGET_H
