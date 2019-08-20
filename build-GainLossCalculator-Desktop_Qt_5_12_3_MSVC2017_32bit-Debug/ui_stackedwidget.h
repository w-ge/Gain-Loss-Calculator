/********************************************************************************
** Form generated from reading UI file 'stackedwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKEDWIDGET_H
#define UI_STACKEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_StackedWidget
{
public:

    void setupUi(QStackedWidget *StackedWidget)
    {
        if (StackedWidget->objectName().isEmpty())
            StackedWidget->setObjectName(QString::fromUtf8("StackedWidget"));
        StackedWidget->resize(1000, 550);
        StackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 74);"));

        retranslateUi(StackedWidget);

        QMetaObject::connectSlotsByName(StackedWidget);
    } // setupUi

    void retranslateUi(QStackedWidget *StackedWidget)
    {
        StackedWidget->setWindowTitle(QApplication::translate("StackedWidget", "StackedWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StackedWidget: public Ui_StackedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKEDWIDGET_H
