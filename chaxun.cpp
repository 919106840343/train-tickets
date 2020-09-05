#include "chaxun.h"

chaxun::chaxun(QWidget *parent) : QWidget(parent)
{
   this->setWindowTitle("查询购票信息");
   a5.setParent(this);
   a5.setText("返回");
   connect(&a5,&QPushButton::clicked,this,&chaxun::sendSlot2);
   resize(400,400);
}
void chaxun::sendSlot2(){
    emit mySignal2();
}
