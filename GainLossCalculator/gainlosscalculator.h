#ifndef GAINLOSSCALCULATOR_H
#define GAINLOSSCALCULATOR_H

#include <QWidget>
#include <list>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include "./TransactionNode/transactionnode.h"


namespace Ui {
class GainLossCalculator;
}

class GainLossCalculator : public QWidget
{
    Q_OBJECT

public:
    explicit GainLossCalculator(QWidget *parent = nullptr);
    ~GainLossCalculator();

    void buildNodes();

private slots:
    void on_save_clicked();

private:
    Ui::GainLossCalculator *ui;
    QSqlDatabase db;
    std::list <TransactionNode *> nodes;
};

#endif // GAINLOSSCALCULATOR_H
