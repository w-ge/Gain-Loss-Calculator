#ifndef TRANSACTIONSCREEN_H
#define TRANSACTIONSCREEN_H

#include <QWidget>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QLabel>
#include <QSqlError>

namespace Ui {
class TransactionScreen;
}

class TransactionScreen : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionScreen(QWidget *parent = nullptr, QString name = "");
    ~TransactionScreen();

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

    // Create the list of transactions from the database
    void build();

signals:
    void goToEdit(QString);
    void goToMenu();
    void goToAllFromTransaction();

private slots:

    // Go to edit screen if the Edit button is clicked
    void on_edit_clicked();

    // Go back to main menu if the Back button is clicked
    void on_back_clicked();

    // Go to the merged screen if the View All button is clicked
    void on_viewAll_clicked();

private:
    Ui::TransactionScreen *ui;
    QSqlDatabase db;
    int numOfArgs;
    QString tableName;
};

#endif // TRANSACTIONSCREEN_H
