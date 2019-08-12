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

    void build();
    void refresh();
signals:
    void securityToTransaction(QString);
    void goToMerged();

private:
    Ui::SecurityMenu *ui;
    QSqlDatabase db;

private slots:
    void linkTransaction(QString);
    void on_add_clicked();
    void deleteSecurityNode(QString);
    void on_merge_clicked();
};

#endif // SECURITYMENU_H
