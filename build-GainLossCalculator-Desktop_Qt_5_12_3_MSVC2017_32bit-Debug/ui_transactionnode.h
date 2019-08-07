/********************************************************************************
** Form generated from reading UI file 'transactionnode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONNODE_H
#define UI_TRANSACTIONNODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionNode
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *description;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *day;
    QLabel *label;
    QLineEdit *month;
    QLabel *label_2;
    QLineEdit *year;
    QLineEdit *buy;
    QLineEdit *sell;
    QLineEdit *cost;
    QLineEdit *commissions;
    QPushButton *delete_2;

    void setupUi(QWidget *TransactionNode)
    {
        if (TransactionNode->objectName().isEmpty())
            TransactionNode->setObjectName(QString::fromUtf8("TransactionNode"));
        TransactionNode->resize(963, 30);
        TransactionNode->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(TransactionNode);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        description = new QLineEdit(TransactionNode);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMinimumSize(QSize(145, 0));
        description->setMaximumSize(QSize(145, 16777215));
        description->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        description->setReadOnly(true);

        horizontalLayout->addWidget(description);

        widget = new QWidget(TransactionNode);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(85, 0));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        day = new QLineEdit(widget);
        day->setObjectName(QString::fromUtf8("day"));
        sizePolicy.setHeightForWidth(day->sizePolicy().hasHeightForWidth());
        day->setSizePolicy(sizePolicy);
        day->setMaximumSize(QSize(20, 16777215));
        day->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(day);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        month = new QLineEdit(widget);
        month->setObjectName(QString::fromUtf8("month"));
        sizePolicy.setHeightForWidth(month->sizePolicy().hasHeightForWidth());
        month->setSizePolicy(sizePolicy);
        month->setMaximumSize(QSize(20, 16777215));
        month->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(month);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        year = new QLineEdit(widget);
        year->setObjectName(QString::fromUtf8("year"));
        sizePolicy.setHeightForWidth(year->sizePolicy().hasHeightForWidth());
        year->setSizePolicy(sizePolicy);
        year->setMaximumSize(QSize(30, 16777215));
        year->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(year);


        horizontalLayout->addWidget(widget);

        buy = new QLineEdit(TransactionNode);
        buy->setObjectName(QString::fromUtf8("buy"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buy->sizePolicy().hasHeightForWidth());
        buy->setSizePolicy(sizePolicy2);
        buy->setMinimumSize(QSize(65, 0));
        buy->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(buy);

        sell = new QLineEdit(TransactionNode);
        sell->setObjectName(QString::fromUtf8("sell"));
        sizePolicy2.setHeightForWidth(sell->sizePolicy().hasHeightForWidth());
        sell->setSizePolicy(sizePolicy2);
        sell->setMinimumSize(QSize(65, 0));
        sell->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(sell);

        cost = new QLineEdit(TransactionNode);
        cost->setObjectName(QString::fromUtf8("cost"));
        sizePolicy2.setHeightForWidth(cost->sizePolicy().hasHeightForWidth());
        cost->setSizePolicy(sizePolicy2);
        cost->setMinimumSize(QSize(65, 0));
        cost->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(cost);

        commissions = new QLineEdit(TransactionNode);
        commissions->setObjectName(QString::fromUtf8("commissions"));
        sizePolicy2.setHeightForWidth(commissions->sizePolicy().hasHeightForWidth());
        commissions->setSizePolicy(sizePolicy2);
        commissions->setMinimumSize(QSize(65, 0));
        commissions->setStyleSheet(QString::fromUtf8("border-width: 1px; \n"
"border-style: solid;\n"
" border-color: white white black white;\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(commissions);

        delete_2 = new QPushButton(TransactionNode);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        sizePolicy.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy);
        delete_2->setMinimumSize(QSize(30, 30));
        delete_2->setMaximumSize(QSize(40, 30));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        delete_2->setPalette(palette);
        delete_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        delete_2->setIcon(icon);

        horizontalLayout->addWidget(delete_2);


        retranslateUi(TransactionNode);

        QMetaObject::connectSlotsByName(TransactionNode);
    } // setupUi

    void retranslateUi(QWidget *TransactionNode)
    {
        TransactionNode->setWindowTitle(QApplication::translate("TransactionNode", "Form", nullptr));
        description->setText(QString());
        label->setText(QApplication::translate("TransactionNode", "/", nullptr));
        label_2->setText(QApplication::translate("TransactionNode", "/", nullptr));
        delete_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransactionNode: public Ui_TransactionNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONNODE_H
