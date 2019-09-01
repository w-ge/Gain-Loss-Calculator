#include "mergedscreen.h"
#include "ui_mergedscreen.h"

int MergedScreen::description = 0;
int MergedScreen::date = 1;
int MergedScreen::buy = 2;
int MergedScreen::sell = 3;
int MergedScreen::price = 4;
int MergedScreen::cost = 5;
int MergedScreen::proceeds = 6;
int MergedScreen::totalShares = 7;
int MergedScreen::acq = 8;
int MergedScreen::bookValue = 9;
int MergedScreen::avgCostBase = 10;
int MergedScreen::gain = 11;

int MergedScreen::numOfColumns = 12;

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
    ui->totalShares->setFont(font);
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
    int totalShares = 0;
    double avgCostBase = 0;
    double totalGain = 0;
    int totalBuy = 0;
    int totalSell = 0;

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    while(query.next()){

        // Set Description
        QLabel * desc = new QLabel();
        desc->setText(tableName);
        desc->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(desc, *row, MergedScreen::description);

        // Set Date
        QLabel * date = new QLabel();
        date->setAlignment(Qt::AlignHCenter);
        date->setText(query.value(1).toString() + "/" +  query.value(2).toString() + "/" + query.value(3).toString());
        ui->transactions->addWidget(date, *row, MergedScreen::date );

        // Set Number of Shares
        QLabel * num = new QLabel();
        num->setText(query.value(5).toString());
        num->setAlignment(Qt::AlignHCenter);

        // Set Cost Text
        QLabel * cost = new QLabel();
        cost->setText(QString::number(query.value(6).toDouble(),'f',2));
        cost->setAlignment(Qt::AlignHCenter);

        // If a BUY transaction, place the cost and number of shares in the appropriate place
        if(query.value(4).toBool()){
                ui->transactions->addWidget(num, *row, MergedScreen::buy);
                ui->transactions->addWidget(cost, *row, MergedScreen::cost);
                totalBuy += query.value(5).toInt();
        }

        // If a SELL transaction, place the cost and number of shares in the appropriate place
        else {
            ui->transactions->addWidget(num, *row, MergedScreen::sell);
            ui->transactions->addWidget(cost, *row, MergedScreen::proceeds);
            totalSell += query.value(5).toInt();
        }

        // Set Price
        QLabel * price = new QLabel();
        price->setText(QString::number(query.value(6).toDouble() / query.value(5).toDouble(),'f',2));
        price->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(price, *row, MergedScreen::price);

        // If the transaction is a BUY Transaction,
        if(query.value(4).toBool()){

            // If the total shares was negative
            if(totalShares < 0){
                totalShares += num->text().toInt();

                // If the total shares crosses 0
                if(totalShares > 0){

                    // Calculate the amount of shares that was in the negative side
                    int negativeShares =  num->text().toInt() - totalShares;

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(negativeShares * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, *row, MergedScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((-1 * avgCostBase * negativeShares) - (price->text().toDouble() * negativeShares),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, *row, MergedScreen::gain);
                    totalGain += (-1 * avgCostBase * negativeShares) - (price->text().toDouble() * negativeShares);

                    // Set positive side
                    totalCost = price->text().toDouble() * totalShares;

                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);

                    QLabel * acb = new QLabel();
                    avgCostBase = totalCost / totalShares;
                    acb->setText(QString::number(avgCostBase,'f',2));
                    acb->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acb, *row, MergedScreen::avgCostBase);

                }

                // If total shares stays in the negatives
                else{

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(num->text().toDouble() * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, *row, MergedScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((-1 * avgCostBase * num->text().toInt()) - cost->text().toDouble(),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, *row, MergedScreen::gain);
                    totalGain += (-1 * avgCostBase * num->text().toInt()) - cost->text().toDouble();

                    totalCost = avgCostBase * totalShares;

                    // Set Book Value
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(-1 * totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);
                }

            }

            // If total shares is positive
            else{
                totalShares += num->text().toInt();
                totalCost += query.value(6).toDouble();

                // Set Bookvalue
                QLabel * bookVal = new QLabel();
                bookVal->setText(QString::number(totalCost,'f',2));
                bookVal->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);

                // Set ACB
                QLabel * acb = new QLabel();
                avgCostBase = totalCost / totalShares;
                acb->setText(QString::number(avgCostBase,'f',2));
                acb->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(acb, *row, MergedScreen::avgCostBase);

            }

        }

        // If transaction is SELL transaction
        else{

            // If total shares was negative
            if(totalShares <= 0){
                totalShares -= num->text().toInt();
                totalCost += query.value(6).toDouble();

                // Set BookValue
                QLabel * bookVal = new QLabel();
                bookVal->setText(QString::number(-1 * totalCost,'f',2));
                bookVal->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);

                // Set ACB
                QLabel * acb = new QLabel();
                avgCostBase = totalCost / totalShares;
                acb->setText(QString::number(avgCostBase,'f',2));
                acb->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(acb, *row, MergedScreen::avgCostBase);
            }

            // If total shares are positive
            else{
                totalShares -= num->text().toInt();

                // If total shares crosses zero
                if(totalShares < 0){
                    int positiveShares =  num->text().toInt() + totalShares;

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(positiveShares * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, *row, MergedScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((price->text().toDouble() * positiveShares) - (avgCostBase * positiveShares),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, *row, MergedScreen::gain);
                    totalGain += (price->text().toDouble() * positiveShares) - (avgCostBase * positiveShares);

                    // Begin negative side
                    totalCost = -1 * price->text().toDouble() * totalShares;

                    // Set BookValue
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(-1 * totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);

                    // Set ACB
                    QLabel * acb = new QLabel();
                    avgCostBase = totalCost / totalShares;
                    acb->setText(QString::number(avgCostBase,'f',2));
                    acb->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acb, *row, MergedScreen::avgCostBase);
                }
                else{

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(num->text().toDouble() * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, *row, MergedScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number(cost->text().toDouble() - (avgCostBase * num->text().toInt()),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, *row, MergedScreen::gain);
                    totalGain += cost->text().toDouble() - (avgCostBase * num->text().toInt());

                    // Set BookValue
                    totalCost = avgCostBase * totalShares;
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, *row, MergedScreen::bookValue);
                }
            }
        }

        QLabel * totalSharesLabel = new QLabel();
        totalSharesLabel->setText(QString::number(totalShares,'f',2));
        totalSharesLabel->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(totalSharesLabel, *row, MergedScreen::totalShares);

        (*row)++;
    }

    // Add a line to seperate transactions from totals
    for(int j = 0; j < MergedScreen::numOfColumns; j++){
        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet(QString("background-color: white;"));
        ui->transactions->addWidget(line, *row, j);
    }
    (*row)++;

    // Set Total Gain
    QLabel * tGain = new QLabel();
    QFont font = tGain->font();
    font.setPointSize(14);
    tGain->setText(QString::number(totalGain,'f',2));
    tGain->setAlignment(Qt::AlignHCenter);
    tGain->setFont(font);
    ui->transactions->addWidget(tGain, *row, MergedScreen::gain);

    // Set Total Amount of Shares Bought
    QLabel * tBuy = new QLabel();
    tBuy->setText(QString::number(totalBuy));
    tBuy->setAlignment(Qt::AlignHCenter);
    tBuy->setFont(font);
    ui->transactions->addWidget(tBuy, *row, MergedScreen::buy);

    // Set Total Amount of Shares Sold
    QLabel * tSell = new QLabel();
    tSell->setText(QString::number(totalSell));
    tSell->setAlignment(Qt::AlignHCenter);
    tSell->setFont(font);
    ui->transactions->addWidget(tSell, *row, MergedScreen::sell);

    // Set Total Gain
    QLabel * totalText = new QLabel();
    totalText->setText("Total:");
    totalText->setFont(font);
    ui->transactions->addWidget(totalText, *row, MergedScreen::description);

    (*row)++;

    // Create another border line
    for(int j = 0; j < MergedScreen::numOfColumns; j++){
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
