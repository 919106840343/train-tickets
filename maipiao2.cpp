#include "maipiao2.h"

maipiao2::maipiao2(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("买票");
    a8.setText("返回");
    a8.setParent(this);
   connect(&a8,&QPushButton::clicked,this,maipiao2::sendSlot4);
}
void maipiao2::sendSlot4() {
    emit mySignal4();
}
