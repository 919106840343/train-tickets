/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *yu;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mai;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cha;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *tui;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(692, 487);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        yu = new QPushButton(Widget);
        yu->setObjectName(QStringLiteral("yu"));

        gridLayout->addWidget(yu, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        mai = new QPushButton(Widget);
        mai->setObjectName(QStringLiteral("mai"));

        gridLayout->addWidget(mai, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        cha = new QPushButton(Widget);
        cha->setObjectName(QStringLiteral("cha"));

        gridLayout->addWidget(cha, 2, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 6, 1, 1);

        tui = new QPushButton(Widget);
        tui->setObjectName(QStringLiteral("tui"));

        gridLayout->addWidget(tui, 2, 7, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 8, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 4, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(48);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 9);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        yu->setText(QApplication::translate("Widget", "\346\237\245\350\257\242\344\275\231\347\245\250", Q_NULLPTR));
        mai->setText(QApplication::translate("Widget", "\344\271\260\347\245\250", Q_NULLPTR));
        cha->setText(QApplication::translate("Widget", "\346\237\245\350\257\242\350\264\255\347\245\250\344\277\241\346\201\257", Q_NULLPTR));
        tui->setText(QApplication::translate("Widget", "\351\200\200\347\245\250", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\347\201\253\350\275\246\347\245\250\346\250\241\346\213\237\350\264\255\347\245\250\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
