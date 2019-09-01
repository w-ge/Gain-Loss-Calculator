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
        transactions->setHorizontalSpacing(0);

        verticalLayout->addLayout(transactions);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MergedScreenNode);

        QMetaObject::connectSlotsByName(MergedScreenNode);
    } // setupUi

    void retranslateUi(QWidget *MergedScreenNode)
    {
        MergedScreenNode->setWindowTitle(QApplication::translate("MergedScreenNode", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergedScreenNode: public Ui_MergedScreenNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDSCREENNODE_H
