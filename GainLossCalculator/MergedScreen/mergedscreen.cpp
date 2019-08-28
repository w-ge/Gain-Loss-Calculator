#include "mergedscreen.h"
#include "ui_mergedscreen.h"

MergedScreen::MergedScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MergedScreen)
{
    ui->setupUi(this);
    db = QSqlDatabase::database("securities");
    build();

    // Set fonts for titles
    QFont font = QFont("Helvetica", 14);
    ui->date->setFont(font);
    ui->buy->setFont(font);
    ui->sell->setFont(font);
    ui->description->setFont(font);
    ui->price->setFont(font);
    ui->cost->setFont(font);
    ui->proceeds->setFont(font);
    ui->commissions->setFont(font);
    ui->bookValue->setFont(font);
    ui->avgCB->setFont(font);
    ui->gainLoss->setFont(font);
}

MergedScreen::~MergedScreen()
{
    delete ui;
}

// See Header
void MergedScreen::on_back_clicked()
{
    emit mergedToSecurity();
}

void MergedScreen::buildNode(QString tableName, int * row){

    QSqlQuery query(db);
    double totalCost = 0;
    double totalShares = 0;
    double avgCostBase = 0;
    double totalGain = 0;
    int totalBuy = 0;
    int totalSell = 0;

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    while(query.next()){
        QLabel * date = new QLabel();
        date->setAlignment(Qt::AlignHCenter);
        date->setText(query.value(1).toString() + "/" +  query.value(2).toString() + "/" + query.value(3).toString());
        ui->transactions->addWidget(date, *row, 1 );

        QLabel * num = new QLabel();
        num->setText(query.value(5).toString());
        num->setAlignment(Qt::AlignHCenter);

        QLabel * cost = new QLabel();
        cost->setText(QString::number(query.value(6).toDouble(),'f',2));
        cost->setAlignment(Qt::AlignHCenter);

        if(query.value(4).toBool()){
                ui->transactions->addWidget(num, *row, 2 );
                ui->transactions->addWidget(cost, *row, 5);
                totalBuy += query.value(5).toInt();
        }
        else {
            ui->transactions->addWidget(num, *row, 3 );
            ui->transactions->addWidget(cost, *row, 6);
            totalSell += query.value(5).toInt();
        }



        QLabel * desc = new QLabel();
        desc->setText(tableName);
        desc->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(desc, *row, 0);

        QLabel * price = new QLabel();
        price->setText(QString::number(query.value(6).toDouble() / query.value(5).toDouble(),'f',2));
        price->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(price, *row, 4);

        if(query.value(4).toBool()){
            totalCost += price->text().toDouble() * num->text().toInt();
            totalShares += num->text().toInt();

            QLabel * bookVal = new QLabel();
            bookVal->setText(QString::number(totalCost,'f',2));
            bookVal->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(bookVal, *row, 8);


            QLabel * acb = new QLabel();
            avgCostBase = totalCost / totalShares;
            acb->setText(QString::number(avgCostBase,'f',2));
            acb->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(acb, *row, 9);

        }
        else{

            QLabel * acq = new QLabel();
            acq->setText(QString::number(num->text().toDouble() *avgCostBase,'f',2));
            acq->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(acq, *row, 7);

            QLabel * gain = new QLabel();
            gain->setText(QString::number(cost->text().toDouble() - (avgCostBase * num->text().toInt()),'f',2));
            gain->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(gain, *row, 10);
            totalGain += cost->text().toDouble() - (avgCostBase * num->text().toInt());

            totalShares -= num->text().toInt();
            totalCost = avgCostBase * totalShares;

            QLabel * bookVal = new QLabel();
            bookVal->setText(QString::number(totalCost,'f',2));
            bookVal->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(bookVal, *row, 8);
        }

        (*row)++;
    }
    (*row)++;

    for(int j = 0; j < 11; j++){
        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet(QString("background-color: white;"));
        ui->transactions->addWidget(line, *row, j);
    }
    (*row)++;

    QLabel * tGain = new QLabel();
    tGain->setText(QString::number(totalGain,'f',2));
    tGain->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tGain, *row, 10);

    QLabel * tBuy = new QLabel();
    tBuy->setText(QString::number(totalBuy));
    tBuy->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tBuy, *row, 3);

    QLabel * tSell = new QLabel();
    tSell->setText(QString::number(totalSell));
    tSell->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tSell, *row, 4);

    QLabel * totalText = new QLabel();
    totalText->setText("Total:");
    ui->transactions->addWidget(totalText, *row, 0);
    (*row)++;

    for(int j = 0; j < 11; j++){
        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet(QString("background-color: white;"));
        ui->transactions->addWidget(line, *row, j);
    }
    (*row)++;

    ui->transactions->setRowStretch(*row, 1);
}

// See Header
void MergedScreen::build(){
    QSqlQuery query(db);

    // Retrieve all the names of each security
    query.exec("SELECT name FROM sqlite_master WHERE type='table';");
    query.next();
    int i = 1;

    // Iterate through each security to build each securities' table
    while (query.next()) {
        buildNode(query.value(0).toString(), &i);
        i++;
    }

    ui->securities->setRowStretch(i + 1, 1);
}
