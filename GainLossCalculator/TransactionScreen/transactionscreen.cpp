#include "transactionscreen.h"
#include "ui_transactionscreen.h"

TransactionScreen::TransactionScreen(QWidget *parent, QString text) :
    QWidget(parent),
    ui(new Ui::TransactionScreen)
{
    ui->setupUi(this);

    numOfArgs = 10;

    QFont font = QFont("Helvetica", 14);

    tableName = text;

    ui->date->setFont(font);
    ui->buy->setFont(font);
    ui->sell->setFont(font);
    ui->description->setFont(font);
    ui->price->setFont(font);
    ui->cost->setFont(font);
    ui->proceeds->setFont(font);
    ui->comissions->setFont(font);
    ui->bookValue->setFont(font);
    ui->avgCB->setFont(font);
    ui->gainLoss->setFont(font);




    this->setStyleSheet("QLabel {color: white};"
                        "QScrollBar:vertical {background: white;}"
                        "QScrollBar:handle:vertical {background: grey;}");

    db = QSqlDatabase::database("securities");
    build();


}

TransactionScreen::~TransactionScreen()
{
    delete ui;
}

void TransactionScreen::on_edit_clicked()
{
    emit goToEdit(tableName);
}


void TransactionScreen::build(){
    QSqlQuery query(db);
    double totalCost = 0;
    double totalShares = 0;
    double avgCostBase = 0;
    double totalGain = 0;

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    int i = 1;
    while(query.next()){
        QLabel * date = new QLabel();
        date->setAlignment(Qt::AlignHCenter);
        date->setText(query.value(1).toString() + "/" +  query.value(2).toString() + "/" + query.value(3).toString());
        ui->transactions->addWidget(date, i, 1 );

        QLabel * num = new QLabel();
        num->setText(query.value(5).toString());
        num->setAlignment(Qt::AlignHCenter);

        QLabel * cost = new QLabel();
        cost->setText(QString::number(query.value(6).toDouble(),'f',2));
        cost->setAlignment(Qt::AlignHCenter);


        if(query.value(4).toBool()){
                ui->transactions->addWidget(num, i, 2 );
                ui->transactions->addWidget(cost, i, 5);
        }
        else {
            ui->transactions->addWidget(num, i, 3 );
            ui->transactions->addWidget(cost, i, 6);
        }

        QLabel * desc = new QLabel();
        desc->setText(tableName);
        desc->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(desc, i, 0);

        QLabel * price = new QLabel();
        price->setText(QString::number(query.value(6).toDouble() / query.value(5).toDouble(),'f',2));
        price->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(price, i, 4);

        QLabel * com = new QLabel();
        com->setText(query.value(8).toString());
        com->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(com, i, 7);


        if(query.value(4).toBool()){
            totalCost += price->text().toDouble() * num->text().toInt();
            totalShares += num->text().toInt();

            QLabel * bookVal = new QLabel();
            bookVal->setText(QString::number(totalCost,'f',2));
            bookVal->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(bookVal, i, 8);


            QLabel * acb = new QLabel();
            avgCostBase = totalCost / totalShares;
            acb->setText(QString::number(avgCostBase,'f',2));
            acb->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(acb, i, 9);

        }
        else{

            QLabel * gain = new QLabel();
            gain->setText(QString::number(cost->text().toDouble() - (avgCostBase * num->text().toInt()),'f',2));
            gain->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(gain, i, 10);
            totalGain += cost->text().toDouble() - (avgCostBase * num->text().toInt());

            totalShares -= num->text().toInt();
            totalCost = avgCostBase * totalShares;

            QLabel * bookVal = new QLabel();
            bookVal->setText(QString::number(totalCost,'f',2));
            bookVal->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(bookVal, i, 8);
        }

        i++;
    }
    ui->total->setText("Total: $" + QString::number(totalGain, 'f', 2));
    ui->transactions->setRowStretch(i + 1, 1);
}

void TransactionScreen::on_back_clicked()
{
    emit goToMenu();
}