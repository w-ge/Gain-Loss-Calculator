/********************************************************************************
** Form generated from reading UI file 'editscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCREEN_H
#define UI_EDITSCREEN_H

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

class Ui_EditScreen
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Date;
    QLabel *Buy;
    QLabel *Sell;
    QLabel *Desc;
    QLabel *CostProceeds;
    QLabel *Commission;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *transactions;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addTransaction;
    QPushButton *revert;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QWidget *EditScreen)
    {
        if (EditScreen->objectName().isEmpty())
            EditScreen->setObjectName(QString::fromUtf8("EditScreen"));
        EditScreen->resize(828, 550);
        verticalLayout_3 = new QVBoxLayout(EditScreen);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EditScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(EditScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 806, 447));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Date = new QLabel(widget);
        Date->setObjectName(QString::fromUtf8("Date"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Date->sizePolicy().hasHeightForWidth());
        Date->setSizePolicy(sizePolicy);
        Date->setMinimumSize(QSize(90, 0));
        Date->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        Date->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Date);

        Buy = new QLabel(widget);
        Buy->setObjectName(QString::fromUtf8("Buy"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Buy->sizePolicy().hasHeightForWidth());
        Buy->setSizePolicy(sizePolicy1);
        Buy->setMinimumSize(QSize(65, 0));
        Buy->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        Buy->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Buy);

        Sell = new QLabel(widget);
        Sell->setObjectName(QString::fromUtf8("Sell"));
        sizePolicy1.setHeightForWidth(Sell->sizePolicy().hasHeightForWidth());
        Sell->setSizePolicy(sizePolicy1);
        Sell->setMinimumSize(QSize(65, 0));
        Sell->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        Sell->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Sell);

        Desc = new QLabel(widget);
        Desc->setObjectName(QString::fromUtf8("Desc"));
        sizePolicy1.setHeightForWidth(Desc->sizePolicy().hasHeightForWidth());
        Desc->setSizePolicy(sizePolicy1);
        Desc->setMinimumSize(QSize(65, 0));
        Desc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        Desc->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Desc);

        CostProceeds = new QLabel(widget);
        CostProceeds->setObjectName(QString::fromUtf8("CostProceeds"));
        sizePolicy1.setHeightForWidth(CostProceeds->sizePolicy().hasHeightForWidth());
        CostProceeds->setSizePolicy(sizePolicy1);
        CostProceeds->setMinimumSize(QSize(65, 0));
        CostProceeds->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        CostProceeds->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(CostProceeds);

        Commission = new QLabel(widget);
        Commission->setObjectName(QString::fromUtf8("Commission"));
        sizePolicy1.setHeightForWidth(Commission->sizePolicy().hasHeightForWidth());
        Commission->setSizePolicy(sizePolicy1);
        Commission->setMinimumSize(QSize(65, 0));
        Commission->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 171, 255);\n"
"border: 1px solid white"));
        Commission->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Commission);

        horizontalSpacer = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget);

        transactions = new QVBoxLayout();
        transactions->setSpacing(0);
        transactions->setObjectName(QString::fromUtf8("transactions"));

        verticalLayout_2->addLayout(transactions);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        addTransaction = new QPushButton(EditScreen);
        addTransaction->setObjectName(QString::fromUtf8("addTransaction"));
        addTransaction->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setPointSize(10);
        addTransaction->setFont(font1);

        horizontalLayout_5->addWidget(addTransaction);

        revert = new QPushButton(EditScreen);
        revert->setObjectName(QString::fromUtf8("revert"));
        revert->setMinimumSize(QSize(0, 25));
        revert->setFont(font1);

        horizontalLayout_5->addWidget(revert);

        save = new QPushButton(EditScreen);
        save->setObjectName(QString::fromUtf8("save"));
        save->setMinimumSize(QSize(0, 25));
        save->setFont(font1);

        horizontalLayout_5->addWidget(save);

        cancel = new QPushButton(EditScreen);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setMinimumSize(QSize(0, 25));
        cancel->setFont(font1);

        horizontalLayout_5->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(EditScreen);

        QMetaObject::connectSlotsByName(EditScreen);
    } // setupUi

    void retranslateUi(QWidget *EditScreen)
    {
        EditScreen->setWindowTitle(QApplication::translate("EditScreen", "Form", nullptr));
        label->setText(QApplication::translate("EditScreen", "Edit Mode:", nullptr));
        Date->setText(QApplication::translate("EditScreen", "Date", nullptr));
        Buy->setText(QApplication::translate("EditScreen", "Buy", nullptr));
        Sell->setText(QApplication::translate("EditScreen", "Sell", nullptr));
        Desc->setText(QApplication::translate("EditScreen", "Description", nullptr));
        CostProceeds->setText(QApplication::translate("EditScreen", "Cost/Proceeds", nullptr));
        Commission->setText(QApplication::translate("EditScreen", "Commission", nullptr));
        addTransaction->setText(QApplication::translate("EditScreen", "Add New Transaction", nullptr));
        revert->setText(QApplication::translate("EditScreen", "Revert Changes", nullptr));
        save->setText(QApplication::translate("EditScreen", "Save", nullptr));
        cancel->setText(QApplication::translate("EditScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditScreen: public Ui_EditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCREEN_H
