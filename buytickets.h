#ifndef BUYTICKETS_H
#define BUYTICKETS_H

#include <QDialog>
#include <QString>

namespace Ui {
class buytickets;
}

class buytickets : public QDialog
{
    Q_OBJECT

public:
    explicit buytickets(QWidget *parent = nullptr);
    ~buytickets();
    void sendSlot_1();
private slots:
    void on_queding_clicked();

    void on_fanhui_clicked();

signals:
    void Mysignal_1();
private:
    Ui::buytickets *ui;
    QString stratstr,endstr,xingstr,id,telenum;
    QString filename[2];
    QString chezhan [11]={"v1","v2","v3","v4","v5","v6","v7","v8","v9","v10"};
    int j=0,flag1=0,flag2=0;
};

#endif // BUYTICKETS_H
