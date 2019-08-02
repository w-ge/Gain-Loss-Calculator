#ifndef EDITSCREEN_H
#define EDITSCREEN_H

#include <QWidget>
#include <list>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include "../TransactionNode/transactionnode.h"


namespace Ui {
class EditScreen;
}

class EditScreen : public QWidget
{
    Q_OBJECT

public:
    explicit EditScreen(QWidget *parent = nullptr);
    ~EditScreen();

    void buildNodes();

signals:

    void goToTransaction();

private slots:
    void on_save_clicked();

    void on_addTransaction_clicked();

    void on_revert_clicked();

    void deleteThis(TransactionNode *);

    void on_cancel_clicked();

private:
    Ui::EditScreen *ui;
    QSqlDatabase db;
    std::list <TransactionNode *> nodes;
};

#endif // EDITSCREEN_H
