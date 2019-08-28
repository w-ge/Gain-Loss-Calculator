#ifndef SECURITYNODE_H
#define SECURITYNODE_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class SecurityNode;
}

class SecurityNode : public QWidget
{
    Q_OBJECT

public:
    explicit SecurityNode(QWidget *parent = nullptr, QString text = "");
    ~SecurityNode();

signals:
    void securityToTransaction(QString);
    void deleteSecurityNode(QString);

private slots:

    // Send a signal to delete this node if the Delete button is pressed
    void on_delete_2_clicked();

    // Send signal to go to transaction screen if the Central button is pressed
    void on_go_clicked();

private:
    Ui::SecurityNode *ui;
};

#endif // SECURITYNODE_H
