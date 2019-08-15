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
    QGridLayout *layout;
    QGridLayout *transactions;
    QLabel *proceeds;
    QLabel *sell;
    QLabel *description;
    QLabel *buy;
    QLabel *bookValue;
    QLabel *price;
    QLabel *comissions;
    QLabel *avgCB;
    QLabel *date;
    QLabel *cost;
    QLabel *gainLoss;
    QGridLayout *transactions_2;
    QLabel *avgCB_2;
    QLabel *buy_2;
    QLabel *comissions_2;
    QLabel *gainLoss_2;
    QLabel *price_2;
    QLabel *date_2;
    QLabel *description_2;
    QLabel *proceeds_2;
    QLabel *bookValue_2;
    QLabel *cost_2;
    QLabel *sell_2;
    QWidget *line;
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
        layout = new QGridLayout();
        layout->setObjectName(QString::fromUtf8("layout"));
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));
        transactions->setVerticalSpacing(10);
        proceeds = new QLabel(scrollAreaWidgetContents);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        proceeds->setMinimumSize(QSize(0, 30));
        proceeds->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        proceeds->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(proceeds, 0, 6, 1, 1);

        sell = new QLabel(scrollAreaWidgetContents);
        sell->setObjectName(QString::fromUtf8("sell"));
        sell->setMinimumSize(QSize(0, 30));
        sell->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        sell->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(sell, 0, 3, 1, 1);

        description = new QLabel(scrollAreaWidgetContents);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMinimumSize(QSize(0, 30));
        description->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        description->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(description, 0, 0, 1, 1);

        buy = new QLabel(scrollAreaWidgetContents);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setMinimumSize(QSize(0, 30));
        buy->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        buy->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(buy, 0, 2, 1, 1);

        bookValue = new QLabel(scrollAreaWidgetContents);
        bookValue->setObjectName(QString::fromUtf8("bookValue"));
        bookValue->setMinimumSize(QSize(0, 30));
        bookValue->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        bookValue->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(bookValue, 0, 8, 1, 1);

        price = new QLabel(scrollAreaWidgetContents);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        price->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(price, 0, 4, 1, 1);

        comissions = new QLabel(scrollAreaWidgetContents);
        comissions->setObjectName(QString::fromUtf8("comissions"));
        comissions->setMinimumSize(QSize(0, 30));
        comissions->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        comissions->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(comissions, 0, 7, 1, 1);

        avgCB = new QLabel(scrollAreaWidgetContents);
        avgCB->setObjectName(QString::fromUtf8("avgCB"));
        avgCB->setMinimumSize(QSize(0, 30));
        avgCB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        avgCB->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(avgCB, 0, 9, 1, 1);

        date = new QLabel(scrollAreaWidgetContents);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(0, 30));
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        date->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(date, 0, 1, 1, 1);

        cost = new QLabel(scrollAreaWidgetContents);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setMinimumSize(QSize(0, 30));
        cost->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        cost->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(cost, 0, 5, 1, 1);

        gainLoss = new QLabel(scrollAreaWidgetContents);
        gainLoss->setObjectName(QString::fromUtf8("gainLoss"));
        gainLoss->setMinimumSize(QSize(0, 30));
        gainLoss->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        gainLoss->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions->addWidget(gainLoss, 0, 10, 1, 1);


        layout->addLayout(transactions, 0, 0, 1, 1);

        transactions_2 = new QGridLayout();
        transactions_2->setObjectName(QString::fromUtf8("transactions_2"));
        transactions_2->setVerticalSpacing(10);
        avgCB_2 = new QLabel(scrollAreaWidgetContents);
        avgCB_2->setObjectName(QString::fromUtf8("avgCB_2"));
        avgCB_2->setMinimumSize(QSize(0, 30));
        avgCB_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        avgCB_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(avgCB_2, 0, 9, 1, 1);

        buy_2 = new QLabel(scrollAreaWidgetContents);
        buy_2->setObjectName(QString::fromUtf8("buy_2"));
        buy_2->setMinimumSize(QSize(0, 30));
        buy_2->setStyleSheet(QString::fromUtf8(""));
        buy_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(buy_2, 0, 2, 1, 1);

        comissions_2 = new QLabel(scrollAreaWidgetContents);
        comissions_2->setObjectName(QString::fromUtf8("comissions_2"));
        comissions_2->setMinimumSize(QSize(0, 30));
        comissions_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        comissions_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(comissions_2, 0, 7, 1, 1);

        gainLoss_2 = new QLabel(scrollAreaWidgetContents);
        gainLoss_2->setObjectName(QString::fromUtf8("gainLoss_2"));
        gainLoss_2->setMinimumSize(QSize(0, 30));
        gainLoss_2->setStyleSheet(QString::fromUtf8(""));
        gainLoss_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(gainLoss_2, 0, 10, 1, 1);

        price_2 = new QLabel(scrollAreaWidgetContents);
        price_2->setObjectName(QString::fromUtf8("price_2"));
        price_2->setMinimumSize(QSize(0, 30));
        price_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        price_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(price_2, 0, 4, 1, 1);

        date_2 = new QLabel(scrollAreaWidgetContents);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        date_2->setMinimumSize(QSize(0, 30));
        date_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        date_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(date_2, 0, 1, 1, 1);

        description_2 = new QLabel(scrollAreaWidgetContents);
        description_2->setObjectName(QString::fromUtf8("description_2"));
        description_2->setMinimumSize(QSize(0, 30));
        description_2->setStyleSheet(QString::fromUtf8(""));
        description_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        transactions_2->addWidget(description_2, 0, 0, 1, 1);

        proceeds_2 = new QLabel(scrollAreaWidgetContents);
        proceeds_2->setObjectName(QString::fromUtf8("proceeds_2"));
        proceeds_2->setMinimumSize(QSize(0, 30));
        proceeds_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        proceeds_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(proceeds_2, 0, 6, 1, 1);

        bookValue_2 = new QLabel(scrollAreaWidgetContents);
        bookValue_2->setObjectName(QString::fromUtf8("bookValue_2"));
        bookValue_2->setMinimumSize(QSize(0, 30));
        bookValue_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        bookValue_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(bookValue_2, 0, 8, 1, 1);

        cost_2 = new QLabel(scrollAreaWidgetContents);
        cost_2->setObjectName(QString::fromUtf8("cost_2"));
        cost_2->setMinimumSize(QSize(0, 30));
        cost_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        cost_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(cost_2, 0, 5, 1, 1);

        sell_2 = new QLabel(scrollAreaWidgetContents);
        sell_2->setObjectName(QString::fromUtf8("sell_2"));
        sell_2->setMinimumSize(QSize(0, 30));
        sell_2->setStyleSheet(QString::fromUtf8(""));
        sell_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        transactions_2->addWidget(sell_2, 0, 3, 1, 1);


        layout->addLayout(transactions_2, 2, 0, 1, 1);

        line = new QWidget(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 2));
        line->setMaximumSize(QSize(16777215, 2));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        layout->addWidget(line, 1, 0, 1, 1);


        gridLayout_3->addLayout(layout, 0, 0, 1, 1);

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
        proceeds->setText(QApplication::translate("TransactionScreen", "Proceeds", nullptr));
        sell->setText(QApplication::translate("TransactionScreen", "Sell", nullptr));
        description->setText(QApplication::translate("TransactionScreen", "Description", nullptr));
        buy->setText(QApplication::translate("TransactionScreen", "Buy", nullptr));
        bookValue->setText(QApplication::translate("TransactionScreen", "Book Value", nullptr));
        price->setText(QApplication::translate("TransactionScreen", "Price", nullptr));
        comissions->setText(QApplication::translate("TransactionScreen", "Comissions", nullptr));
        avgCB->setText(QApplication::translate("TransactionScreen", "Average Cost Base", nullptr));
        date->setText(QApplication::translate("TransactionScreen", "Date", nullptr));
        cost->setText(QApplication::translate("TransactionScreen", "Cost", nullptr));
        gainLoss->setText(QApplication::translate("TransactionScreen", "Gain/Loss", nullptr));
        avgCB_2->setText(QApplication::translate("TransactionScreen", "Average Cost Base", nullptr));
        buy_2->setText(QApplication::translate("TransactionScreen", "0.00", nullptr));
        comissions_2->setText(QApplication::translate("TransactionScreen", "Comissions", nullptr));
        gainLoss_2->setText(QApplication::translate("TransactionScreen", "Gain/Loss", nullptr));
        price_2->setText(QApplication::translate("TransactionScreen", "Price", nullptr));
        date_2->setText(QApplication::translate("TransactionScreen", "Date", nullptr));
        description_2->setText(QApplication::translate("TransactionScreen", "Total:", nullptr));
        proceeds_2->setText(QApplication::translate("TransactionScreen", "Proceeds", nullptr));
        bookValue_2->setText(QApplication::translate("TransactionScreen", "Book Value", nullptr));
        cost_2->setText(QApplication::translate("TransactionScreen", "Cost", nullptr));
        sell_2->setText(QApplication::translate("TransactionScreen", "0.00", nullptr));
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
