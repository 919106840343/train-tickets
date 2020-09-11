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
    connect(ui->fanhui,&QPushButton::clicked,this,&buytickets::sendSlot_1);
}

buytickets::~buytickets()
{
    delete ui;
}

void buytickets::on_queding_clicked()
{
    stratstr=ui->qi->text();
    endstr=ui->zhong->text();
    xingstr=ui->xing->text();
    id=ui->sheng->text();
    telenum=ui->dian->text();
    qDebug()<<stratstr<<endstr<<xingstr<<id<<telenum;
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
    if (flag1==1&&flag2==1&&id!=""&&xingstr!=""&&telenum!="")
    {
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
        stream1<<stratstr<<" "<<endstr<<" "<<id<<" "<<xingstr<<" "<<telenum;
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
    }
    flag1=0;
    flag2=0;
    j=0;
}
void buytickets::sendSlot_1()
{
    emit Mysignal_1();
}
