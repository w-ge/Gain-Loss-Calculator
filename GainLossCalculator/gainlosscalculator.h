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

    void calculateACB();

private slots:
    void on_save_clicked();

    void on_addTransaction_clicked();

    void on_revert_clicked();

    void deleteThis(TransactionNode *);


private:
    Ui::GainLossCalculator *ui;
    QSqlDatabase db;
    std::list <TransactionNode *> nodes;
};

#endif // GAINLOSSCALCULATOR_H
