#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include "./TransactionNode/transactionnode.h"
#include "./TransactionScreen/transactionscreen.h"
#include "./EditScreen/editscreen.h"
#include "./SecurityMenu/securitymenu.h"
#include "./MergedScreen/mergedscreen.h"
#include <QStackedWidget>
#include <QFontDatabase>

namespace Ui {
class StackedWidget;
}

class StackedWidget : public QStackedWidget
{
    Q_OBJECT

public:
    explicit StackedWidget(QWidget *parent = nullptr);
    ~StackedWidget();

private:
    Ui::StackedWidget *ui;
    TransactionScreen * ts;
    EditScreen * es;
    SecurityMenu * sm;
    MergedScreen * ms;

    QSqlDatabase db;

private slots:
    void goToTransaction(QString);
    void goToEdit(QString);
    void securityToTransaction(QString);
    void goToMenu();
    void goToMerged();
    void mergedToSecurity();
    void goToAllFromTransaction();
};

#endif // STACKEDWIDGET_H
