#include "gainlosscalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GainLossCalculator w;
    w.show();

    return a.exec();
}
