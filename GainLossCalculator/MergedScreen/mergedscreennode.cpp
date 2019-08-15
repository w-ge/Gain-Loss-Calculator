#include "mergedscreennode.h"
#include "ui_mergedscreennode.h"

MergedScreenNode::MergedScreenNode(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::MergedScreenNode)
{
    ui->setupUi(this);

    db = QSqlDatabase::database("securities");
    tableName = name;
    build();
}

MergedScreenNode::~MergedScreenNode()
{
    delete ui;
}

void MergedScreenNode::build(){
    QSqlQuery query(db);
    double totalCost = 0;
    double totalShares = 0;
    double avgCostBase = 0;
    double totalGain = 0;
    int totalBuy = 0;
    int totalSell = 0;

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    int i = 1;


    for(int i = 0; i < 11; i++){
        QLabel * blank = new QLabel();
        blank->setText("");
        blank->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(blank, 0, i);
    }

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
                totalBuy += query.value(5).toInt();
        }
        else {
            ui->transactions->addWidget(num, i, 3 );
            ui->transactions->addWidget(cost, i, 6);
            totalSell += query.value(5).toInt();
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
    ui->gainLoss->setText(QString::number(totalGain, 'f', 2));
    ui->buy->setText(QString::number(totalBuy));
    ui->sell->setText(QString::number(totalSell));
    ui->transactions->setRowStretch(i + 1, 1);
}
