#include "securitynode.h"
#include "ui_securitynode.h"

SecurityNode::SecurityNode(QWidget *parent, QString text) :
    QWidget(parent),
    ui(new Ui::SecurityNode)
{
    ui->setupUi(this);
    ui->pushButton->setText(text);
    QFont font = QFont("Helvetica", 14);

    ui->pushButton->setFont(font);
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgb(128, 162, 255);}"
                                  "QPushButton:hover {border: 5px solid black};");
}

SecurityNode::~SecurityNode()
{
    delete ui;
}

void SecurityNode::on_pushButton_clicked()
{
    emit securityToTransaction(ui->pushButton->text());
}

void SecurityNode::on_delete_2_clicked()
{
    emit deleteSecurityNode(ui->pushButton->text());
}
