/********************************************************************************
** Form generated from reading UI file 'transactionview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONVIEW_H
#define UI_TRANSACTIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionView
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *TransactionView)
    {
        if (TransactionView->objectName().isEmpty())
            TransactionView->setObjectName(QString::fromUtf8("TransactionView"));
        TransactionView->resize(400, 300);
        horizontalLayout = new QHBoxLayout(TransactionView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(TransactionView);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(TransactionView);

        QMetaObject::connectSlotsByName(TransactionView);
    } // setupUi

    void retranslateUi(QWidget *TransactionView)
    {
        TransactionView->setWindowTitle(QApplication::translate("TransactionView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionView: public Ui_TransactionView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONVIEW_H
