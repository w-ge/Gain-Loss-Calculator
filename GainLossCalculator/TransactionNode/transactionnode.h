#ifndef TRANSACTIONNODE_H
#define TRANSACTIONNODE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QIntValidator>
#include <QDoubleValidator>
namespace Ui {
class TransactionNode;
}

class TransactionNode : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionNode(QWidget *parent = nullptr, int d = 0, int m  = 0, int y = 0, bool b = 1, int n = 0,
                             QString desc = "", double c = 0, double p = 0, double com = 0);
    ~TransactionNode();

    int day;
    int month;
    int year;
    bool buy;
    int number;
    QString description;
    double cost;
    double proceeds;
    double commission;

    void update();

signals:
    void deleteThis(TransactionNode *);

private slots:

    void on_delete_2_clicked();

    void on_buy_textChanged(const QString &text);

    void on_sell_textChanged(const QString &text);

private:
    Ui::TransactionNode *ui;
    QSqlDatabase db;
};

#endif // TRANSACTIONNODE_H
