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
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout_3;
    QGridLayout *transactions;
    QLabel *description;
    QLabel *cost;
    QLabel *gainLoss;
    QLabel *proceeds;
    QLabel *avgCB;
    QLabel *date;
    QLabel *buy;
    QLabel *bookValue;
    QLabel *price;
    QLabel *sell;
    QLabel *comissions;
    QHBoxLayout *horizontalLayout;
    QPushButton *edit;
    QPushButton *viewAll;
    QPushButton *back;

    void setupUi(QWidget *TransactionScreen)
    {
        if (TransactionScreen->objectName().isEmpty())
            TransactionScreen->setObjectName(QString::fromUtf8("TransactionScreen"));
        TransactionScreen->resize(815, 597);
        TransactionScreen->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TransactionScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(TransactionScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 795, 539));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));
        transactions->setHorizontalSpacing(0);
        transactions->setVerticalSpacing(10);
        description = new QLabel(scrollAreaWidgetContents);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMinimumSize(QSize(0, 30));
        description->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        description->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(description, 0, 0, 1, 1);

        cost = new QLabel(scrollAreaWidgetContents);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setMinimumSize(QSize(0, 30));
        cost->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        cost->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(cost, 0, 5, 1, 1);

        gainLoss = new QLabel(scrollAreaWidgetContents);
        gainLoss->setObjectName(QString::fromUtf8("gainLoss"));
        gainLoss->setMinimumSize(QSize(0, 30));
        gainLoss->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        gainLoss->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(gainLoss, 0, 10, 1, 1);

        proceeds = new QLabel(scrollAreaWidgetContents);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        proceeds->setMinimumSize(QSize(0, 30));
        proceeds->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        proceeds->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(proceeds, 0, 6, 1, 1);

        avgCB = new QLabel(scrollAreaWidgetContents);
        avgCB->setObjectName(QString::fromUtf8("avgCB"));
        avgCB->setMinimumSize(QSize(0, 30));
        avgCB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        avgCB->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(avgCB, 0, 9, 1, 1);

        date = new QLabel(scrollAreaWidgetContents);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(0, 30));
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        date->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(date, 0, 1, 1, 1);

        buy = new QLabel(scrollAreaWidgetContents);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setMinimumSize(QSize(0, 30));
        buy->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        buy->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(buy, 0, 2, 1, 1);

        bookValue = new QLabel(scrollAreaWidgetContents);
        bookValue->setObjectName(QString::fromUtf8("bookValue"));
        bookValue->setMinimumSize(QSize(0, 30));
        bookValue->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        bookValue->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(bookValue, 0, 8, 1, 1);

        price = new QLabel(scrollAreaWidgetContents);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        price->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(price, 0, 4, 1, 1);

        sell = new QLabel(scrollAreaWidgetContents);
        sell->setObjectName(QString::fromUtf8("sell"));
        sell->setMinimumSize(QSize(0, 30));
        sell->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        sell->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(sell, 0, 3, 1, 1);

        comissions = new QLabel(scrollAreaWidgetContents);
        comissions->setObjectName(QString::fromUtf8("comissions"));
        comissions->setMinimumSize(QSize(0, 30));
        comissions->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        comissions->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(comissions, 0, 7, 1, 1);


        gridLayout_3->addLayout(transactions, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edit = new QPushButton(TransactionScreen);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        edit->setFont(font);
        edit->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
""));

        horizontalLayout->addWidget(edit);

        viewAll = new QPushButton(TransactionScreen);
        viewAll->setObjectName(QString::fromUtf8("viewAll"));
        viewAll->setMinimumSize(QSize(0, 30));
        viewAll->setFont(font);
        viewAll->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
""));

        horizontalLayout->addWidget(viewAll);

        back = new QPushButton(TransactionScreen);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(0, 30));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);\n"
""));

        horizontalLayout->addWidget(back);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TransactionScreen);

        QMetaObject::connectSlotsByName(TransactionScreen);
    } // setupUi

    void retranslateUi(QWidget *TransactionScreen)
    {
        TransactionScreen->setWindowTitle(QApplication::translate("TransactionScreen", "Form", nullptr));
        description->setText(QApplication::translate("TransactionScreen", "Description", nullptr));
        cost->setText(QApplication::translate("TransactionScreen", "Cost", nullptr));
        gainLoss->setText(QApplication::translate("TransactionScreen", "Gain/Loss", nullptr));
        proceeds->setText(QApplication::translate("TransactionScreen", "Proceeds", nullptr));
        avgCB->setText(QApplication::translate("TransactionScreen", "Average Cost Base", nullptr));
        date->setText(QApplication::translate("TransactionScreen", "Date", nullptr));
        buy->setText(QApplication::translate("TransactionScreen", "Buy", nullptr));
        bookValue->setText(QApplication::translate("TransactionScreen", "Book Value", nullptr));
        price->setText(QApplication::translate("TransactionScreen", "Price", nullptr));
        sell->setText(QApplication::translate("TransactionScreen", "Sell", nullptr));
        comissions->setText(QApplication::translate("TransactionScreen", "ACQ/DIS BV", nullptr));
        edit->setText(QApplication::translate("TransactionScreen", "Edit", nullptr));
        viewAll->setText(QApplication::translate("TransactionScreen", "View All", nullptr));
        back->setText(QApplication::translate("TransactionScreen", "Back To Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionScreen: public Ui_TransactionScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSCREEN_H
