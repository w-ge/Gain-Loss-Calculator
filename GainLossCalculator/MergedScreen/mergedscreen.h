#ifndef MERGEDSCREEN_H
#define MERGEDSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class MergedScreen;
}

class MergedScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MergedScreen(QWidget *parent = nullptr);
    ~MergedScreen();

    // Creates the table of all securities
    void build();

    // Creates the table for the security named tableName
    void buildNode(QString tableName, int * row);

signals:

    // Go back to main menu signal
    void mergedToSecurity();

private slots:

    // Go back to main menu when back button is clicked
    void on_back_clicked();

private:
    Ui::MergedScreen *ui;
    QSqlDatabase db;
};

#endif // MERGEDSCREEN_H
