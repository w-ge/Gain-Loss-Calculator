#include "transactionscreen.h"
#include "ui_transactionscreen.h"

int TransactionScreen::description = 0;
int TransactionScreen::date = 1;
int TransactionScreen::buy = 2;
int TransactionScreen::sell = 3;
int TransactionScreen::price = 4;
int TransactionScreen::cost = 5;
int TransactionScreen::proceeds = 6;
int TransactionScreen::totalShares = 7;
int TransactionScreen::acq = 8;
int TransactionScreen::bookValue = 9;
int TransactionScreen::avgCostBase = 10;
int TransactionScreen::gain = 11;

int TransactionScreen::numOfColumns = 12;

TransactionScreen::TransactionScreen(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::TransactionScreen)
{
    ui->setupUi(this);

    numOfArgs = 10;
    tableName = name;

    QFont font = QFont("Helvetica", 14);

    ui->date->setFont(font);
    ui->buy->setFont(font);
    ui->sell->setFont(font);
    ui->description->setFont(font);
    ui->price->setFont(font);
    ui->cost->setFont(font);
    ui->proceeds->setFont(font);
    ui->acq->setFont(font);
    ui->totalShares->setFont(font);
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

// See Header
void TransactionScreen::on_edit_clicked()
{
    emit goToEdit(tableName);
}

// See Header
void TransactionScreen::build(){
    QSqlQuery query(db);
    double totalCost = 0;
    int totalShares = 0;
    double avgCostBase = 0;
    double totalGain = 0;
    int totalBuy = 0;
    int totalSell = 0;

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    int i = 1;

    // Iterate through all transactions
    while(query.next()){

        // Set Description
        QLabel * desc = new QLabel();
        desc->setText(tableName);
        desc->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(desc, i, TransactionScreen::description);

        // Set Date
        QLabel * date = new QLabel();
        date->setAlignment(Qt::AlignHCenter);
        date->setText(query.value(1).toString() + "/" +  query.value(2).toString() + "/" + query.value(3).toString());
        ui->transactions->addWidget(date, i, TransactionScreen::date );

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
                ui->transactions->addWidget(num, i, TransactionScreen::buy);
                ui->transactions->addWidget(cost, i, TransactionScreen::cost);
                totalBuy += query.value(5).toInt();
        }

        // If a SELL transaction, place the cost and number of shares in the appropriate place
        else {
            ui->transactions->addWidget(num, i, TransactionScreen::sell);
            ui->transactions->addWidget(cost, i, TransactionScreen::proceeds);
            totalSell += query.value(5).toInt();
        }

        // Set Price
        QLabel * price = new QLabel();
        price->setText(QString::number(query.value(6).toDouble() / query.value(5).toDouble(),'f',2));
        price->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(price, i, TransactionScreen::price);

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
                    ui->transactions->addWidget(acq, i, TransactionScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((-1 * avgCostBase * negativeShares) - (price->text().toDouble() * negativeShares),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, i, TransactionScreen::gain);
                    totalGain += (-1 * avgCostBase * negativeShares) - (price->text().toDouble() * negativeShares);

                    // Set positive side
                    totalCost = price->text().toDouble() * totalShares;

                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);

                    QLabel * acb = new QLabel();
                    avgCostBase = totalCost / totalShares;
                    acb->setText(QString::number(avgCostBase,'f',2));
                    acb->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acb, i, TransactionScreen::avgCostBase);

                }

                // If total shares stays in the negatives
                else{

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(num->text().toDouble() * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, i, TransactionScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((-1 * avgCostBase * num->text().toInt()) - cost->text().toDouble(),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, i, TransactionScreen::gain);
                    totalGain += (-1 * avgCostBase * num->text().toInt()) - cost->text().toDouble();

                    totalCost = avgCostBase * totalShares;

                    // Set Book Value
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(-1 * totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);
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
                ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);

                // Set ACB
                QLabel * acb = new QLabel();
                avgCostBase = totalCost / totalShares;
                acb->setText(QString::number(avgCostBase,'f',2));
                acb->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(acb, i, TransactionScreen::avgCostBase);

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
                ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);

                // Set ACB
                QLabel * acb = new QLabel();
                avgCostBase = totalCost / totalShares;
                acb->setText(QString::number(avgCostBase,'f',2));
                acb->setAlignment(Qt::AlignHCenter);
                ui->transactions->addWidget(acb, i, TransactionScreen::avgCostBase);
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
                    ui->transactions->addWidget(acq, i, TransactionScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number((price->text().toDouble() * positiveShares) - (avgCostBase * positiveShares),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, i, TransactionScreen::gain);
                    totalGain += (price->text().toDouble() * positiveShares) - (avgCostBase * positiveShares);

                    // Begin negative side
                    totalCost = -1 * price->text().toDouble() * totalShares;

                    // Set BookValue
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(-1 * totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);

                    // Set ACB
                    QLabel * acb = new QLabel();
                    avgCostBase = totalCost / totalShares;
                    acb->setText(QString::number(avgCostBase,'f',2));
                    acb->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acb, i, TransactionScreen::avgCostBase);
                }
                else{

                    // Set ACQ/BIV
                    QLabel * acq = new QLabel();
                    acq->setText(QString::number(num->text().toDouble() * avgCostBase,'f',2));
                    acq->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(acq, i, TransactionScreen::acq);

                    // Set Gain
                    QLabel * gain = new QLabel();
                    gain->setText(QString::number(cost->text().toDouble() - (avgCostBase * num->text().toInt()),'f',2));
                    gain->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(gain, i, TransactionScreen::gain);
                    totalGain += cost->text().toDouble() - (avgCostBase * num->text().toInt());

                    // Set BookValue
                    totalCost = avgCostBase * totalShares;
                    QLabel * bookVal = new QLabel();
                    bookVal->setText(QString::number(totalCost,'f',2));
                    bookVal->setAlignment(Qt::AlignHCenter);
                    ui->transactions->addWidget(bookVal, i, TransactionScreen::bookValue);
                }
            }
        }

        QLabel * totalSharesLabel = new QLabel();
        totalSharesLabel->setText(QString::number(totalShares,'f',2));
        totalSharesLabel->setAlignment(Qt::AlignHCenter);
        ui->transactions->addWidget(totalSharesLabel, i, TransactionScreen::totalShares);

        i++;
    }

    // Add a line to seperate transactions from totals
    for(int j = 0; j < TransactionScreen::numOfColumns; j++){
        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet(QString("background-color: white;"));
        ui->transactions->addWidget(line, i, j);
    }
    i++;

    // Set Total Gain
    QLabel * tGain = new QLabel();
    QFont font = tGain->font();
    font.setPointSize(14);
    tGain->setText(QString::number(totalGain,'f',2));
    tGain->setAlignment(Qt::AlignHCenter);
    tGain->setFont(font);
    ui->transactions->addWidget(tGain, i, TransactionScreen::gain);

    // Set Total Amount of Shares Bought
    QLabel * tBuy = new QLabel();
    tBuy->setText(QString::number(totalBuy));
    tBuy->setAlignment(Qt::AlignHCenter);
    tBuy->setFont(font);
    ui->transactions->addWidget(tBuy, i, TransactionScreen::buy);

    // Set Total Amount of Shares Sold
    QLabel * tSell = new QLabel();
    tSell->setText(QString::number(totalSell));
    tSell->setAlignment(Qt::AlignHCenter);
    tSell->setFont(font);
    ui->transactions->addWidget(tSell, i, TransactionScreen::sell);

    // Set Total Gain
    QLabel * totalText = new QLabel();
    totalText->setText("Total:");
    totalText->setFont(font);
    ui->transactions->addWidget(totalText, i, TransactionScreen::description);

    ui->transactions->setRowStretch(i + 1, 1);
}

// See Header
void TransactionScreen::on_back_clicked()
{
    emit goToMenu();
}

// See Header
void TransactionScreen::on_viewAll_clicked()
{
    emit goToAllFromTransaction();
}