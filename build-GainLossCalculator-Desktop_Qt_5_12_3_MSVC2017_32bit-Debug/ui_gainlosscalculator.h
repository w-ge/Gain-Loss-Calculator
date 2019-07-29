/********************************************************************************
** Form generated from reading UI file 'gainlosscalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAINLOSSCALCULATOR_H
#define UI_GAINLOSSCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GainLossCalculator
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *transactions;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addTransaction;
    QPushButton *save;
    QPushButton *revert;
    QPushButton *back;

    void setupUi(QWidget *GainLossCalculator)
    {
        if (GainLossCalculator->objectName().isEmpty())
            GainLossCalculator->setObjectName(QString::fromUtf8("GainLossCalculator"));
        GainLossCalculator->resize(828, 550);
        horizontalLayout_2 = new QHBoxLayout(GainLossCalculator);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(GainLossCalculator);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 806, 497));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(65, 0));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(65, 0));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(65, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(65, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(65, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(65, 0));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(65, 0));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(65, 0));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_8);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(65, 0));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_10);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        transactions = new QVBoxLayout();
        transactions->setSpacing(6);
        transactions->setObjectName(QString::fromUtf8("transactions"));

        verticalLayout_2->addLayout(transactions);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        addTransaction = new QPushButton(GainLossCalculator);
        addTransaction->setObjectName(QString::fromUtf8("addTransaction"));

        horizontalLayout_5->addWidget(addTransaction);

        save = new QPushButton(GainLossCalculator);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout_5->addWidget(save);

        revert = new QPushButton(GainLossCalculator);
        revert->setObjectName(QString::fromUtf8("revert"));

        horizontalLayout_5->addWidget(revert);

        back = new QPushButton(GainLossCalculator);
        back->setObjectName(QString::fromUtf8("back"));

        horizontalLayout_5->addWidget(back);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(GainLossCalculator);

        QMetaObject::connectSlotsByName(GainLossCalculator);
    } // setupUi

    void retranslateUi(QWidget *GainLossCalculator)
    {
        GainLossCalculator->setWindowTitle(QApplication::translate("GainLossCalculator", "GainLossCalculator", nullptr));
        label_2->setText(QApplication::translate("GainLossCalculator", "Date", nullptr));
        label->setText(QApplication::translate("GainLossCalculator", "Buy", nullptr));
        label_9->setText(QApplication::translate("GainLossCalculator", "Sell", nullptr));
        label_3->setText(QApplication::translate("GainLossCalculator", "Description", nullptr));
        label_4->setText(QApplication::translate("GainLossCalculator", "Price", nullptr));
        label_5->setText(QApplication::translate("GainLossCalculator", "Cost", nullptr));
        label_6->setText(QApplication::translate("GainLossCalculator", "Proceeds", nullptr));
        label_7->setText(QApplication::translate("GainLossCalculator", "Commission", nullptr));
        label_8->setText(QApplication::translate("GainLossCalculator", "Book Value", nullptr));
        label_10->setText(QApplication::translate("GainLossCalculator", "Average Cost Base", nullptr));
        addTransaction->setText(QApplication::translate("GainLossCalculator", "Add New Transaction", nullptr));
        save->setText(QApplication::translate("GainLossCalculator", "Save", nullptr));
        revert->setText(QApplication::translate("GainLossCalculator", "Revert Changes", nullptr));
        back->setText(QApplication::translate("GainLossCalculator", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GainLossCalculator: public Ui_GainLossCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAINLOSSCALCULATOR_H
