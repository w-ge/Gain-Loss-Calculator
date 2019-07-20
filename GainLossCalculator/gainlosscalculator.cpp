#include "gainlosscalculator.h"
#include "ui_gainlosscalculator.h"

GainLossCalculator::GainLossCalculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GainLossCalculator)
{
    ui->setupUi(this);
}

GainLossCalculator::~GainLossCalculator()
{
    delete ui;
}
