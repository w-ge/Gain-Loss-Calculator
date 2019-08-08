/********************************************************************************
** Form generated from reading UI file 'addsecuritydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSECURITYDIALOG_H
#define UI_ADDSECURITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSecurityDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *tableName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddSecurityDialog)
    {
        if (AddSecurityDialog->objectName().isEmpty())
            AddSecurityDialog->setObjectName(QString::fromUtf8("AddSecurityDialog"));
        AddSecurityDialog->resize(330, 170);
        AddSecurityDialog->setMaximumSize(QSize(330, 170));
        verticalLayout = new QVBoxLayout(AddSecurityDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddSecurityDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tableName = new QLineEdit(AddSecurityDialog);
        tableName->setObjectName(QString::fromUtf8("tableName"));

        verticalLayout->addWidget(tableName);

        buttonBox = new QDialogButtonBox(AddSecurityDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddSecurityDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddSecurityDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddSecurityDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddSecurityDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSecurityDialog)
    {
        AddSecurityDialog->setWindowTitle(QApplication::translate("AddSecurityDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("AddSecurityDialog", "New Transaction Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSecurityDialog: public Ui_AddSecurityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSECURITYDIALOG_H
