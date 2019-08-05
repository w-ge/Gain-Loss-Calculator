#include "stackedwidget.h"
#include "ui_stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::StackedWidget)
{
    ui->setupUi(this);
    QFontDatabase::addApplicationFont(":/font/Fonts/Helvetica.ttf");

    db = QSqlDatabase::addDatabase("QSQLITE", "securities");
    db.setDatabaseName("../data.db");

    if(!db.open()){
        qDebug()<< "Failed";
        return;
    }

    else{

        qDebug()<< "Connected";
        sm = new SecurityMenu();
        this->insertWidget(0, sm);
        connect(sm, SIGNAL(securityToTransaction(QString)), this, SLOT(securityToTransaction(QString)));

        this->setWindowState(Qt::WindowMaximized);
        this->setWindowTitle("Gain and Loss Calculator");
    }    
}

StackedWidget::~StackedWidget()
{
    delete ui;
}

void StackedWidget::goToEdit(QString text){
    es = new EditScreen(nullptr, text);
    this->insertWidget(2, es);
    this->setCurrentWidget(es);

    this->removeWidget(ts);
    ts->deleteLater();

    connect(es, SIGNAL(goToTransaction(QString)), this, SLOT(goToTransaction(QString)));
}

void StackedWidget::goToTransaction(QString text){
    ts = new TransactionScreen(nullptr, text);
    this->insertWidget(1, ts);
    this->setCurrentWidget(ts);
    connect(ts, SIGNAL(goToEdit(QString)), this, SLOT(goToEdit(QString)));
    connect(ts, SIGNAL(goToMenu()), this, SLOT(goToMenu()));

    this->removeWidget(es);
    es->deleteLater();
}

void StackedWidget::securityToTransaction(QString text){
    ts = new TransactionScreen(nullptr, text);
    this->insertWidget(1, ts);
    this->setCurrentWidget(ts);
    connect(ts, SIGNAL(goToEdit(QString)), this, SLOT(goToEdit(QString)));
    connect(ts, SIGNAL(goToMenu()), this, SLOT(goToMenu()));

    this->removeWidget(sm);
    sm->deleteLater();
}
void StackedWidget::goToMenu(){
    sm = new SecurityMenu();
    this->insertWidget(0, sm);
    this->setCurrentWidget(sm);
    connect(sm, SIGNAL(securityToTransaction(QString)), this, SLOT(securityToTransaction(QString)));

    this->removeWidget(ts);
    ts->deleteLater();
}
