#include "trainwidget.h"

trainWidget::trainWidget(QWidget *parent)
    : QWidget(parent)
{
     a1.setParent(this);
     a1.setText("买票");
     a1.move(400,400);
     a2.setParent(this);
     a2.setText("查询购票信息");
     a2.move(400,500);
     a3.setParent(this);
     a3.setText("退票");
     a3.move(400,600);
     connect(&a1,&QPushButton::released,this,&trainWidget::changewind1);
     connect(&b1,&maipiao::mySignal1,this,&trainWidget::deal1);
     resize(400,400);
     connect(&a2,&QPushButton::released,this,&trainWidget::changewind2);
     connect(&b2,&chaxun::mySignal2,this,&trainWidget::deal2);
     connect(&a3,&QPushButton::released,this,&trainWidget::changewind3);
     connect(&b3,&tui::mySignal3,this,&trainWidget::deal3);

}
void trainWidget::changewind1(){
    b1.show();
    this->hide();
}
void trainWidget::deal1(){
    this->show();
    b1.hide();
}
void trainWidget::changewind2(){
    b2.show();
    this->hide();
}
void trainWidget::deal2(){
    b2.hide();
    this->show();
}
void trainWidget::changewind3(){
    this->hide();
    b3.show();
}
void trainWidget::deal3() {
    this->show();
    b3.hide();
}
trainWidget::~trainWidget()
{

}
