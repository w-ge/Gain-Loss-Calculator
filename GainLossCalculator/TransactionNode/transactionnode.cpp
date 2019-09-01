#include "transactionnode.h"
#include "ui_transactionnode.h"

TransactionNode::TransactionNode(QWidget *parent, int d, int m, int y, bool b, int n, QString desc,
                                 double c) :
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
    cost = c;

    ui->day->setValidator(new QIntValidator(1, 31));
    ui->month->setValidator(new QIntValidator(1, 12));
    ui->year->setValidator(new QIntValidator(1900, 9999));
    ui->buy->setValidator(new QIntValidator(1, 2147483647));
    ui->sell->setValidator(new QIntValidator(1, 2147483647));
    ui->cost->setValidator(new QDoubleValidator(0, 2147483647, 2));

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
    ui->cost->setText(QString::number(cost,'f',2));
}

TransactionNode::~TransactionNode()
{
    delete ui;
}

// See Header
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
}

// See Header
void TransactionNode::on_delete_2_clicked()
{
    emit deleteThis(this);
}

// See Header
void TransactionNode::on_buy_textChanged(const QString &text)
{
    ui->sell->setText("");
    ui->buy->setText(text);
}

// See Header
void TransactionNode::on_sell_textChanged(const QString &text)
{
    ui->buy->setText("");
    ui->sell->setText(text);
}
