#ifndef EDITSCREEN_H
#define EDITSCREEN_H

#include <QWidget>
#include <list>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include "../TransactionNode/transactionnode.h"


namespace Ui {
class EditScreen;
}

class EditScreen : public QWidget
{
    Q_OBJECT

public:
    explicit EditScreen(QWidget *parent = nullptr, QString table = "");
    ~EditScreen();

    // Reads the database and creates the edit blocks based on previous data
    void buildNodes();

    // Saves data to database
    void save();

signals:

    // Goes to Transaction Screen
    void goToTransaction(QString);

private slots:

    // Adds an edit block when the Add Transaction button is clicked
    void on_addTransaction_clicked();

    // Reverts data to what is stored in the database when the Revert Changes button is clicked
    void on_revert_clicked();

    // Deletes an edit block and removes the data from the database
    void deleteThis(TransactionNode *);

    // Saves data and goes back to Transaction Screen
    void on_back_clicked();

private:
    Ui::EditScreen *ui;
    QSqlDatabase db;
    std::list <TransactionNode *> nodes;
    QString tableName;
};

#endif // EDITSCREEN_H
