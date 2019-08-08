#ifndef MERGEDSCREENNODE_H
#define MERGEDSCREENNODE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QLabel>

namespace Ui {
class MergedScreenNode;
}

class MergedScreenNode : public QWidget
{
    Q_OBJECT

public:
    explicit MergedScreenNode(QWidget *parent = nullptr, QString tableName = "");
    ~MergedScreenNode();

    void build();

private:
    Ui::MergedScreenNode *ui;
    QString tableName;
    QSqlDatabase db;
};

#endif // MERGEDSCREENNODE_H
