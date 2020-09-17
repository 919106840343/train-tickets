#include "chaxunyupiao.h"
#include "ui_chaxunyupiao.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QPushButton>
#include <QMessageBox>
#include <QString>
chaxunyupiao::chaxunyupiao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chaxunyupiao)
{
    ui->setupUi(this);
    ui->piaojian->hide();
    ui->yupiao->hide();
    ui->yu->hide();
    ui->cost->hide();
    setWindowTitle("查询余票");
    connect(ui->pushButton,&QPushButton::clicked,this,&chaxunyupiao::sendSlot_2);
}

chaxunyupiao::~chaxunyupiao()
{
    delete ui;
}

void chaxunyupiao::on_queding_clicked()
{
    for (int i=0;i<10;i++)
    {
        zuowei[i]=10;
    }
    filename[0]="../passenger-information";
    QFile file1;
    file1.setFileName("../wenjianming");
    bool isok1=file1.open(QIODevice::ReadOnly);
    if (true==isok1)
    {
        QTextStream stream1 (&file1);
        stream1.setCodec("UTF-8");
        stream1>>filename[1];
        file1.close();
    }
    if    (filename[1]!=NULL)
    {
    while (filename[0]!=filename[1])
    {
        filename[0]=filename[0]+"1";
        QFile file2;
        file2.setFileName(filename[0]);
        bool isok2=file2.open(QIODevice::ReadOnly);
        if (true==isok2)
        {
            QTextStream stream2 (&file2);
            stream2.setCodec("UTF-8");
            stream2>>stratstr>>endstr;
        i=0;
        while (i<10)
        {
            if (chezhan[i]==stratstr) a1=i;
            if (chezhan[i]==endstr)  a2=i;
            i++;
        }
        i=a1;
        while (i<a2)
        {
            if (zuowei[i]>0)
            zuowei[i]=zuowei[i]-1;
            i++;
        }
        i=0;
        file2.close();
    }
    }
    }
    stratstr1=ui->qidian->text();
    endstr1=ui->zhongdian->text();
    i=0;
    while (i<10) {
        if (chezhan[i]==stratstr1) flag1=1;
        if (chezhan[i]==endstr1) flag2=1;
        i++;
    }
    i=0;
    if (stratstr1>=endstr1)
        QMessageBox::about(this,"错误","起点站和终点站信息错误");
    if (flag1==0&&flag2==1)
        QMessageBox::about(this,"错误","对不起，没有该起点站");
    if (flag1==1&&flag2==0)
        QMessageBox::about(this,"错误","对不起，没有该终点站");
    if (flag1==0&&flag2==0)
        QMessageBox::about(this,"错误","对不起，没有该起点站和终点站");
    if (stratstr1=="")
        QMessageBox::about(this,"错误","对不起，车站不能为空");
    if (endstr1=="")
        QMessageBox::about(this,"错误","对不起，车站不能为空");
    if (flag1==1&&flag2==1&&stratstr1!=""&&endstr1!=""&&stratstr1<endstr1)
    {
    while (i<10)
    {
        if (stratstr1==chezhan[i]) a3=i;
        if (endstr1==chezhan[i]) a4=i;
        i++;
    }
    min1=zuowei[a3];
    i=a3;
    while (i<=a4)
    {
        if (zuowei[i]<=min1) min1=zuowei[i];
        i++;
    }
    QFile file3;
    file3.setFileName("../yupiao");
    bool isok3 = file3.open(QIODevice::WriteOnly);
    if (true==isok3)
    {
        QTextStream stream3 (&file3);
        stream3.setCodec("UTF-8");
        stream3<<zuowei[0]<<" "<<zuowei[1]<<" "<<zuowei[2]<<" "<<zuowei[3]
        <<" "<<zuowei[4]<<" "<<zuowei[5]<<" "<<zuowei[6]<<" "<<zuowei[7]
        <<" "<<zuowei[8]<<" "<<zuowei[9];
        file3.close();
    }
    i=a3;
    while (i<a4)
    {
        cost1=cost1+distance1[i];
        i++;
    }
    i=0;
    QString min11=QString::number(min1,10);
    QString cost11=QString::number(cost1,10);
    ui->yupiao->show();
    ui->piaojian->show();
    ui->yu->show();
    ui->cost->show();
    ui->yupiao->setText(min11);
    ui->piaojian->setText(cost11);
}
    flag1=0;
    flag2=0;
    cost1=0;
}
void chaxunyupiao::sendSlot_2()
{
    emit Mysignal_2();
    ui->qidian->setText("");
    ui->zhongdian->setText("");
    ui->piaojian->hide();
    ui->yupiao->hide();
    ui->yu->hide();
    ui->cost->hide();
}
