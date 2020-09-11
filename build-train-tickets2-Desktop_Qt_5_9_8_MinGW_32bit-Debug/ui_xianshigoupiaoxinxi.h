/********************************************************************************
** Form generated from reading UI file 'xianshigoupiaoxinxi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIANSHIGOUPIAOXINXI_H
#define UI_XIANSHIGOUPIAOXINXI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_xianshigoupiaoxinxi
{
public:
    QLabel *qidianzahn;
    QLabel *zhongdianzhan;
    QLabel *shenfenzheng;
    QLabel *xingming;
    QLabel *piaojian;
    QLabel *yujidaodashijian;
    QLabel *dianhuahaoma;

    void setupUi(QDialog *xianshigoupiaoxinxi)
    {
        if (xianshigoupiaoxinxi->objectName().isEmpty())
            xianshigoupiaoxinxi->setObjectName(QStringLiteral("xianshigoupiaoxinxi"));
        xianshigoupiaoxinxi->resize(452, 363);
        qidianzahn = new QLabel(xianshigoupiaoxinxi);
        qidianzahn->setObjectName(QStringLiteral("qidianzahn"));
        qidianzahn->setGeometry(QRect(9, 9, 36, 16));
        zhongdianzhan = new QLabel(xianshigoupiaoxinxi);
        zhongdianzhan->setObjectName(QStringLiteral("zhongdianzhan"));
        zhongdianzhan->setGeometry(QRect(9, 59, 36, 16));
        shenfenzheng = new QLabel(xianshigoupiaoxinxi);
        shenfenzheng->setObjectName(QStringLiteral("shenfenzheng"));
        shenfenzheng->setGeometry(QRect(9, 109, 36, 16));
        xingming = new QLabel(xianshigoupiaoxinxi);
        xingming->setObjectName(QStringLiteral("xingming"));
        xingming->setGeometry(QRect(9, 159, 24, 16));
        piaojian = new QLabel(xianshigoupiaoxinxi);
        piaojian->setObjectName(QStringLiteral("piaojian"));
        piaojian->setGeometry(QRect(9, 260, 24, 16));
        yujidaodashijian = new QLabel(xianshigoupiaoxinxi);
        yujidaodashijian->setObjectName(QStringLiteral("yujidaodashijian"));
        yujidaodashijian->setGeometry(QRect(9, 310, 72, 16));
        dianhuahaoma = new QLabel(xianshigoupiaoxinxi);
        dianhuahaoma->setObjectName(QStringLiteral("dianhuahaoma"));
        dianhuahaoma->setGeometry(QRect(9, 210, 48, 16));

        retranslateUi(xianshigoupiaoxinxi);

        QMetaObject::connectSlotsByName(xianshigoupiaoxinxi);
    } // setupUi

    void retranslateUi(QDialog *xianshigoupiaoxinxi)
    {
        xianshigoupiaoxinxi->setWindowTitle(QApplication::translate("xianshigoupiaoxinxi", "Dialog", Q_NULLPTR));
        qidianzahn->setText(QApplication::translate("xianshigoupiaoxinxi", "\350\265\267\347\202\271\347\253\231", Q_NULLPTR));
        zhongdianzhan->setText(QApplication::translate("xianshigoupiaoxinxi", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        shenfenzheng->setText(QApplication::translate("xianshigoupiaoxinxi", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        xingming->setText(QApplication::translate("xianshigoupiaoxinxi", "\345\247\223\345\220\215", Q_NULLPTR));
        piaojian->setText(QApplication::translate("xianshigoupiaoxinxi", "\347\245\250\344\273\267", Q_NULLPTR));
        yujidaodashijian->setText(QApplication::translate("xianshigoupiaoxinxi", "\351\242\204\350\256\241\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        dianhuahaoma->setText(QApplication::translate("xianshigoupiaoxinxi", "\347\224\265\350\257\235\345\217\267\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class xianshigoupiaoxinxi: public Ui_xianshigoupiaoxinxi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIANSHIGOUPIAOXINXI_H
