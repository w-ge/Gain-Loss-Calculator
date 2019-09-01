#include "addsecuritydialog.h"
#include "ui_addsecuritydialog.h"

AddSecurityDialog::AddSecurityDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSecurityDialog)
{
    ui->setupUi(this);
    db = QSqlDatabase::database("securities");

}

AddSecurityDialog::~AddSecurityDialog()
{
    delete ui;
}

// See Header
void AddSecurityDialog::on_buttonBox_accepted()
{
    QSqlQuery query(db);

    // Check if the user has entered any text
    if(ui->tableName->text() != ""){

        // Check if the security already exists in the database
        query.exec(tr("Select COUNT(*) FROM sqlite_master WHERE type = 'table' AND name = '%1'").arg(ui->tableName->text()));
        query.next();
        if(query.value(0).toInt() > 0){
            QMessageBox msgBox;
            msgBox.setText(ui->tableName->text() + " already exists");
            msgBox.exec();
        }

        // Create the table
        else{
            query.exec(tr("CREATE TABLE [%1] ("
                          "[Id] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL"
                          ", [Day] bigint DEFAULT (23) NOT NULL"
                          ", [Month] bigint DEFAULT (06) NOT NULL"
                          ", [Year] bigint DEFAULT (2000) NOT NULL"
                          ", [Buy] bit DEFAULT (1) NOT NULL"
                          ", [Number] bigint DEFAULT (1) NOT NULL"
                          ", [Cost] decimal DEFAULT (0) NOT NULL"
                          ");").arg(ui->tableName->text()));
        }
    }

    // User did not enter any text
    else{
        QMessageBox msgBox;
        msgBox.setText("Security name cannot be blank");
        msgBox.exec();
    }
}
