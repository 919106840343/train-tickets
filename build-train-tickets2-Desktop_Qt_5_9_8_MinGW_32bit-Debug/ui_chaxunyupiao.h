/********************************************************************************
** Form generated from reading UI file 'chaxunyupiao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAXUNYUPIAO_H
#define UI_CHAXUNYUPIAO_H

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

class Ui_chaxunyupiao
{
public:
    QGridLayout *gridLayout;
    QLabel *qidianzhan;
    QLineEdit *qidian;
    QPushButton *queding;
    QLabel *zhongdianzhan;
    QLineEdit *zhongdian;
    QPushButton *pushButton;
    QLabel *yu;
    QLabel *yupiao;
    QLabel *cost;
    QLabel *piaojian;

    void setupUi(QDialog *chaxunyupiao)
    {
        if (chaxunyupiao->objectName().isEmpty())
            chaxunyupiao->setObjectName(QStringLiteral("chaxunyupiao"));
        chaxunyupiao->resize(402, 305);
        gridLayout = new QGridLayout(chaxunyupiao);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qidianzhan = new QLabel(chaxunyupiao);
        qidianzhan->setObjectName(QStringLiteral("qidianzhan"));

        gridLayout->addWidget(qidianzhan, 0, 0, 1, 1);

        qidian = new QLineEdit(chaxunyupiao);
        qidian->setObjectName(QStringLiteral("qidian"));

        gridLayout->addWidget(qidian, 0, 1, 1, 1);

        queding = new QPushButton(chaxunyupiao);
        queding->setObjectName(QStringLiteral("queding"));

        gridLayout->addWidget(queding, 0, 3, 1, 1);

        zhongdianzhan = new QLabel(chaxunyupiao);
        zhongdianzhan->setObjectName(QStringLiteral("zhongdianzhan"));

        gridLayout->addWidget(zhongdianzhan, 1, 0, 1, 1);

        zhongdian = new QLineEdit(chaxunyupiao);
        zhongdian->setObjectName(QStringLiteral("zhongdian"));

        gridLayout->addWidget(zhongdian, 1, 1, 1, 1);

        pushButton = new QPushButton(chaxunyupiao);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        yu = new QLabel(chaxunyupiao);
        yu->setObjectName(QStringLiteral("yu"));

        gridLayout->addWidget(yu, 2, 0, 1, 2);

        yupiao = new QLabel(chaxunyupiao);
        yupiao->setObjectName(QStringLiteral("yupiao"));

        gridLayout->addWidget(yupiao, 2, 2, 1, 1);

        cost = new QLabel(chaxunyupiao);
        cost->setObjectName(QStringLiteral("cost"));

        gridLayout->addWidget(cost, 3, 0, 1, 2);

        piaojian = new QLabel(chaxunyupiao);
        piaojian->setObjectName(QStringLiteral("piaojian"));

        gridLayout->addWidget(piaojian, 3, 2, 1, 1);


        retranslateUi(chaxunyupiao);

        QMetaObject::connectSlotsByName(chaxunyupiao);
    } // setupUi

    void retranslateUi(QDialog *chaxunyupiao)
    {
        chaxunyupiao->setWindowTitle(QApplication::translate("chaxunyupiao", "Dialog", Q_NULLPTR));
        qidianzhan->setText(QApplication::translate("chaxunyupiao", "\350\265\267\347\202\271\347\253\231", Q_NULLPTR));
        queding->setText(QApplication::translate("chaxunyupiao", "\347\241\256\345\256\232", Q_NULLPTR));
        zhongdianzhan->setText(QApplication::translate("chaxunyupiao", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        pushButton->setText(QApplication::translate("chaxunyupiao", "\350\277\224\345\233\236", Q_NULLPTR));
        yu->setText(QApplication::translate("chaxunyupiao", "\344\275\231\347\245\250", Q_NULLPTR));
        yupiao->setText(QApplication::translate("chaxunyupiao", "TextLabel", Q_NULLPTR));
        cost->setText(QApplication::translate("chaxunyupiao", "\350\275\246\347\245\250\344\273\267", Q_NULLPTR));
        piaojian->setText(QApplication::translate("chaxunyupiao", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chaxunyupiao: public Ui_chaxunyupiao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAXUNYUPIAO_H
