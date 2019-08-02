#include "stackedwidget.h"
#include "ui_stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::StackedWidget)
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
        ts = new TransactionScreen();

        connect(ts, SIGNAL(goToEdit()), this, SLOT(goToEdit()));

        this->insertWidget(0, ts);

        this->setWindowState(Qt::WindowMaximized);
        this->setWindowTitle("Gain and Loss Calculator");
    }    
}

StackedWidget::~StackedWidget()
{
    delete ui;
}

void StackedWidget::goToEdit(){
    es = new EditScreen();
    this->insertWidget(1, es);
    this->setCurrentWidget(es);

    this->removeWidget(ts);
    ts->deleteLater();

    connect(es, SIGNAL(goToTransaction()), this, SLOT(goToTransaction()));
}

void StackedWidget::goToTransaction(){
    ts = new TransactionScreen();
    this->insertWidget(0, ts);
    this->setCurrentWidget(ts);
    connect(ts, SIGNAL(goToEdit()), this, SLOT(goToEdit()));

    this->removeWidget(es);
    es->deleteLater();
}
