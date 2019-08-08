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
    AddSecurityDialog * sd = new AddSecurityDialog();
    sd->exec();
    refresh();
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

void SecurityMenu::on_merge_clicked()
{
    emit goToMerged();
}
