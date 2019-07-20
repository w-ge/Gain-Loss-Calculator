#ifndef GAINLOSSCALCULATOR_H
#define GAINLOSSCALCULATOR_H

#include <QWidget>

namespace Ui {
class GainLossCalculator;
}

class GainLossCalculator : public QWidget
{
    Q_OBJECT

public:
    explicit GainLossCalculator(QWidget *parent = nullptr);
    ~GainLossCalculator();

private:
    Ui::GainLossCalculator *ui;
};

#endif // GAINLOSSCALCULATOR_H
