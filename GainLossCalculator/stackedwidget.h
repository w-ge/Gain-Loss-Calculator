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

    // Go from transaction screen to edit
    void goToEdit(QString);

    // Go from main menu to transaction screen
    void securityToTransaction(QString);

    // Go from transaction screen to main menu
    void goToMenu();

    // Go from main menu to merged screen
    void goToMerged();

    // Go from merged screen to main menu
    void mergedToSecurity();

    // Go to merged screen from transaction screen
    void goToAllFromTransaction();
};

#endif // STACKEDWIDGET_H
