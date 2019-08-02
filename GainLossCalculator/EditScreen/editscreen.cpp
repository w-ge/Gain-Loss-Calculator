#include "editscreen.h"
#include "ui_editscreen.h"

EditScreen::EditScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditScreen)
{
    ui->setupUi(this);

    db = QSqlDatabase::database("securities");
    buildNodes();


}


void EditScreen::buildNodes(){
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
        connect(*it, SIGNAL(deleteThis(TransactionNode*)), this, SLOT(deleteThis(TransactionNode *)));
    }
    ui->transactions->addStretch();
}
EditScreen::~EditScreen()
{
    delete ui;
}

void EditScreen::deleteThis(TransactionNode * tn){
    nodes.remove(tn);
    ui->transactions->removeWidget(tn);
    delete tn;
}

void EditScreen::on_save_clicked()
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
}

void EditScreen::on_addTransaction_clicked()
{
    nodes.push_back(new TransactionNode(nullptr, 1, 1, 2000,
                                        true, 1, "", 0,
                                        0, 0));
    ui->transactions->insertWidget(ui->transactions->count()-1, nodes.back());

    connect(nodes.back(), SIGNAL(deleteThis(TransactionNode*)), this, SLOT(deleteThis(TransactionNode *)));
}


void EditScreen::on_revert_clicked()
{
    QLayoutItem *child;
    while ((child = ui->transactions->takeAt(0)) != nullptr) {
        delete child->widget();
    }
    nodes.clear();
    buildNodes();
}

void EditScreen::on_cancel_clicked()
{
    emit goToTransaction();
}
