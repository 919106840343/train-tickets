#ifndef CHUXUNGOUPIAOXINXI_H
#define CHUXUNGOUPIAOXINXI_H

#include <QDialog>
#include <QString>

namespace Ui {
class chuxungoupiaoxinxi;
}

class chuxungoupiaoxinxi : public QDialog
{
    Q_OBJECT

public:
    explicit chuxungoupiaoxinxi(QWidget *parent = nullptr);
    ~chuxungoupiaoxinxi();
    void sendSlot_3();
private slots:
    void on_pushButton_clicked();

    void on_t_clicked();
signals:
    void Mysignal_3();
private:
    Ui::chuxungoupiaoxinxi *ui;
    QString idstr,xingmingstr;
    QString idstr1,xingmingstr2,telenumstr,stratstr,endstr,cost;
    QString filename[2];
    int flag=0;
};

#endif // CHUXUNGOUPIAOXINXI_H
