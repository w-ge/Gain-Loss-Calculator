/********************************************************************************
** Form generated from reading UI file 'securitynode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYNODE_H
#define UI_SECURITYNODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecurityNode
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *delete_2;

    void setupUi(QWidget *SecurityNode)
    {
        if (SecurityNode->objectName().isEmpty())
            SecurityNode->setObjectName(QString::fromUtf8("SecurityNode"));
        SecurityNode->resize(600, 50);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SecurityNode->sizePolicy().hasHeightForWidth());
        SecurityNode->setSizePolicy(sizePolicy);
        SecurityNode->setMinimumSize(QSize(600, 50));
        SecurityNode->setMaximumSize(QSize(600, 50));
        horizontalLayout = new QHBoxLayout(SecurityNode);
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(SecurityNode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton);

        delete_2 = new QPushButton(SecurityNode);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setMinimumSize(QSize(40, 40));
        delete_2->setMaximumSize(QSize(40, 40));
        delete_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 107, 109);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        delete_2->setIcon(icon);

        horizontalLayout->addWidget(delete_2);


        retranslateUi(SecurityNode);

        QMetaObject::connectSlotsByName(SecurityNode);
    } // setupUi

    void retranslateUi(QWidget *SecurityNode)
    {
        SecurityNode->setWindowTitle(QApplication::translate("SecurityNode", "Form", nullptr));
        pushButton->setText(QApplication::translate("SecurityNode", "PushButton", nullptr));
        delete_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecurityNode: public Ui_SecurityNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYNODE_H
