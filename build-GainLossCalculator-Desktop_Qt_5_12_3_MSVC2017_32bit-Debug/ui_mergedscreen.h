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
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
    QLabel *description;
    QLabel *date;
    QLabel *buy;
    QLabel *sell;
    QLabel *price;
    QLabel *cost;
    QLabel *proceeds;
    QLabel *commissions;
    QLabel *bookValue;
    QLabel *avgCB;
    QLabel *gainLoss;
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
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 885, 511));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        securities = new QGridLayout();
        securities->setObjectName(QString::fromUtf8("securities"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        description = new QLabel(scrollAreaWidgetContents_3);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMinimumSize(QSize(0, 30));
        description->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        description->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(description);

        date = new QLabel(scrollAreaWidgetContents_3);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(0, 30));
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        date->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(date);

        buy = new QLabel(scrollAreaWidgetContents_3);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setMinimumSize(QSize(0, 30));
        buy->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        buy->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(buy);

        sell = new QLabel(scrollAreaWidgetContents_3);
        sell->setObjectName(QString::fromUtf8("sell"));
        sell->setMinimumSize(QSize(0, 30));
        sell->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        sell->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sell);

        price = new QLabel(scrollAreaWidgetContents_3);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        price->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(price);

        cost = new QLabel(scrollAreaWidgetContents_3);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setMinimumSize(QSize(0, 30));
        cost->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        cost->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(cost);

        proceeds = new QLabel(scrollAreaWidgetContents_3);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        proceeds->setMinimumSize(QSize(0, 30));
        proceeds->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        proceeds->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(proceeds);

        commissions = new QLabel(scrollAreaWidgetContents_3);
        commissions->setObjectName(QString::fromUtf8("commissions"));
        commissions->setMinimumSize(QSize(0, 30));
        commissions->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        commissions->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(commissions);

        bookValue = new QLabel(scrollAreaWidgetContents_3);
        bookValue->setObjectName(QString::fromUtf8("bookValue"));
        bookValue->setMinimumSize(QSize(0, 30));
        bookValue->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        bookValue->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(bookValue);

        avgCB = new QLabel(scrollAreaWidgetContents_3);
        avgCB->setObjectName(QString::fromUtf8("avgCB"));
        avgCB->setMinimumSize(QSize(0, 30));
        avgCB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        avgCB->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(avgCB);

        gainLoss = new QLabel(scrollAreaWidgetContents_3);
        gainLoss->setObjectName(QString::fromUtf8("gainLoss"));
        gainLoss->setMinimumSize(QSize(0, 30));
        gainLoss->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white;"));
        gainLoss->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(gainLoss);


        securities->addLayout(horizontalLayout, 0, 0, 1, 1);


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
        description->setText(QApplication::translate("MergedScreen", "Description", nullptr));
        date->setText(QApplication::translate("MergedScreen", "Date", nullptr));
        buy->setText(QApplication::translate("MergedScreen", "Buy", nullptr));
        sell->setText(QApplication::translate("MergedScreen", "Sell", nullptr));
        price->setText(QApplication::translate("MergedScreen", "Price", nullptr));
        cost->setText(QApplication::translate("MergedScreen", "Cost", nullptr));
        proceeds->setText(QApplication::translate("MergedScreen", "Proceeds", nullptr));
        commissions->setText(QApplication::translate("MergedScreen", "Commissions", nullptr));
        bookValue->setText(QApplication::translate("MergedScreen", "Book Value", nullptr));
        avgCB->setText(QApplication::translate("MergedScreen", "Average Base Cost", nullptr));
        gainLoss->setText(QApplication::translate("MergedScreen", "Gain/Loss", nullptr));
        back->setText(QApplication::translate("MergedScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergedScreen: public Ui_MergedScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDSCREEN_H
