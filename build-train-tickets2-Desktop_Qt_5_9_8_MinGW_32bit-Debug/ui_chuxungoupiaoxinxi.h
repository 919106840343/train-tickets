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
    QLabel *label;
    QLineEdit *shen;
    QPushButton *fanhui;
    QLabel *v;
    QLineEdit *xing;
    QPushButton *t;
    QLabel *r_2;
    QLabel *zhong;
    QLabel *sheng;
    QLabel *xing_2;
    QLabel *dian;
    QLabel *jia;
    QLabel *time;
    QLabel *qi;
    QLabel *qidianzhan;
    QLabel *zhongdianzhan;
    QLabel *shenfenzheng;
    QLabel *xingming;
    QLabel *dianhuahaoma;
    QLabel *piaojia;
    QLabel *yujidaodashijian;

    void setupUi(QDialog *chuxungoupiaoxinxi)
    {
        if (chuxungoupiaoxinxi->objectName().isEmpty())
            chuxungoupiaoxinxi->setObjectName(QStringLiteral("chuxungoupiaoxinxi"));
        chuxungoupiaoxinxi->resize(543, 447);
        gridLayout = new QGridLayout(chuxungoupiaoxinxi);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(chuxungoupiaoxinxi);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        shen = new QLineEdit(chuxungoupiaoxinxi);
        shen->setObjectName(QStringLiteral("shen"));

        gridLayout->addWidget(shen, 0, 3, 1, 1);

        fanhui = new QPushButton(chuxungoupiaoxinxi);
        fanhui->setObjectName(QStringLiteral("fanhui"));

        gridLayout->addWidget(fanhui, 0, 5, 1, 1);

        v = new QLabel(chuxungoupiaoxinxi);
        v->setObjectName(QStringLiteral("v"));

        gridLayout->addWidget(v, 1, 0, 1, 2);

        xing = new QLineEdit(chuxungoupiaoxinxi);
        xing->setObjectName(QStringLiteral("xing"));

        gridLayout->addWidget(xing, 1, 3, 1, 1);

        t = new QPushButton(chuxungoupiaoxinxi);
        t->setObjectName(QStringLiteral("t"));

        gridLayout->addWidget(t, 1, 5, 1, 1);

        r_2 = new QLabel(chuxungoupiaoxinxi);
        r_2->setObjectName(QStringLiteral("r_2"));

        gridLayout->addWidget(r_2, 3, 0, 1, 1);

        zhong = new QLabel(chuxungoupiaoxinxi);
        zhong->setObjectName(QStringLiteral("zhong"));

        gridLayout->addWidget(zhong, 4, 0, 1, 1);

        sheng = new QLabel(chuxungoupiaoxinxi);
        sheng->setObjectName(QStringLiteral("sheng"));

        gridLayout->addWidget(sheng, 5, 0, 1, 1);

        xing_2 = new QLabel(chuxungoupiaoxinxi);
        xing_2->setObjectName(QStringLiteral("xing_2"));

        gridLayout->addWidget(xing_2, 6, 0, 1, 1);

        dian = new QLabel(chuxungoupiaoxinxi);
        dian->setObjectName(QStringLiteral("dian"));

        gridLayout->addWidget(dian, 7, 0, 1, 1);

        jia = new QLabel(chuxungoupiaoxinxi);
        jia->setObjectName(QStringLiteral("jia"));

        gridLayout->addWidget(jia, 8, 0, 1, 1);

        time = new QLabel(chuxungoupiaoxinxi);
        time->setObjectName(QStringLiteral("time"));

        gridLayout->addWidget(time, 9, 0, 1, 1);

        qi = new QLabel(chuxungoupiaoxinxi);
        qi->setObjectName(QStringLiteral("qi"));

        gridLayout->addWidget(qi, 2, 0, 1, 1);

        qidianzhan = new QLabel(chuxungoupiaoxinxi);
        qidianzhan->setObjectName(QStringLiteral("qidianzhan"));

        gridLayout->addWidget(qidianzhan, 2, 3, 1, 1);

        zhongdianzhan = new QLabel(chuxungoupiaoxinxi);
        zhongdianzhan->setObjectName(QStringLiteral("zhongdianzhan"));

        gridLayout->addWidget(zhongdianzhan, 4, 3, 1, 1);

        shenfenzheng = new QLabel(chuxungoupiaoxinxi);
        shenfenzheng->setObjectName(QStringLiteral("shenfenzheng"));

        gridLayout->addWidget(shenfenzheng, 5, 3, 1, 1);

        xingming = new QLabel(chuxungoupiaoxinxi);
        xingming->setObjectName(QStringLiteral("xingming"));

        gridLayout->addWidget(xingming, 6, 3, 1, 1);

        dianhuahaoma = new QLabel(chuxungoupiaoxinxi);
        dianhuahaoma->setObjectName(QStringLiteral("dianhuahaoma"));

        gridLayout->addWidget(dianhuahaoma, 7, 3, 1, 1);

        piaojia = new QLabel(chuxungoupiaoxinxi);
        piaojia->setObjectName(QStringLiteral("piaojia"));

        gridLayout->addWidget(piaojia, 8, 3, 1, 1);

        yujidaodashijian = new QLabel(chuxungoupiaoxinxi);
        yujidaodashijian->setObjectName(QStringLiteral("yujidaodashijian"));

        gridLayout->addWidget(yujidaodashijian, 9, 3, 1, 1);


        retranslateUi(chuxungoupiaoxinxi);

        QMetaObject::connectSlotsByName(chuxungoupiaoxinxi);
    } // setupUi

    void retranslateUi(QDialog *chuxungoupiaoxinxi)
    {
        chuxungoupiaoxinxi->setWindowTitle(QApplication::translate("chuxungoupiaoxinxi", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        fanhui->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\277\224\345\233\236", Q_NULLPTR));
        v->setText(QApplication::translate("chuxungoupiaoxinxi", "\345\247\223\345\220\215", Q_NULLPTR));
        t->setText(QApplication::translate("chuxungoupiaoxinxi", "\347\241\256\345\256\232", Q_NULLPTR));
        r_2->setText(QString());
        zhong->setText(QApplication::translate("chuxungoupiaoxinxi", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        sheng->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        xing_2->setText(QApplication::translate("chuxungoupiaoxinxi", "\345\247\223\345\220\215", Q_NULLPTR));
        dian->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        jia->setText(QApplication::translate("chuxungoupiaoxinxi", "\347\245\250\344\273\267", Q_NULLPTR));
        time->setText(QApplication::translate("chuxungoupiaoxinxi", "\351\242\204\350\256\241\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        qi->setText(QApplication::translate("chuxungoupiaoxinxi", "\350\265\267\347\202\271\347\253\231", Q_NULLPTR));
        qidianzhan->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        zhongdianzhan->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        shenfenzheng->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        xingming->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        dianhuahaoma->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        piaojia->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
        yujidaodashijian->setText(QApplication::translate("chuxungoupiaoxinxi", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chuxungoupiaoxinxi: public Ui_chuxungoupiaoxinxi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUXUNGOUPIAOXINXI_H
