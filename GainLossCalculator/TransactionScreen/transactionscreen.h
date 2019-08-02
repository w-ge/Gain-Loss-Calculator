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
    explicit TransactionScreen(QWidget *parent = nullptr);
    ~TransactionScreen();

    void build();

signals:
    void goToEdit();

private slots:
    void on_edit_clicked();

private:
    Ui::TransactionScreen *ui;
    QSqlDatabase db;
    int numOfArgs;
};

#endif // TRANSACTIONSCREEN_H
