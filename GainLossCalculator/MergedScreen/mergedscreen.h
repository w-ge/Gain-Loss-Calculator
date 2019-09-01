#ifndef MERGEDSCREEN_H
#define MERGEDSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class MergedScreen;
}

class MergedScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MergedScreen(QWidget *parent = nullptr);
    ~MergedScreen();

    // Indexes
    static int description;
    static int date;
    static int buy;
    static int sell;
    static int price;
    static int cost;
    static int proceeds;
    static int totalShares;
    static int acq;
    static int bookValue;
    static int avgCostBase;
    static int gain;

    static int numOfColumns;

    // Creates the table of all securities
    void build();

    // Creates the table for the security named tableName
    void buildNode(QString tableName, int * row);

signals:

    // Go back to main menu signal
    void mergedToSecurity();

private slots:

    // Go back to main menu when back button is clicked
    void on_back_clicked();

private:
    Ui::MergedScreen *ui;
    QSqlDatabase db;
};

#endif // MERGEDSCREEN_H
