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

// See Header
void SecurityMenu::build(){
    QSqlQuery query(db);

    // Iterate through all transactions and create a SecurityNode for each
    query.exec("SELECT name FROM sqlite_master WHERE type='table';");
    query.next();
    while (query.next()) {
        SecurityNode * sn = new SecurityNode(nullptr, query.value(0).toString());
        ui->securities->addWidget(sn);
        ui->securities->setAlignment (sn, Qt::AlignHCenter);

        // Connect each signal of the SecurityNode to a slot in this class
        connect(sn, SIGNAL(securityToTransaction(QString)), this, SLOT(linkTransaction(QString)));
        connect(sn, SIGNAL(deleteSecurityNode(QString)), this, SLOT(deleteSecurityNode(QString)));
    }
}

// See Header
void SecurityMenu::linkTransaction(QString text){
    emit securityToTransaction(text);
}


// See Header
void SecurityMenu::on_add_clicked()
{
    QSqlQuery query(db);

    // Create dialog to ask user for name of security
    AddSecurityDialog * sd = new AddSecurityDialog();
    sd->exec();
    refresh();
}

// See Header
void SecurityMenu::refresh(){
    QLayoutItem *child;

    // Remove all nodes in the list
    while ((child = ui->securities->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    // Rebuild all nodes using the data in the database
    build();
}

// See Header
void SecurityMenu::deleteSecurityNode(QString text){
    QSqlQuery query(db);
    query.exec(tr("DROP TABLE '%1'").arg(text));
    refresh();
}

// See Header
void SecurityMenu::on_merge_clicked()
{
    emit goToMerged();
}
