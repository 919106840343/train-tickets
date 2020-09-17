#ifndef CHAXUNYUPIAO_H
#define CHAXUNYUPIAO_H

#include <QDialog>
#include <QString>

namespace Ui {
class chaxunyupiao;
}

class chaxunyupiao : public QDialog
{
    Q_OBJECT

public:
    explicit chaxunyupiao(QWidget *parent = nullptr);
    ~chaxunyupiao();
    void sendSlot_2();

private slots:
    void on_queding_clicked();
signals:
    void Mysignal_2();
private:
    Ui::chaxunyupiao *ui;
    QString chezhan[11]={"v1","v2","v3","v4","v5","v6","v7","v8","v9","v10"};
    int zuowei[10]={10,10,10,10,10,10,10,10,10,10};
    int distance1 [9]={30,40,50,60,70,60,50,40,30};
    QString stratstr,endstr,stratstr1,endstr1;
    QString filename[2];
    int i=0,a1,a2,a3,a4,min1,cost1=0,flag1=0,flag2=0;
};

#endif // CHAXUNYUPIAO_H
