#ifndef TRANSACTIONNODE_H
#define TRANSACTIONNODE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
namespace Ui {
class TransactionNode;
}

class TransactionNode : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionNode(QWidget *parent = nullptr, QString d = "", QString t = "", QString desc = "", QString p = "",
                             QString c = "", QString pro = "", QString com = "");
    ~TransactionNode();

    QString date;
    QString type;
    QString description;
    QString price;
    QString cost;
    QString proceeds;
    QString commission;

    void update();

private:
    Ui::TransactionNode *ui;
    QSqlDatabase db;
};

#endif // TRANSACTIONNODE_H
