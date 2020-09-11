/********************************************************************************
** Form generated from reading UI file 'buytickets.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYTICKETS_H
#define UI_BUYTICKETS_H

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

class Ui_buytickets
{
public:
    QGridLayout *gridLayout;
    QLabel *qidian;
    QLineEdit *qi;
    QLabel *zhongdain;
    QLineEdit *zhong;
    QLabel *shengfenzheng;
    QLineEdit *sheng;
    QLabel *xingming;
    QLineEdit *xing;
    QLabel *dianhuahaoma;
    QLineEdit *dian;
    QPushButton *queding;
    QLabel *piaojia;
    QLabel *yujidadao;
    QPushButton *fanhui;

    void setupUi(QDialog *buytickets)
    {
        if (buytickets->objectName().isEmpty())
            buytickets->setObjectName(QStringLiteral("buytickets"));
        buytickets->resize(683, 446);
        gridLayout = new QGridLayout(buytickets);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qidian = new QLabel(buytickets);
        qidian->setObjectName(QStringLiteral("qidian"));

        gridLayout->addWidget(qidian, 0, 0, 1, 1);

        qi = new QLineEdit(buytickets);
        qi->setObjectName(QStringLiteral("qi"));

        gridLayout->addWidget(qi, 0, 1, 1, 1);

        zhongdain = new QLabel(buytickets);
        zhongdain->setObjectName(QStringLiteral("zhongdain"));

        gridLayout->addWidget(zhongdain, 1, 0, 1, 1);

        zhong = new QLineEdit(buytickets);
        zhong->setObjectName(QStringLiteral("zhong"));

        gridLayout->addWidget(zhong, 1, 1, 1, 1);

        shengfenzheng = new QLabel(buytickets);
        shengfenzheng->setObjectName(QStringLiteral("shengfenzheng"));

        gridLayout->addWidget(shengfenzheng, 2, 0, 1, 1);

        sheng = new QLineEdit(buytickets);
        sheng->setObjectName(QStringLiteral("sheng"));

        gridLayout->addWidget(sheng, 2, 1, 1, 1);

        xingming = new QLabel(buytickets);
        xingming->setObjectName(QStringLiteral("xingming"));

        gridLayout->addWidget(xingming, 3, 0, 1, 1);

        xing = new QLineEdit(buytickets);
        xing->setObjectName(QStringLiteral("xing"));

        gridLayout->addWidget(xing, 3, 1, 1, 1);

        dianhuahaoma = new QLabel(buytickets);
        dianhuahaoma->setObjectName(QStringLiteral("dianhuahaoma"));

        gridLayout->addWidget(dianhuahaoma, 4, 0, 1, 1);

        dian = new QLineEdit(buytickets);
        dian->setObjectName(QStringLiteral("dian"));

        gridLayout->addWidget(dian, 4, 1, 1, 1);

        queding = new QPushButton(buytickets);
        queding->setObjectName(QStringLiteral("queding"));

        gridLayout->addWidget(queding, 4, 2, 1, 1);

        piaojia = new QLabel(buytickets);
        piaojia->setObjectName(QStringLiteral("piaojia"));

        gridLayout->addWidget(piaojia, 5, 0, 1, 1);

        yujidadao = new QLabel(buytickets);
        yujidadao->setObjectName(QStringLiteral("yujidadao"));

        gridLayout->addWidget(yujidadao, 5, 1, 1, 1);

        fanhui = new QPushButton(buytickets);
        fanhui->setObjectName(QStringLiteral("fanhui"));

        gridLayout->addWidget(fanhui, 5, 2, 1, 1);


        retranslateUi(buytickets);

        QMetaObject::connectSlotsByName(buytickets);
    } // setupUi

    void retranslateUi(QDialog *buytickets)
    {
        buytickets->setWindowTitle(QApplication::translate("buytickets", "Dialog", Q_NULLPTR));
        qidian->setText(QApplication::translate("buytickets", "\350\265\267\347\202\271\347\253\231", Q_NULLPTR));
        zhongdain->setText(QApplication::translate("buytickets", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        shengfenzheng->setText(QApplication::translate("buytickets", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        xingming->setText(QApplication::translate("buytickets", "\345\247\223\345\220\215", Q_NULLPTR));
        dianhuahaoma->setText(QApplication::translate("buytickets", "\347\224\265\350\257\235\345\217\267\347\240\201", Q_NULLPTR));
        queding->setText(QApplication::translate("buytickets", "\347\241\256\345\256\232", Q_NULLPTR));
        piaojia->setText(QApplication::translate("buytickets", "TextLabel", Q_NULLPTR));
        yujidadao->setText(QApplication::translate("buytickets", "TextLabel", Q_NULLPTR));
        fanhui->setText(QApplication::translate("buytickets", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class buytickets: public Ui_buytickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTICKETS_H
