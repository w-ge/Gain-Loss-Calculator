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
    int totalBuy = 0;
    int totalSell = 0;

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

            QLabel * acq = new QLabel();
            acq->setText(QString::number(num->text().toDouble() *avgCostBase,'f',2));
            acq->setAlignment(Qt::AlignHCenter);
            ui->transactions->addWidget(acq, i, 7);

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

    for(int j = 0; j < 11; j++){
        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet(QString("background-color: white;"));
        ui->transactions->addWidget(line, i, j);
    }
    i++;

    QLabel * tGain = new QLabel();
    tGain->setText(QString::number(totalGain,'f',2));
    tGain->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tGain, i, 10);

    QLabel * tBuy = new QLabel();
    tBuy->setText(QString::number(totalBuy));
    tBuy->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tBuy, i, 2);

    QLabel * tSell = new QLabel();
    tSell->setText(QString::number(totalSell));
    tSell->setAlignment(Qt::AlignHCenter);
    ui->transactions->addWidget(tSell, i, 3);

    QLabel * totalText = new QLabel();
    totalText->setText("Total:");
    ui->transactions->addWidget(totalText, i, 0);

    ui->transactions->setRowStretch(i + 1, 1);
}

void TransactionScreen::on_back_clicked()
{
    emit goToMenu();
}

void TransactionScreen::on_viewAll_clicked()
{
    emit goToAllFromTransaction();
}
