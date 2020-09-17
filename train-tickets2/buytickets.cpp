#include "buytickets.h"
#include "ui_buytickets.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPushButton>
#include <QString>
#include <QDebug>


buytickets::buytickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buytickets)
{
    ui->setupUi(this);
    setWindowTitle("买票");
    connect(ui->fanhui,&QPushButton::clicked,this,&buytickets::sendSlot_1);
    ui->yujidadao->hide();
    ui->piaojia->hide();
}

buytickets::~buytickets()
{
    delete ui;
}

void buytickets::on_queding_clicked()
{
    j=0;
    while (j<10)
    {
        zuowei[j]=10;
        j++;
    }
    j=0;
    stratstr=ui->qi->text();
    endstr=ui->zhong->text();
    xingstr=ui->xing->text();
    id=ui->sheng->text();
    telenum=ui->dian->text();
    while (j<10)
    {
        if (stratstr==chezhan[j]) flag1=1;
        if (endstr==chezhan[j]) flag2=1;
        j++;
    }
    if (flag1==1&&flag2==0)
        QMessageBox::about(this,"错误","很抱歉，没有此终点站，请重新输入");
    if (flag1==0&&flag2==1)
        QMessageBox::about(this,"错误","很抱歉，没有此起点站，请重新输入");
    if (flag1==0&&flag2==0)
        QMessageBox::about(this,"错误","很抱歉，没有此起点站和终点站，请重新输入");
    if (id=="")
        QMessageBox::about(this,"错误","身份证不能为空！");
    if (xingstr=="")
        QMessageBox::about(this,"错误","姓名不能为空！");
    if (telenum=="")
        QMessageBox::about(this,"错误","电话号码不能为空");
    if (stratstr>=endstr)
        QMessageBox::about(this,"错误","起点站和终点站信息错误");
    if (flag1==1&&flag2==1&&id!=""&&xingstr!=""&&telenum!=""&&stratstr<endstr)
    {
      j=0;
    while (j<10)
    {
    if (stratstr==chezhan[j]) a1=j;
    if (endstr==chezhan[j]) a2=j;
    j++;
    }
    j=a1;
    while (j<a2)
    {
        cost=cost+distance1[j];
        j++;
    }
    QFile file5;
    file5.setFileName("../yupiao");
    bool isok5 = file5.open(QIODevice::ReadOnly);
    if (true==isok5)
    {
        QTextStream stream5 (&file5);
        stream5.setCodec("UTF-8");
        stream5>>zuowei[0]>>zuowei[1]>>zuowei[2]>>zuowei[3]>>zuowei[4]>>zuowei[5]>>zuowei[6]
                >>zuowei[7]>>zuowei[8]>>zuowei[9];
        j=a1;
        min1=zuowei[a1];
        while (j<=a2)
        {
            if (zuowei[j]<=min1) min1=zuowei[j];
            j++;
        }
        j=0;
    if (min1==0)
        QMessageBox::about(this,"余票为0","对不起，余票为0，无法买票");
    else
    {
    j=0;
    cost1=QString::number(cost,10);
    QFile file3;
    file3.setFileName("../wenjianming");
    bool isOK2=file3.open(QIODevice::ReadOnly);
    if (true==isOK2)
    {
        QTextStream stream3 (&file3);
        stream3.setCodec("UTF-8");
        stream3>>filename[0];
        file3.close();
    }
    else filename[0]="../passenger-information";

    QFile file1;
    filename[1]=filename[0]+"1";
    file1.setFileName(filename[1]);
    bool isOk=file1.open(QIODevice::WriteOnly);
    if (true==isOk)
    {
        QTextStream stream1 (&file1);
        stream1.setCodec("UTF-8");
        stream1<<stratstr<<" "<<endstr<<" "<<id<<" "<<xingstr<<" "<<telenum<<" "<<cost1;
        file1.close();
    }
    QFile file2;
    file2.setFileName("../wenjianming");
    bool isOK1=file2.open(QIODevice::WriteOnly);
    if (true==isOK1)
    {
        QTextStream stream2 (&file2);
        stream2.setCodec("UTF-8");
        stream2<<filename[1];
        file2.close();
    }
    QMessageBox::about(this,"成功买票","您已成功买票，谢谢");
    ui->piaojia->show();
    ui->piaojia->setText(cost1);
    }
    file5.close();
    }
    else
    QMessageBox::about(this,"error","请先查询余票，谢谢");
    }
    min1=10;
    flag1=0;
    flag2=0;
    j=0;
    cost=0;
    ui->qi->setText("");
    ui->zhong->setText("");
    ui->dian->setText("");
    ui->xing->setText("");
    ui->sheng->setText("");
    ui->piaojia->setText("");
}
void buytickets::sendSlot_1()
{
    emit Mysignal_1();
}
