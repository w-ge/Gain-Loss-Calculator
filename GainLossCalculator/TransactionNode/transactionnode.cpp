#include "transactionnode.h"
#include "ui_transactionnode.h"

TransactionNode::TransactionNode(QWidget *parent, QString d, QString t, QString desc, QString p,
                                 QString c, QString pro, QString com) :
    QWidget(parent),
    ui(new Ui::TransactionNode)
{
    ui->setupUi(this);

    date = d;
    type = t;
    description = desc;
    price = p;
    cost = c;
    proceeds = pro;
    commission = com;

    ui->date->setText(date);
    ui->type->setCurrentText(type);
    ui->description->setText(description);
    ui->price->setText(price);
    ui->costs->setText(cost);
    ui->proceeds->setText(proceeds);
    ui->commissions->setText(commission);

}

TransactionNode::~TransactionNode()
{
    delete ui;
}

void TransactionNode::update(){
    date = ui->date->text();
    type = ui->type->currentText();
    description = ui->description->text();
    price = ui->price->text();
    cost = ui->costs->text();
    proceeds = ui->proceeds->text();
    commission = ui->commissions->text();
}
