/********************************************************************************
** Form generated from reading UI file 'mergedscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEDSCREEN_H
#define UI_MERGEDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MergedScreen
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout;
    QGridLayout *securities;
    QGridLayout *transactions;
    QLabel *buy;
    QLabel *sell;
    QLabel *price;
    QLabel *cost;
    QLabel *bookValue;
    QLabel *proceeds;
    QLabel *commissions;
    QLabel *gainLoss;
    QLabel *description;
    QLabel *date;
    QLabel *avgCB;
    QLabel *totalShares;
    QPushButton *back;

    void setupUi(QWidget *MergedScreen)
    {
        if (MergedScreen->objectName().isEmpty())
            MergedScreen->setObjectName(QString::fromUtf8("MergedScreen"));
        MergedScreen->resize(905, 567);
        MergedScreen->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MergedScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(MergedScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(255, 255, 255);}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 885, 511));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        securities = new QGridLayout();
        securities->setObjectName(QString::fromUtf8("securities"));
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));
        transactions->setHorizontalSpacing(0);
        transactions->setVerticalSpacing(10);
        buy = new QLabel(scrollAreaWidgetContents_3);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setMinimumSize(QSize(0, 30));
        buy->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        buy->setAlignment(Qt::AlignCenter);

        transactions->addWidget(buy, 0, 2, 1, 1);

        sell = new QLabel(scrollAreaWidgetContents_3);
        sell->setObjectName(QString::fromUtf8("sell"));
        sell->setMinimumSize(QSize(0, 30));
        sell->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        sell->setAlignment(Qt::AlignCenter);

        transactions->addWidget(sell, 0, 3, 1, 1);

        price = new QLabel(scrollAreaWidgetContents_3);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        price->setAlignment(Qt::AlignCenter);

        transactions->addWidget(price, 0, 4, 1, 1);

        cost = new QLabel(scrollAreaWidgetContents_3);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setMinimumSize(QSize(0, 30));
        cost->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        cost->setAlignment(Qt::AlignCenter);

        transactions->addWidget(cost, 0, 5, 1, 1);

        bookValue = new QLabel(scrollAreaWidgetContents_3);
        bookValue->setObjectName(QString::fromUtf8("bookValue"));
        bookValue->setMinimumSize(QSize(0, 30));
        bookValue->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        bookValue->setAlignment(Qt::AlignCenter);

        transactions->addWidget(bookValue, 0, 9, 1, 1);

        proceeds = new QLabel(scrollAreaWidgetContents_3);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        proceeds->setMinimumSize(QSize(0, 30));
        proceeds->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        proceeds->setAlignment(Qt::AlignCenter);

        transactions->addWidget(proceeds, 0, 6, 1, 1);

        commissions = new QLabel(scrollAreaWidgetContents_3);
        commissions->setObjectName(QString::fromUtf8("commissions"));
        commissions->setMinimumSize(QSize(0, 30));
        commissions->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        commissions->setAlignment(Qt::AlignCenter);

        transactions->addWidget(commissions, 0, 8, 1, 1);

        gainLoss = new QLabel(scrollAreaWidgetContents_3);
        gainLoss->setObjectName(QString::fromUtf8("gainLoss"));
        gainLoss->setMinimumSize(QSize(0, 30));
        gainLoss->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        gainLoss->setAlignment(Qt::AlignCenter);

        transactions->addWidget(gainLoss, 0, 11, 1, 1);

        description = new QLabel(scrollAreaWidgetContents_3);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMinimumSize(QSize(0, 30));
        description->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        description->setAlignment(Qt::AlignCenter);

        transactions->addWidget(description, 0, 0, 1, 1);

        date = new QLabel(scrollAreaWidgetContents_3);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(0, 30));
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        date->setAlignment(Qt::AlignCenter);

        transactions->addWidget(date, 0, 1, 1, 1);

        avgCB = new QLabel(scrollAreaWidgetContents_3);
        avgCB->setObjectName(QString::fromUtf8("avgCB"));
        avgCB->setMinimumSize(QSize(0, 30));
        avgCB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        avgCB->setAlignment(Qt::AlignCenter);

        transactions->addWidget(avgCB, 0, 10, 1, 1);

        totalShares = new QLabel(scrollAreaWidgetContents_3);
        totalShares->setObjectName(QString::fromUtf8("totalShares"));
        totalShares->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 3px solid rgb(74, 74, 74);"));
        totalShares->setAlignment(Qt::AlignCenter);

        transactions->addWidget(totalShares, 0, 7, 1, 1);


        securities->addLayout(transactions, 0, 0, 1, 1);


        gridLayout->addLayout(securities, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(scrollArea);

        back = new QPushButton(MergedScreen);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);"));

        verticalLayout->addWidget(back);


        retranslateUi(MergedScreen);

        QMetaObject::connectSlotsByName(MergedScreen);
    } // setupUi

    void retranslateUi(QWidget *MergedScreen)
    {
        MergedScreen->setWindowTitle(QApplication::translate("MergedScreen", "Form", nullptr));
        buy->setText(QApplication::translate("MergedScreen", "Buy", nullptr));
        sell->setText(QApplication::translate("MergedScreen", "Sell", nullptr));
        price->setText(QApplication::translate("MergedScreen", "Price", nullptr));
        cost->setText(QApplication::translate("MergedScreen", "Cost", nullptr));
        bookValue->setText(QApplication::translate("MergedScreen", "Book Value", nullptr));
        proceeds->setText(QApplication::translate("MergedScreen", "Proceeds", nullptr));
        commissions->setText(QApplication::translate("MergedScreen", "ACQ/DIS BV", nullptr));
        gainLoss->setText(QApplication::translate("MergedScreen", "Gain/Loss", nullptr));
        description->setText(QApplication::translate("MergedScreen", "Description", nullptr));
        date->setText(QApplication::translate("MergedScreen", "Date", nullptr));
        avgCB->setText(QApplication::translate("MergedScreen", "Average Base Cost", nullptr));
        totalShares->setText(QApplication::translate("MergedScreen", "Total Shares", nullptr));
        back->setText(QApplication::translate("MergedScreen", "Back To Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergedScreen: public Ui_MergedScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDSCREEN_H
