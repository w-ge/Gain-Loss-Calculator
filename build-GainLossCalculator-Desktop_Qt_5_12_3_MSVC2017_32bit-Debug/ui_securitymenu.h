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
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *merge;

    void setupUi(QWidget *SecurityMenu)
    {
        if (SecurityMenu->objectName().isEmpty())
            SecurityMenu->setObjectName(QString::fromUtf8("SecurityMenu"));
        SecurityMenu->resize(828, 550);
        SecurityMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 74);"));
        verticalLayout = new QVBoxLayout(SecurityMenu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(SecurityMenu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea {border: 2px solid white;}"));
        scrollArea->setMidLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 806, 490));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        securities = new QVBoxLayout();
        securities->setObjectName(QString::fromUtf8("securities"));

        verticalLayout_2->addLayout(securities);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(SecurityMenu);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        add->setFont(font);
        add->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
""));

        horizontalLayout->addWidget(add);

        merge = new QPushButton(SecurityMenu);
        merge->setObjectName(QString::fromUtf8("merge"));
        merge->setMinimumSize(QSize(0, 30));
        merge->setFont(font);
        merge->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
""));

        horizontalLayout->addWidget(merge);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SecurityMenu);

        QMetaObject::connectSlotsByName(SecurityMenu);
    } // setupUi

    void retranslateUi(QWidget *SecurityMenu)
    {
        SecurityMenu->setWindowTitle(QApplication::translate("SecurityMenu", "Form", nullptr));
        add->setText(QApplication::translate("SecurityMenu", "Add Security", nullptr));
        merge->setText(QApplication::translate("SecurityMenu", "View Merged", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecurityMenu: public Ui_SecurityMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYMENU_H
