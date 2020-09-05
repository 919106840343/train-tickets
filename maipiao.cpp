#include "maipiao.h"

maipiao::maipiao(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("查询余票");
    a4.setParent(this);
    a4.setText("返回");
    a4.move(200,200);
    a7.setParent(this);
    a7.setText("继续买票");
    connect(&a4,&QPushButton::clicked,this,&maipiao::sendSlot1);
    resize(400,400);
    connect(&a7,&QPushButton::released,this,&maipiao::changewind4);
    connect(&b4,&maipiao2::mySignal4,this,&maipiao::deal4);

}

void maipiao::sendSlot1 () {
    emit mySignal1();
}
void maipiao::changewind4() {
    this->hide();
    b4.show();
}
void maipiao::deal4() {
    this->show();
    b4.hide();
}
