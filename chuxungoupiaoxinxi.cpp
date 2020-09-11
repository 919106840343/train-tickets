#include "chuxungoupiaoxinxi.h"
#include "ui_chuxungoupiaoxinxi.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QPushButton>
chuxungoupiaoxinxi::chuxungoupiaoxinxi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chuxungoupiaoxinxi)
{

    ui->setupUi(this);
    ui->qidianzhan->hide();
    ui->piaojia->hide();
    ui->xingming->hide();
    ui->dianhuahaoma->hide();
    ui->shenfenzheng->hide();
    ui->zhongdianzhan->hide();
    ui->yujidaodashijian->hide();
    connect(ui->fanhui,&QPushButton::clicked,this,&chuxungoupiaoxinxi::sendSlot_3);
}

chuxungoupiaoxinxi::~chuxungoupiaoxinxi()
{
    delete ui;
}

void chuxungoupiaoxinxi::on_t_clicked()
{
    idstr=ui->shen->text();
    xingmingstr=ui->xing->text();
    QFile file4;
    file4.setFileName("../wenjianming");
    bool isok2=file4.open(QIODevice::ReadOnly);
    if(true==isok2)
    {
        QTextStream stream1 (&file4);
        stream1.setCodec("UTF-8");
        stream1>>filename[0];
        file4.close();
    }
    filename[1]="../passenger-information";
    while (filename[0]!=filename[1])
    {
        filename[1]=filename[1]+"1";
        QFile file5;
        file5.setFileName(filename[1]);
        bool isok3=file5.open(QIODevice::ReadOnly);
        if (true==isok3)
        {
            QTextStream stream3 (&file5);
            stream3.setCodec("UTF-8");
            stream3>>stratstr>>endstr>>idstr1>>xingmingstr2>>telenumstr;
            qDebug()<<stratstr;
            file5.close();
        }
        if (idstr==idstr1)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {   ui->qidianzhan->show();
        ui->xingming->show();
        ui->dianhuahaoma->show();
        ui->shenfenzheng->show();
        ui->zhongdianzhan->show();
        ui->qidianzhan->setText(stratstr);
        ui->zhongdianzhan->setText(endstr);
        ui->shenfenzheng->setText(idstr1);
        ui->xingming->setText(xingmingstr2);
        ui->dianhuahaoma->setText(telenumstr);
    }
    else  QMessageBox::about(this,"错误","对不起，没有该乘客信息");
}
void chuxungoupiaoxinxi::sendSlot_3()
{
    emit Mysignal_3();
}
