#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include "./TransactionNode/transactionnode.h"
#include "./TransactionScreen/transactionscreen.h"
#include "./EditScreen/editscreen.h"
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

    QSqlDatabase db;

private slots:
    void goToTransaction();
    void goToEdit();
};

#endif // STACKEDWIDGET_H
