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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GainLossCalculator
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *GainLossCalculator)
    {
        if (GainLossCalculator->objectName().isEmpty())
            GainLossCalculator->setObjectName(QString::fromUtf8("GainLossCalculator"));
        GainLossCalculator->resize(400, 300);
        pushButton = new QPushButton(GainLossCalculator);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 120, 75, 23));

        retranslateUi(GainLossCalculator);

        QMetaObject::connectSlotsByName(GainLossCalculator);
    } // setupUi

    void retranslateUi(QWidget *GainLossCalculator)
    {
        GainLossCalculator->setWindowTitle(QApplication::translate("GainLossCalculator", "GainLossCalculator", nullptr));
        pushButton->setText(QApplication::translate("GainLossCalculator", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GainLossCalculator: public Ui_GainLossCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAINLOSSCALCULATOR_H
