#include "transactionnode.h"
#include "ui_transactionnode.h"

TransactionNode::TransactionNode(QWidget *parent, int d, int m, int y, bool b, int n, QString desc,
                                 double c, double p, double com) :
    QWidget(parent),
    ui(new Ui::TransactionNode)
{
    ui->setupUi(this);

    day = d;
    month = m;
    year = y;
    buy = b;
    number = n;
    description = desc;
    price = c / n;
    cost = c;
    proceeds = p;
    commission = com;

    ui->day->setValidator(new QIntValidator(1, 31));
    ui->month->setValidator(new QIntValidator(1, 12));
    ui->year->setValidator(new QIntValidator(1900, 9999));

    ui->buy->setValidator(new QIntValidator(1, 2147483647));
    ui->sell->setValidator(new QIntValidator(1, 2147483647));

    ui->price->setValidator(new QDoubleValidator(0, 2147483647, 2));
    ui->cost->setValidator(new QDoubleValidator(0, 2147483647, 2));
    ui->proceeds->setValidator(new QDoubleValidator(0, 2147483647, 2));
    ui->commissions->setValidator(new QDoubleValidator(0, 2147483647, 2));

    ui->day->setText(QString::number(day));
    ui->month->setText(QString::number(month));
    ui->year->setText(QString::number(year));

    if(buy){
        ui->buy->setText(QString::number(number));
    }
    else{
        ui->sell->setText(QString::number(number));
    }

    ui->description->setText(description);
    ui->price->setText(QString::number(price,'f',2));
    ui->cost->setText(QString::number(cost,'f',2));
    ui->proceeds->setText(QString::number(proceeds,'f',2));
    ui->commissions->setText(QString::number(commission,'f',2));
    ui->bookvalue->setText(QString::number(number * price,'f',2));

}

void TransactionNode::setACB(QString acb){
    ui->acb->setText(acb);
}

void TransactionNode::setBookValue(QString bookvalue){
    ui->bookvalue->setText(bookvalue);
}
TransactionNode::~TransactionNode()
{
    delete ui;
}

void TransactionNode::update(){
    day = ui->day->text().toInt();
    month = ui->month->text().toInt();
    year = ui->year->text().toInt();

    buy = ui->buy->text() != "";

    if(buy){
        number = ui->buy->text().toInt();
    }
    else{
        number = ui->sell->text().toInt();
    }
    description = ui->description->text();
    cost = ui->cost->text().toDouble();
    proceeds = ui->proceeds->text().toDouble();
    commission = ui->commissions->text().toDouble();

    price = cost / number;
    ui->price->setText(QString::number(price,'f',2));

    ui->bookvalue->setText(QString::number(number * price,'f',2));
}



void TransactionNode::on_delete_2_clicked()
{
    emit deleteThis(this);
}
