#include "gainlosscalculator.h"
#include "ui_gainlosscalculator.h"

GainLossCalculator::GainLossCalculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GainLossCalculator)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE", "securities");
    db.setDatabaseName("../data.db");

    if(!db.open()){
        qDebug()<< "Failed";
        return;
    }

    else{
        qDebug()<< "Connected";
        buildNodes();
        calculateACB();
        this->setWindowState(Qt::WindowMaximized);
    }
}

void GainLossCalculator::calculateACB(){
    int buyTotal = 0;
    int buyShares = 0;
    int sellShares = 0;
    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        if((*it)->buy){
            buyTotal += (*it)->price * (*it)->number;
            buyShares += (*it)->number;
        }
        else {
            sellShares += (*it)->number;
        }
    }
    qDebug() << buyShares + sellShares;
}

void GainLossCalculator::buildNodes(){
    QSqlQuery query(db);

    query.exec("SELECT COUNT(*) FROM Security1;");
    query.next();

    int numOfNodes = query.value(0).toInt();

    query.exec("SELECT * FROM Security1");
    query.next();

    for(int i = 0; i < numOfNodes ; i++){
        nodes.push_back(new TransactionNode(nullptr, query.value(1).toString(), query.value(2).toBool(),
                                            query.value(3).toInt(), query.value(4).toString(), query.value(5).toInt(),
                                            query.value(6).toInt(), query.value(7).toInt(), query.value(8).toInt()));
        query.next();

    }

    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        ui->transactions->addWidget(*it);
    }
    ui->transactions->addStretch();

}
GainLossCalculator::~GainLossCalculator()
{
    delete ui;
}

void GainLossCalculator::on_save_clicked()
{
    /*QSqlQuery query(db);
    query.exec("DELETE FROM Security1;");

    query.prepare("INSERT INTO Security1 (Date, Type, SecurityDescription, Price, Cost, Proceeds, Commission) VALUES (:date, :type, :desc, :price, :cost, :proceeds, :commission)");
    tn->update();
    query.bindValue(":date", tn->date);
    query.bindValue(":type", tn->type);
    query.bindValue(":desc", tn->description);
    query.bindValue(":price", tn->price.toDouble());
    query.bindValue(":cost", tn->cost.toDouble());
    query.bindValue(":proceeds", tn->proceeds.toDouble());
    query.bindValue(":commission", tn->commission.toDouble());
    query.exec();*/
}
