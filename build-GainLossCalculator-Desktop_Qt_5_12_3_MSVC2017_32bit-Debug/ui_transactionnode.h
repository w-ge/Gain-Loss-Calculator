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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionNode
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *date;
    QComboBox *type;
    QLineEdit *description;
    QLineEdit *price;
    QLineEdit *costs;
    QLineEdit *proceeds;
    QLineEdit *commissions;

    void setupUi(QWidget *TransactionNode)
    {
        if (TransactionNode->objectName().isEmpty())
            TransactionNode->setObjectName(QString::fromUtf8("TransactionNode"));
        TransactionNode->resize(592, 50);
        TransactionNode->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color: rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(TransactionNode);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        date = new QLabel(TransactionNode);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(70, 0));
        date->setMaximumSize(QSize(16777215, 18));

        horizontalLayout->addWidget(date);

        type = new QComboBox(TransactionNode);
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));
        type->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(type);

        description = new QLineEdit(TransactionNode);
        description->setObjectName(QString::fromUtf8("description"));

        horizontalLayout->addWidget(description);

        price = new QLineEdit(TransactionNode);
        price->setObjectName(QString::fromUtf8("price"));

        horizontalLayout->addWidget(price);

        costs = new QLineEdit(TransactionNode);
        costs->setObjectName(QString::fromUtf8("costs"));

        horizontalLayout->addWidget(costs);

        proceeds = new QLineEdit(TransactionNode);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));

        horizontalLayout->addWidget(proceeds);

        commissions = new QLineEdit(TransactionNode);
        commissions->setObjectName(QString::fromUtf8("commissions"));

        horizontalLayout->addWidget(commissions);


        retranslateUi(TransactionNode);

        QMetaObject::connectSlotsByName(TransactionNode);
    } // setupUi

    void retranslateUi(QWidget *TransactionNode)
    {
        TransactionNode->setWindowTitle(QApplication::translate("TransactionNode", "Form", nullptr));
        date->setText(QApplication::translate("TransactionNode", "TextLabel", nullptr));
        type->setItemText(0, QApplication::translate("TransactionNode", "BUY", nullptr));
        type->setItemText(1, QApplication::translate("TransactionNode", "SELL", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TransactionNode: public Ui_TransactionNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONNODE_H
