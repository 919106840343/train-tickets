/********************************************************************************
** Form generated from reading UI file 'chuxungoupiaoxinxi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHUXUNGOUPIAOXINXI_H
#define UI_CHUXUNGOUPIAOXINXI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chuxungoupiaoxinxi
{
public:
    QGridLayout *gridLayout;
    QLineEdit *shen;
    QLabel *label;
    QLabel *v;
    QLineEdit *xing;
    QLabel *xingming;
    QLabel *dianhuahaoma;
    QLabel *piaojia;
    QPushButton *t;
    QLabel *qidianzhan;
    QLabel *r_2;
    QLabel *zhongdianzhan;
    QLabel *shenfenzheng;
    QLabel *yujidaodashijian;
    QPushButton *fanhui;

    void setupUi(QDialog *chuxungoupiaoxinxi)
    {
        if (chuxungoupiaoxinxi->objectName().isEmpty())
            chuxungoupiaoxinxi->setObjectName(QStringLiteral("chuxungoupiaoxinxi"));
        chuxungoupiaoxinxi->resize(543, 447);
        gridLayout = new QGridLayout(chuxungoupiaoxinxi);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        shen = new QLineEdit(chuxungoupiaoxinxi);
        shen->setObjectName(QStringLiteral("shen"));

        gridLayout->addWidget(shen, 0, 2, 1, 1);

        label = new QLabel(chuxungoupiaoxinxi);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        v = new QLabel(chuxungoupiaoxinxi);
        v->setObjectName(QStringLiteral("v"));

        gridLayout->addWidget(v, 1, 0, 1, 2);

        xing = new QLineEdit(chuxungoupiaoxinxi);
        xing->setObjectName(QStringLiteral("xing"));

        gridLayout->addWidget(xing, 1, 2, 1, 1);

        xingming = new QLabel(chuxungoupiaoxinxi);
        xingming->setObjectName(QStringLiteral("xingming"));

        gridLayout->addWidget(xingming, 6, 1, 1, 1);

        dianhuahaoma = new QLabel(chuxungoupiaoxinxi);
        dianhuahaoma->setObjectName(QStringLiteral("dianhuahaoma"));

        gridLayout->addWidget(dianhuahaoma, 7, 1, 1, 1);

        piaojia = new QLabel(chuxungoupiaoxinxi);
        piaojia->setObjectName(QStringLiteral("piaojia"));

        gridLayout->addWidget(piaojia, 8, 1, 1, 1);

        t = new QPushButton(chuxungoupiaoxinxi);
        t->setObjectName(QStringLiteral("t"));

        gridLayout->addWidget(t, 1, 3, 1, 1);

        qidianzhan = new QLabel(chuxungoupiaoxinxi);
        qidianzhan->setObjectName(QStringLiteral("qidianzhan"));

        gridLayout->addWidget(qidianzhan, 2, 1, 1, 1);

        r_2 = new QLabel(chuxungoupiaoxinxi);
        r_2->setObjectName(QStringLiteral("r_2"));

        gridLayout->addWidget(r_2, 3, 0, 2, 2);

        zhongdianzhan = new QLabel(chuxungoupiaoxinxi);
        zhongdianzhan->setObjectName(QStringLiteral("zhongdianzhan"));

        gridLayout->addWidget(zhongdianzhan, 4, 1, 1, 1);

        shenfenzheng = new QLabel(chuxungoupiaoxinxi);
        shenfenzheng->setObjectName(QStringLiteral("shenfenzheng"));

        gridLayout->addWidget(shenfenzheng, 5, 1, 1, 1);

        yujidaodashijian = new QLabel(chuxungoupiaoxinxi);
        yujidaodashijian->setObjectName(QStringLiteral("yujidaodashijian"));

        gridLayout->addWidget(yujidaodashijian, 9, 1, 1, 1);

        fanhui = new QPushButton(chuxungoupiaoxinxi);
        fanhui->setObjectName(QStringLiteral("fanhui"));

        gridLayout->addWidget(fanhui, 0, 3, 1, 1);


        retranslateUi(chuxungoupiaoxinxi);

        QMetaObject::connectSlotsByName(chuxungoupiaoxinxi);
    } // setupUi

    void retranslateUi(QDialog *chuxungoupiaoxinxi)
    {
        chuxungoupiaoxinxi->setWindowTitle(QApplication::translate("chuxungoupiaoxinxi", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        v->setText(QApplication::translate("chuxungoupiaoxinxi", "\345\247\223\345\220\215", Q_NULLPTR));
        xingming->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        dianhuahaoma->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        piaojia->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        t->setText(QApplication::translate("chuxungoupiaoxinxi", "\347\241\256\345\256\232", Q_NULLPTR));
        qidianzhan->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        r_2->setText(QString());
        zhongdianzhan->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        shenfenzheng->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        yujidaodashijian->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        fanhui->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chuxungoupiaoxinxi: public Ui_chuxungoupiaoxinxi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUXUNGOUPIAOXINXI_H
