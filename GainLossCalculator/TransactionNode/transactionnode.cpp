#include "transactionnode.h"
#include "ui_transactionnode.h"

TransactionNode::TransactionNode(QWidget *parent, QString d, bool b, int n, QString desc, int p,
                                 int c, int pro, int com) :
    QWidget(parent),
    ui(new Ui::TransactionNode)
{
    ui->setupUi(this);

    date = d;
    buy = b;
    number = n;
    description = desc;
    price = p;
    cost = c;
    proceeds = pro;
    commission = com;

    ui->buy->setValidator(new QIntValidator(0, 2147483647));
    ui->sell->setValidator(new QIntValidator(0, 2147483647));

    ui->date->setText(date);
    if(buy){
        ui->buy->setText(QString::number(number));
    }
    else{
        ui->sell->setText(QString::number(number));
    }

    ui->description->setText(description);
    ui->price->setText(QString::number(price));
    ui->costs->setText(QString::number(cost));
    ui->proceeds->setText(QString::number(proceeds));
    ui->commissions->setText(QString::number(commission));

}

TransactionNode::~TransactionNode()
{
    delete ui;
}

void TransactionNode::update(){
    /*date = ui->date->text();
    type = ui->type->currentText();
    description = ui->description->text();
    price = ui->price->text();
    cost = ui->costs->text();
    proceeds = ui->proceeds->text();
    commission = ui->commissions->text();*/
}
