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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionNode
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *day;
    QLabel *label;
    QLineEdit *month;
    QLabel *label_2;
    QLineEdit *year;
    QLineEdit *buy;
    QLineEdit *sell;
    QLineEdit *description;
    QLineEdit *price;
    QLineEdit *cost;
    QLineEdit *proceeds;
    QLineEdit *commissions;
    QLabel *bookvalue;
    QLabel *acb;

    void setupUi(QWidget *TransactionNode)
    {
        if (TransactionNode->objectName().isEmpty())
            TransactionNode->setObjectName(QString::fromUtf8("TransactionNode"));
        TransactionNode->resize(966, 50);
        TransactionNode->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(TransactionNode);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(TransactionNode);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(85, 0));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        day = new QLineEdit(widget);
        day->setObjectName(QString::fromUtf8("day"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(day->sizePolicy().hasHeightForWidth());
        day->setSizePolicy(sizePolicy1);
        day->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(day);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        month = new QLineEdit(widget);
        month->setObjectName(QString::fromUtf8("month"));
        sizePolicy1.setHeightForWidth(month->sizePolicy().hasHeightForWidth());
        month->setSizePolicy(sizePolicy1);
        month->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(month);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        year = new QLineEdit(widget);
        year->setObjectName(QString::fromUtf8("year"));
        sizePolicy1.setHeightForWidth(year->sizePolicy().hasHeightForWidth());
        year->setSizePolicy(sizePolicy1);
        year->setMaximumSize(QSize(35, 16777215));

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

        horizontalLayout->addWidget(buy);

        sell = new QLineEdit(TransactionNode);
        sell->setObjectName(QString::fromUtf8("sell"));
        sizePolicy2.setHeightForWidth(sell->sizePolicy().hasHeightForWidth());
        sell->setSizePolicy(sizePolicy2);
        sell->setMinimumSize(QSize(65, 0));

        horizontalLayout->addWidget(sell);

        description = new QLineEdit(TransactionNode);
        description->setObjectName(QString::fromUtf8("description"));
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setMinimumSize(QSize(65, 0));

        horizontalLayout->addWidget(description);

        price = new QLineEdit(TransactionNode);
        price->setObjectName(QString::fromUtf8("price"));
        sizePolicy2.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy2);
        price->setMinimumSize(QSize(65, 0));
        price->setReadOnly(true);

        horizontalLayout->addWidget(price);

        cost = new QLineEdit(TransactionNode);
        cost->setObjectName(QString::fromUtf8("cost"));
        sizePolicy2.setHeightForWidth(cost->sizePolicy().hasHeightForWidth());
        cost->setSizePolicy(sizePolicy2);
        cost->setMinimumSize(QSize(65, 0));

        horizontalLayout->addWidget(cost);

        proceeds = new QLineEdit(TransactionNode);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        sizePolicy2.setHeightForWidth(proceeds->sizePolicy().hasHeightForWidth());
        proceeds->setSizePolicy(sizePolicy2);
        proceeds->setMinimumSize(QSize(65, 0));

        horizontalLayout->addWidget(proceeds);

        commissions = new QLineEdit(TransactionNode);
        commissions->setObjectName(QString::fromUtf8("commissions"));
        sizePolicy2.setHeightForWidth(commissions->sizePolicy().hasHeightForWidth());
        commissions->setSizePolicy(sizePolicy2);
        commissions->setMinimumSize(QSize(65, 0));

        horizontalLayout->addWidget(commissions);

        bookvalue = new QLabel(TransactionNode);
        bookvalue->setObjectName(QString::fromUtf8("bookvalue"));
        sizePolicy2.setHeightForWidth(bookvalue->sizePolicy().hasHeightForWidth());
        bookvalue->setSizePolicy(sizePolicy2);
        bookvalue->setMinimumSize(QSize(65, 18));

        horizontalLayout->addWidget(bookvalue);

        acb = new QLabel(TransactionNode);
        acb->setObjectName(QString::fromUtf8("acb"));
        sizePolicy2.setHeightForWidth(acb->sizePolicy().hasHeightForWidth());
        acb->setSizePolicy(sizePolicy2);
        acb->setMinimumSize(QSize(65, 18));

        horizontalLayout->addWidget(acb);


        retranslateUi(TransactionNode);

        QMetaObject::connectSlotsByName(TransactionNode);
    } // setupUi

    void retranslateUi(QWidget *TransactionNode)
    {
        TransactionNode->setWindowTitle(QApplication::translate("TransactionNode", "Form", nullptr));
        label->setText(QApplication::translate("TransactionNode", "/", nullptr));
        label_2->setText(QApplication::translate("TransactionNode", "/", nullptr));
        bookvalue->setText(QString());
        acb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransactionNode: public Ui_TransactionNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONNODE_H
