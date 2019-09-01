#include "stackedwidget.h"
#include "ui_stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::StackedWidget)
{
    ui->setupUi(this);
    QFontDatabase::addApplicationFont(":/font/Fonts/Helvetica.ttf");

    // Open Database
    db = QSqlDatabase::addDatabase("QSQLITE", "securities");
    db.setDatabaseName("../data.db");

    if(!db.open()){
        qDebug()<< "Failed";
        return;
    }

    else{

        qDebug()<< "Connected";

        // Create main Menu
        sm = new SecurityMenu();
        this->insertWidget(0, sm);
        connect(sm, SIGNAL(securityToTransaction(QString)), this, SLOT(securityToTransaction(QString)));
        connect(sm, SIGNAL(goToMerged()), this, SLOT(goToMerged()));\

        this->setWindowState(Qt::WindowMaximized);
        this->setWindowTitle("Gain and Loss Calculator");
    }    
}

StackedWidget::~StackedWidget()
{
    delete ui;
}

// See Header
void StackedWidget::goToEdit(QString text){
    es = new EditScreen(nullptr, text);
    this->insertWidget(2, es);
    this->setCurrentWidget(es);

    this->removeWidget(ts);
    ts->deleteLater();

    connect(es, SIGNAL(goToTransaction(QString)), this, SLOT(goToTransaction(QString)));
}

// See Header
void StackedWidget::goToTransaction(QString text){
    ts = new TransactionScreen(nullptr, text);
    this->insertWidget(1, ts);
    this->setCurrentWidget(ts);
    connect(ts, SIGNAL(goToEdit(QString)), this, SLOT(goToEdit(QString)));
    connect(ts, SIGNAL(goToMenu()), this, SLOT(goToMenu()));
    connect(ts, SIGNAL(goToAllFromTransaction()), this, SLOT(goToAllFromTransaction()));

    this->removeWidget(es);
    es->deleteLater();
}

// See Header
void StackedWidget::securityToTransaction(QString text){
    ts = new TransactionScreen(nullptr, text);
    this->insertWidget(1, ts);
    this->setCurrentWidget(ts);
    connect(ts, SIGNAL(goToEdit(QString)), this, SLOT(goToEdit(QString)));
    connect(ts, SIGNAL(goToMenu()), this, SLOT(goToMenu()));
    connect(ts, SIGNAL(goToAllFromTransaction()), this, SLOT(goToAllFromTransaction()));

    this->removeWidget(sm);
    sm->deleteLater();
}

// See Header
void StackedWidget::goToMenu(){
    sm = new SecurityMenu();
    this->insertWidget(0, sm);
    this->setCurrentWidget(sm);
    connect(sm, SIGNAL(securityToTransaction(QString)), this, SLOT(securityToTransaction(QString)));
    connect(sm, SIGNAL(goToMerged()), this, SLOT(goToMerged()));

    this->removeWidget(ts);
    ts->deleteLater();
}

// See Header
void StackedWidget::goToMerged(){
    ms = new MergedScreen();
    this->insertWidget(3, ms);
    this->setCurrentWidget(ms);
    connect(ms, SIGNAL(mergedToSecurity()), this, SLOT(mergedToSecurity()));

    this->removeWidget(sm);
    sm->deleteLater();
}

// See Header
void StackedWidget::mergedToSecurity(){
    sm = new SecurityMenu();
    this->insertWidget(0, sm);
    this->setCurrentWidget(sm);
    connect(sm, SIGNAL(securityToTransaction(QString)), this, SLOT(securityToTransaction(QString)));
    connect(sm, SIGNAL(goToMerged()), this, SLOT(goToMerged()));

    this->removeWidget(ms);
    ms->deleteLater();
}

// See Header
void StackedWidget::goToAllFromTransaction(){
    ms = new MergedScreen();
    this->insertWidget(3, ms);
    this->setCurrentWidget(ms);
    connect(ms, SIGNAL(mergedToSecurity()), this, SLOT(mergedToSecurity()));

    this->removeWidget(ts);
    ts->deleteLater();
}
