#ifndef TUIPIAO_H
#define TUIPIAO_H

#include <QDialog>
#include <QString>

namespace Ui {
class tuipiao;
}

class tuipiao : public QDialog
{
    Q_OBJECT

public:
    explicit tuipiao(QWidget *parent = nullptr);
    ~tuipiao();
    void sendslot4 ();

signals:
    void mysignal4 ();

private slots:
    void on_queding_clicked();

private:
    Ui::tuipiao *ui;
    QString startstr,endstr,idstr,xingmingstr,telenumstr;
    QString idstr1,xingmingstr1;
    QString filename[2],filename1;
    int flag=0;
};

#endif // TUIPIAO_H
