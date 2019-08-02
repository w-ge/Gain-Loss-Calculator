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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
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
        scrollArea = new QScrollArea(EditScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 806, 497));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        transactions = new QVBoxLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));

        verticalLayout_2->addLayout(transactions);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        addTransaction = new QPushButton(EditScreen);
        addTransaction->setObjectName(QString::fromUtf8("addTransaction"));

        horizontalLayout_5->addWidget(addTransaction);

        revert = new QPushButton(EditScreen);
        revert->setObjectName(QString::fromUtf8("revert"));

        horizontalLayout_5->addWidget(revert);

        save = new QPushButton(EditScreen);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout_5->addWidget(save);

        cancel = new QPushButton(EditScreen);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout_5->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(EditScreen);

        QMetaObject::connectSlotsByName(EditScreen);
    } // setupUi

    void retranslateUi(QWidget *EditScreen)
    {
        EditScreen->setWindowTitle(QApplication::translate("EditScreen", "Form", nullptr));
        label_2->setText(QApplication::translate("EditScreen", "Date", nullptr));
        label->setText(QApplication::translate("EditScreen", "Buy", nullptr));
        label_9->setText(QApplication::translate("EditScreen", "Sell", nullptr));
        label_3->setText(QApplication::translate("EditScreen", "Description", nullptr));
        label_5->setText(QApplication::translate("EditScreen", "Cost", nullptr));
        label_6->setText(QApplication::translate("EditScreen", "Proceeds", nullptr));
        label_7->setText(QApplication::translate("EditScreen", "Commission", nullptr));
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
