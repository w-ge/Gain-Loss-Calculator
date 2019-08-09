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
    void on_pushButton_clicked();

    void on_delete_2_clicked();

private:
    Ui::SecurityNode *ui;
};

#endif // SECURITYNODE_H
