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
    explicit TransactionScreen(QWidget *parent = nullptr, QString text = "");
    ~TransactionScreen();

    void build();

signals:
    void goToEdit(QString);
    void goToMenu();
    void goToAllFromTransaction();

private slots:
    void on_edit_clicked();

    void on_back_clicked();

    void on_viewAll_clicked();

private:
    Ui::TransactionScreen *ui;
    QSqlDatabase db;
    int numOfArgs;
    QString tableName;
};

#endif // TRANSACTIONSCREEN_H
