#include "tui.h"


tui::tui(QWidget *parent) : QWidget(parent)
{
   this->setWindowTitle("退票");
   a6.setParent(this);
   a6.setText("返回");
   connect(&a6,&QPushButton::clicked,this,tui::sendSlot3);
    resize(400,400);
}
void tui::sendSlot3() {
    emit mySignal3();
}
