#include "editscreen.h"
#include "ui_editscreen.h"

EditScreen::EditScreen(QWidget *parent, QString table) :
    QWidget(parent),
    ui(new Ui::EditScreen)
{
    ui->setupUi(this);

    db = QSqlDatabase::database("securities");

    tableName = table;
    buildNodes();

    ui->back->setText("Back To " + tableName);

    // Set style of scrollbar
    this->setStyleSheet("QScrollBar:vertical {background: grey;}"
                        "QScrollBar:handle:vertical {background: white;}");

    // Set the font for the titles
    QFont font = QFont("Helvetica", 14);
    ui->Date->setFont(font);
    ui->Buy->setFont(font);
    ui->Sell->setFont(font);
    ui->CostProceeds->setFont(font);
    ui->Desc->setFont(font);

}

// See Header
void EditScreen::buildNodes(){
    QSqlQuery query(db);

    query.prepare(tr("SELECT * FROM %1;").arg(tableName));
    query.exec();

    // Add a new TransactionNode to a linked list
    while(query.next()){
        nodes.push_back(new TransactionNode(nullptr, query.value(1).toInt(), query.value(2).toInt(), query.value(3).toInt(),
                                            query.value(4).toBool(), query.value(5).toInt(), tableName, query.value(6).toDouble()));
    }

    // Connect this class to each of the TransactionNode's delete buttons to delete the node when pressed
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

// See Header
void EditScreen::deleteThis(TransactionNode * tn){
    nodes.remove(tn);
    ui->transactions->removeWidget(tn);
    delete tn;
}

// See Header
void EditScreen::save(){

    // Delete everything from the database
    QSqlQuery query(db);
    query.exec(tr("DELETE FROM %1;").arg(tableName));

    // Run through each TransactionNode, read each node's data, and save it to database
    for(std::list<TransactionNode *>::iterator it = nodes.begin(); it != nodes.end(); it++){
        (*it)->update();
        query.prepare(tr("INSERT INTO %1 (Day, Month, Year, Buy, Number, Cost) VALUES "
                      "(:day, :month, :year, :buy, :number, :cost)").arg(tableName));
        query.bindValue(":day", (*it)->day);
        query.bindValue(":month", (*it)->month);
        query.bindValue(":year", (*it)->year);
        query.bindValue(":number", (*it)->number);
        query.bindValue(":buy", (*it)->buy);
        query.bindValue(":cost", (*it)->cost);
        query.exec();
    }
}

// See Header
void EditScreen::on_addTransaction_clicked()
{
    nodes.push_back(new TransactionNode(nullptr, 1, 1, 2000,
                                        true, 1, tableName, 0));
    ui->transactions->insertWidget(ui->transactions->count()-1, nodes.back());

    connect(nodes.back(), SIGNAL(deleteThis(TransactionNode*)), this, SLOT(deleteThis(TransactionNode *)));
}

// See Header
void EditScreen::on_revert_clicked()
{
    // Remove every TransactionNode from the list
    QLayoutItem *child;
    while ((child = ui->transactions->takeAt(0)) != nullptr) {
        delete child->widget();
    }
    nodes.clear();

    // Rebuild the list by reading from database
    buildNodes();
}

// See Header
void EditScreen::on_back_clicked()
{
    save();
    emit goToTransaction(tableName);
}
