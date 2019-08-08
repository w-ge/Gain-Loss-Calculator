#include "mergedscreen.h"
#include "ui_mergedscreen.h"

MergedScreen::MergedScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MergedScreen)
{
    ui->setupUi(this);
    db = QSqlDatabase::database("securities");
    build();

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


void MergedScreen::on_back_clicked()
{
    emit mergedToSecurity();
}

void MergedScreen::build(){
    QSqlQuery query(db);

    query.exec("SELECT name FROM sqlite_master WHERE type='table';");
    query.next();
    int i = 1;
    while (query.next()) {
        MergedScreenNode * msn = new MergedScreenNode(nullptr, query.value(0).toString());
        ui->securities->addWidget(msn, i, 0);
        i++;
    }

    ui->securities->setRowStretch(i + 1, 1);
}
