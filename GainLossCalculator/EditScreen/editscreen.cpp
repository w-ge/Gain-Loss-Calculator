#include "editscreen.h"
#include "ui_editscreen.h"

EditScreen::EditScreen(QWidget *parent, QString text) :
    QWidget(parent),
    ui(new Ui::EditScreen)
{
    ui->setupUi(this);

    db = QSqlDatabase::database("securities");

    tableName = text;
    buildNodes();

    this->setStyleSheet("QScrollBar:vertical {background: white;}"
                        "QScrollBar:handle:vertical {background: grey;}");

    QFont font = QFont("Helvetica", 14);

    ui->Date->setFont(font);
    ui->Buy->setFont(font);
    ui->Sell->setFont(font);
    ui->CostProceeds->setFont(font);
    ui->Desc->setFont(font);
    ui->Commission->setFont(font);
}


void EditScreen::buildNodes(){
    QSqlQuery query(db);

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    while(query.next()){
        nodes.push_back(new TransactionNode(nullptr, query.value(1).toInt(), query.value(2).toInt(), query.value(3).toInt(),
                                            query.value(4).toBool(), query.value(5).toInt(), tableName, query.value(6).toDouble(),
                                            query.value(7).toDouble()));
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
    query.exec(tr("DELETE FROM %1;").arg(tableName));

    qDebug() << tableName;

    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        (*it)->update();
        query.prepare(tr("INSERT INTO %1 (Day, Month, Year, Buy, Number, Cost, Commission) VALUES "
                      "(:day, :month, :year, :buy, :number, :cost, :commission)").arg(tableName));
        query.bindValue(":day", (*it)->day);
        query.bindValue(":month", (*it)->month);
        query.bindValue(":year", (*it)->year);
        query.bindValue(":number", (*it)->number);
        query.bindValue(":buy", (*it)->buy);
        query.bindValue(":cost", (*it)->cost);
        query.bindValue(":commission", (*it)->commission);
        query.exec();
    }
}

void EditScreen::on_addTransaction_clicked()
{
    nodes.push_back(new TransactionNode(nullptr, 1, 1, 2000,
                                        true, 1, tableName, 0,
                                        0));
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
    emit goToTransaction(tableName);
}
