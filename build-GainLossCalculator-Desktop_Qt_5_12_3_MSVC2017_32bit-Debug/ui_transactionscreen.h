/********************************************************************************
** Form generated from reading UI file 'transactionscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSCREEN_H
#define UI_TRANSACTIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionScreen
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGridLayout *transactions;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_11;
    QPushButton *edit;

    void setupUi(QWidget *TransactionScreen)
    {
        if (TransactionScreen->objectName().isEmpty())
            TransactionScreen->setObjectName(QString::fromUtf8("TransactionScreen"));
        TransactionScreen->resize(828, 550);
        verticalLayout = new QVBoxLayout(TransactionScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(TransactionScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 808, 501));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_7, 0, 6, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_4, 0, 3, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_3, 0, 2, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_9, 0, 8, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 30));
        label_10->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_10, 0, 9, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_8, 0, 7, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_6, 0, 5, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_5, 0, 4, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_2, 0, 1, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        transactions->addWidget(label_11, 0, 10, 1, 1);


        gridLayout->addLayout(transactions, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        edit = new QPushButton(TransactionScreen);
        edit->setObjectName(QString::fromUtf8("edit"));

        verticalLayout->addWidget(edit);


        retranslateUi(TransactionScreen);

        QMetaObject::connectSlotsByName(TransactionScreen);
    } // setupUi

    void retranslateUi(QWidget *TransactionScreen)
    {
        TransactionScreen->setWindowTitle(QApplication::translate("TransactionScreen", "Form", nullptr));
        label_7->setText(QApplication::translate("TransactionScreen", "Proceeds", nullptr));
        label->setText(QApplication::translate("TransactionScreen", "Date", nullptr));
        label_4->setText(QApplication::translate("TransactionScreen", "Description", nullptr));
        label_3->setText(QApplication::translate("TransactionScreen", "Sell", nullptr));
        label_9->setText(QApplication::translate("TransactionScreen", "Book Value", nullptr));
        label_10->setText(QApplication::translate("TransactionScreen", "Average Cost Base", nullptr));
        label_8->setText(QApplication::translate("TransactionScreen", "Comissions", nullptr));
        label_6->setText(QApplication::translate("TransactionScreen", "Cost", nullptr));
        label_5->setText(QApplication::translate("TransactionScreen", "Price", nullptr));
        label_2->setText(QApplication::translate("TransactionScreen", "Buy", nullptr));
        label_11->setText(QApplication::translate("TransactionScreen", "Gain/Loss", nullptr));
        edit->setText(QApplication::translate("TransactionScreen", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionScreen: public Ui_TransactionScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSCREEN_H
