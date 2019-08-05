#include "securitymenu.h"
#include "ui_securitymenu.h"

SecurityMenu::SecurityMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecurityMenu)
{
    ui->setupUi(this);

    db = QSqlDatabase::database("securities");
    build();
}

SecurityMenu::~SecurityMenu()
{
    delete ui;
}

void SecurityMenu::build(){
    QSqlQuery query(db);

    query.exec("SELECT name FROM sqlite_master WHERE type='table';");
    query.next();
    while (query.next()) {
        SecurityNode * sn = new SecurityNode(nullptr, query.value(0).toString());
        ui->securities->addWidget(sn);
        ui->securities->setAlignment (sn, Qt::AlignHCenter);
        connect(sn, SIGNAL(securityToTransaction(QString)), this, SLOT(linkTransaction(QString)));
        connect(sn, SIGNAL(deleteSecurityNode(QString)), this, SLOT(deleteSecurityNode(QString)));
    }
}

void SecurityMenu::linkTransaction(QString text){
    emit securityToTransaction(text);
}


void SecurityMenu::on_add_clicked()
{
    QSqlQuery query(db);

    QString text = QInputDialog::getText(this,"Add Security","Enter Security Name");
    if(!text.isEmpty()){
        query.exec(tr("Select COUNT(*) FROM sqlite_master WHERE type = 'table' AND name = '%1'").arg(text));
        query.next();
        if(query.value(0).toInt() > 0){
            qDebug() << "Table Already Exists";
        }
        else{
            query.exec(tr("CREATE TABLE [%1] ("
                          "[Id] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL"
                          ", [Day] bigint DEFAULT (23) NOT NULL"
                          ", [Month] bigint DEFAULT (06) NOT NULL"
                          ", [Year] bigint DEFAULT (2000) NOT NULL"
                          ", [Buy] bit DEFAULT (1) NOT NULL"
                          ", [Number] bigint DEFAULT (1) NOT NULL"
                          ", [SecurityDescription] text NULL"
                          ", [Cost] decimal DEFAULT (0) NOT NULL"
                          ", [Proceeds] decimal DEFAULT (0) NOT NULL"
                          ", [Commission] decimal DEFAULT (0) NOT NULL"
                          ");").arg(text));
            refresh();
        }
    }
}

void SecurityMenu::refresh(){
    QLayoutItem *child;
    while ((child = ui->securities->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }
    build();
}

void SecurityMenu::deleteSecurityNode(QString text){
    QSqlQuery query(db);

    query.exec(tr("DROP TABLE %1").arg(text));
    refresh();
}
