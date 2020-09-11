#include "tuipiao.h"
#include "ui_tuipiao.h"
#include <QPushButton>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

tuipiao::tuipiao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tuipiao)
{
    ui->setupUi(this);
    connect(ui->fanhui,&QPushButton::clicked,this,&tuipiao::sendslot4);
}

tuipiao::~tuipiao()
{
    delete ui;
}
void tuipiao::sendslot4()
{
    emit mysignal4();
}

void tuipiao::on_queding_clicked()
{
    idstr1=ui->shenfenzheng->text();
    xingmingstr1=ui->xingming->text();
    if (idstr1=="")
        QMessageBox::about(this,"错误","身份证不能为空！");
    if (xingmingstr1=="")
        QMessageBox::about(this,"错误","姓名不能为空");
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
            stream2>>startstr>>endstr>>idstr>>xingmingstr>>telenumstr;
            file2.close();
        }
        if (idstr==idstr1)
        {
            flag=1;
            filename1=filename[0];
            break;
        }
    }
    if (flag==1)
    {
    QFile file3;
    file3.remove(filename1);
    QMessageBox::about(this,"退票","已成功退票");
    }
    else QMessageBox::about(this,"错误","无该乘客信息，无法退票");
}
