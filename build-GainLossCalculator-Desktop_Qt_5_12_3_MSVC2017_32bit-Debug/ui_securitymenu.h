/********************************************************************************
** Form generated from reading UI file 'securitymenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYMENU_H
#define UI_SECURITYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecurityMenu
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *securities;
    QPushButton *add;

    void setupUi(QWidget *SecurityMenu)
    {
        if (SecurityMenu->objectName().isEmpty())
            SecurityMenu->setObjectName(QString::fromUtf8("SecurityMenu"));
        SecurityMenu->resize(828, 550);
        verticalLayout = new QVBoxLayout(SecurityMenu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(SecurityMenu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 808, 494));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        securities = new QVBoxLayout();
        securities->setObjectName(QString::fromUtf8("securities"));

        verticalLayout_2->addLayout(securities);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        add = new QPushButton(SecurityMenu);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(add);


        retranslateUi(SecurityMenu);

        QMetaObject::connectSlotsByName(SecurityMenu);
    } // setupUi

    void retranslateUi(QWidget *SecurityMenu)
    {
        SecurityMenu->setWindowTitle(QApplication::translate("SecurityMenu", "Form", nullptr));
        add->setText(QApplication::translate("SecurityMenu", "Add Security", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecurityMenu: public Ui_SecurityMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYMENU_H
