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
    QLabel *total;
    QWidget *line;

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
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        transactions = new QGridLayout();
        transactions->setObjectName(QString::fromUtf8("transactions"));

        verticalLayout->addLayout(transactions);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        total = new QLabel(MergedScreenNode);
        total->setObjectName(QString::fromUtf8("total"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(total->sizePolicy().hasHeightForWidth());
        total->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        total->setFont(font);
        total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(total);

        line = new QWidget(MergedScreenNode);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(0, 2));
        line->setMaximumSize(QSize(16777215, 2));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(line);


        retranslateUi(MergedScreenNode);

        QMetaObject::connectSlotsByName(MergedScreenNode);
    } // setupUi

    void retranslateUi(QWidget *MergedScreenNode)
    {
        MergedScreenNode->setWindowTitle(QApplication::translate("MergedScreenNode", "Form", nullptr));
        total->setText(QApplication::translate("MergedScreenNode", "Total: $0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergedScreenNode: public Ui_MergedScreenNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDSCREENNODE_H
