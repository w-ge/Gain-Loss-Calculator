#ifndef ADDSECURITYDIALOG_H
#define ADDSECURITYDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class AddSecurityDialog;
}

class AddSecurityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddSecurityDialog(QWidget *parent = nullptr);
    ~AddSecurityDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddSecurityDialog *ui;
    QSqlDatabase db;
};

#endif // ADDSECURITYDIALOG_H
