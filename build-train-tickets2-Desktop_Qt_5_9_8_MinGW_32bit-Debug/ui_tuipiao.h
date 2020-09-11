/********************************************************************************
** Form generated from reading UI file 'tuipiao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUIPIAO_H
#define UI_TUIPIAO_H

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

class Ui_tuipiao
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *shenfenzheng;
    QLabel *label_2;
    QLineEdit *xingming;
    QPushButton *queding;
    QPushButton *fanhui;

    void setupUi(QDialog *tuipiao)
    {
        if (tuipiao->objectName().isEmpty())
            tuipiao->setObjectName(QStringLiteral("tuipiao"));
        tuipiao->resize(492, 383);
        gridLayout = new QGridLayout(tuipiao);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tuipiao);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        shenfenzheng = new QLineEdit(tuipiao);
        shenfenzheng->setObjectName(QStringLiteral("shenfenzheng"));

        gridLayout->addWidget(shenfenzheng, 0, 1, 1, 1);

        label_2 = new QLabel(tuipiao);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        xingming = new QLineEdit(tuipiao);
        xingming->setObjectName(QStringLiteral("xingming"));

        gridLayout->addWidget(xingming, 1, 1, 1, 1);

        queding = new QPushButton(tuipiao);
        queding->setObjectName(QStringLiteral("queding"));

        gridLayout->addWidget(queding, 2, 2, 1, 1);

        fanhui = new QPushButton(tuipiao);
        fanhui->setObjectName(QStringLiteral("fanhui"));

        gridLayout->addWidget(fanhui, 3, 2, 1, 1);


        retranslateUi(tuipiao);

        QMetaObject::connectSlotsByName(tuipiao);
    } // setupUi

    void retranslateUi(QDialog *tuipiao)
    {
        tuipiao->setWindowTitle(QApplication::translate("tuipiao", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("tuipiao", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("tuipiao", "\345\247\223\345\220\215", Q_NULLPTR));
        queding->setText(QApplication::translate("tuipiao", "\347\241\256\345\256\232", Q_NULLPTR));
        fanhui->setText(QApplication::translate("tuipiao", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tuipiao: public Ui_tuipiao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUIPIAO_H
