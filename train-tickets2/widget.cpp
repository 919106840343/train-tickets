#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QTextStream>
#include <QHostAddress>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
   tcpSocket = new QTcpSocket(this);
    connect(tcpSocket,&QTcpSocket::connected,
    [=]()
    {
        QMessageBox::about(this,"connect","成功与服务器连接");
    }
            );
    setWindowTitle("火车票模拟购票系统");
    connect(&w1,&buytickets::Mysignal_1,this,&Widget::deal1);
    connect(&w3,&chaxunyupiao::Mysignal_2,this,&Widget::deal2);
    connect(&w2,&chuxungoupiaoxinxi::Mysignal_3,this,&Widget::deal3);
    connect(&w4,&tuipiao::mysignal4,this,&Widget::deal4);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_mai_clicked()
{
    this->hide();
    w1.show();
}

void Widget::on_cha_clicked()
{
    this->hide();
    w2.show();
}
void Widget::deal1()
{
    w1.hide();
    this->show();
}


void Widget::on_yu_clicked()
{
    this->hide();
    w3.show();
}
void Widget::deal2()
{
    this->show();
    w3.hide();
}
void Widget::deal3()
{
    this->show();
    w2.hide();
}

void Widget::on_tui_clicked()
{
    this->hide();
    w4.show();
}
void Widget::deal4()
{
    this->show();
    w4.hide();
}

void Widget::on_connect_clicked()
{
    qint16 port = 8888;
    QString ip = "192.168.43.192";
    tcpSocket->connectToHost(QHostAddress(ip),port);
}
