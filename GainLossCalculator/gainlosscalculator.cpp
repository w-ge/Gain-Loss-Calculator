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
        this->setWindowState(Qt::WindowMaximized);
    }
}

void GainLossCalculator::calculateACB(){
    double totalCost = 0;
    double totalShares = 0;

    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        if((*it)->buy){
            totalCost += (*it)->price * (*it)->number;
            totalShares += (*it)->number;
            (*it)->setACB(QString::number(totalCost / totalShares,'f',2));
        }
        else {
            (*it)->setBookValue(QString::number(totalCost / totalShares * (*it)->number,'f',2));
        }
    }
}

void GainLossCalculator::buildNodes(){
    QSqlQuery query(db);

    query.exec("SELECT COUNT(*) FROM Security1;");
    query.next();

    int numOfNodes = query.value(0).toInt();

    query.exec("SELECT * FROM Security1");
    query.next();

    for(int i = 0; i < numOfNodes ; i++){
        nodes.push_back(new TransactionNode(nullptr, query.value(1).toInt(), query.value(2).toInt(), query.value(3).toInt(),
                                            query.value(4).toBool(), query.value(5).toInt(), query.value(6).toString(), query.value(7).toDouble(),
                                            query.value(8).toDouble(), query.value(9).toDouble()));
        query.next();

    }

    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        ui->transactions->addWidget(*it);
    }
    ui->transactions->addStretch();
    calculateACB();
}
GainLossCalculator::~GainLossCalculator()
{
    delete ui;
}

void GainLossCalculator::on_save_clicked()
{
    QSqlQuery query(db);
    query.exec("DELETE FROM Security1;");

    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        (*it)->update();
        query.prepare("INSERT INTO Security1 (Day, Month, Year, Buy, Number, SecurityDescription, Cost, Proceeds, Commission) VALUES "
                      "(:day, :month, :year, :buy, :number, :desc, :cost, :proceeds, :commission)");
        query.bindValue(":day", (*it)->day);
        query.bindValue(":month", (*it)->month);
        query.bindValue(":year", (*it)->year);
        query.bindValue(":number", (*it)->number);
        query.bindValue(":buy", (*it)->buy);
        query.bindValue(":desc", (*it)->description);
        query.bindValue(":cost", (*it)->cost);
        query.bindValue(":proceeds", (*it)->proceeds);
        query.bindValue(":commission", (*it)->commission);
        query.exec();
    }
    calculateACB();
}
