#ifndef TRANSACTIONNODE_H
#define TRANSACTIONNODE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QIntValidator>
namespace Ui {
class TransactionNode;
}

class TransactionNode : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionNode(QWidget *parent = nullptr, QString d = "", bool b = 1, int n = 0,
                             QString desc = "", int p = 0, int c = 0, int pro = 0, int com = 0);
    ~TransactionNode();

    QString date;
    bool buy;
    int number;
    QString description;
    int price;
    int cost;
    int proceeds;
    int commission;

    void update();

private:
    Ui::TransactionNode *ui;
    QSqlDatabase db;
};

#endif // TRANSACTIONNODE_H
