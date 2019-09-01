#ifndef SECURITYMENU_H
#define SECURITYMENU_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QInputDialog>
#include <QDebug>
#include "securitynode.h"
#include "addsecuritydialog.h"

namespace Ui {
class SecurityMenu;
}

class SecurityMenu : public QWidget
{
    Q_OBJECT

public:
    explicit SecurityMenu(QWidget *parent = nullptr);
    ~SecurityMenu();

    // Creates the list of securities
    void build();

    // Refreshes the list of securities
    void refresh();

signals:

    void securityToTransaction(QString);
    void goToMerged();

private:
    Ui::SecurityMenu *ui;
    QSqlDatabase db;

private slots:

    // Sends the signal to go to the Transaction Screen for that security
    void linkTransaction(QString);

    // Ask user to create a new security when Add button is clicked
    void on_add_clicked();

    // Delete the security if the delete button is pressed for that security
    void deleteSecurityNode(QString);

    // Go to merged screen
    void on_merge_clicked();
};

#endif // SECURITYMENU_H
