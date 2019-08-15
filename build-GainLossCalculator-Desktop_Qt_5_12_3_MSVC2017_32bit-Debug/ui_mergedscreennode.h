/********************************************************************************
** Form generated from reading UI file 'mergedscreennode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEDSCREENNODE_H
#define UI_MERGEDSCREENNODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MergedScreenNode
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *transactions;
    QSpacerItem *verticalSpacer;
    QWidget *line;
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
    QWidget *line_2;

    void setupUi(QWidget *MergedScreenNode)
    {
        if (MergedScreenNode->objectName().isEmpty())
            MergedScreenNode->setObjectName(QString::fromUtf8("MergedScreenNode"));
        MergedScreenNode->resize(1228, 460);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MergedScreenNode->sizePolicy().hasHeightForWidth());
        MergedScreenNode->setSizePolicy(sizePolicy);
        MergedScreenNode->setStyleSheet(QString::fromUtf8("QLabel {color: white};\n"
"border: 2px solid white;\n"
"border-bottom-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(MergedScreenNode);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));

        verticalLayout->addLayout(transactions);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QWidget(MergedScreenNode);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(0, 2));
        line->setMaximumSize(QSize(16777215, 2));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        description = new QLabel(MergedScreenNode);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMinimumSize(QSize(0, 30));
        description->setStyleSheet(QString::fromUtf8(""));
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(description);

        date = new QLabel(MergedScreenNode);
        date->setObjectName(QString::fromUtf8("date"));
        date->setMinimumSize(QSize(0, 30));
        date->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        date->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(date);

        buy = new QLabel(MergedScreenNode);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setMinimumSize(QSize(0, 30));
        buy->setStyleSheet(QString::fromUtf8(""));
        buy->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(buy);

        sell = new QLabel(MergedScreenNode);
        sell->setObjectName(QString::fromUtf8("sell"));
        sell->setMinimumSize(QSize(0, 30));
        sell->setStyleSheet(QString::fromUtf8(""));
        sell->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sell);

        price = new QLabel(MergedScreenNode);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        price->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(price);

        cost = new QLabel(MergedScreenNode);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setMinimumSize(QSize(0, 30));
        cost->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        cost->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(cost);

        proceeds = new QLabel(MergedScreenNode);
        proceeds->setObjectName(QString::fromUtf8("proceeds"));
        proceeds->setMinimumSize(QSize(0, 30));
        proceeds->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        proceeds->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(proceeds);

        commissions = new QLabel(MergedScreenNode);
        commissions->setObjectName(QString::fromUtf8("commissions"));
        commissions->setMinimumSize(QSize(0, 30));
        commissions->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        commissions->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(commissions);

        bookValue = new QLabel(MergedScreenNode);
        bookValue->setObjectName(QString::fromUtf8("bookValue"));
        bookValue->setMinimumSize(QSize(0, 30));
        bookValue->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        bookValue->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(bookValue);

        avgCB = new QLabel(MergedScreenNode);
        avgCB->setObjectName(QString::fromUtf8("avgCB"));
        avgCB->setMinimumSize(QSize(0, 30));
        avgCB->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        avgCB->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(avgCB);

        gainLoss = new QLabel(MergedScreenNode);
        gainLoss->setObjectName(QString::fromUtf8("gainLoss"));
        gainLoss->setMinimumSize(QSize(0, 30));
        gainLoss->setStyleSheet(QString::fromUtf8(""));
        gainLoss->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(gainLoss);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QWidget(MergedScreenNode);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(0, 2));
        line_2->setMaximumSize(QSize(16777215, 2));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(line_2);


        retranslateUi(MergedScreenNode);

        QMetaObject::connectSlotsByName(MergedScreenNode);
    } // setupUi

    void retranslateUi(QWidget *MergedScreenNode)
    {
        MergedScreenNode->setWindowTitle(QApplication::translate("MergedScreenNode", "Form", nullptr));
        description->setText(QApplication::translate("MergedScreenNode", "Total:", nullptr));
        date->setText(QApplication::translate("MergedScreenNode", "Date", nullptr));
        buy->setText(QApplication::translate("MergedScreenNode", "Buy", nullptr));
        sell->setText(QApplication::translate("MergedScreenNode", "Sell", nullptr));
        price->setText(QApplication::translate("MergedScreenNode", "Price", nullptr));
        cost->setText(QApplication::translate("MergedScreenNode", "Cost", nullptr));
        proceeds->setText(QApplication::translate("MergedScreenNode", "Proceeds", nullptr));
        commissions->setText(QApplication::translate("MergedScreenNode", "Commissions", nullptr));
        bookValue->setText(QApplication::translate("MergedScreenNode", "Book Value", nullptr));
        avgCB->setText(QApplication::translate("MergedScreenNode", "Average Base Cost", nullptr));
        gainLoss->setText(QApplication::translate("MergedScreenNode", "Gain/Loss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergedScreenNode: public Ui_MergedScreenNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDSCREENNODE_H
