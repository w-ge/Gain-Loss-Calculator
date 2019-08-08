#ifndef MERGEDSCREEN_H
#define MERGEDSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "mergedscreennode.h"


namespace Ui {
class MergedScreen;
}

class MergedScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MergedScreen(QWidget *parent = nullptr);
    ~MergedScreen();

    void build();

signals:
    void mergedToSecurity();

private slots:

    void on_back_clicked();

private:
    Ui::MergedScreen *ui;
    QSqlDatabase db;
};

#endif // MERGEDSCREEN_H
