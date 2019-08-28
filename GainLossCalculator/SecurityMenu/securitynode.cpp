#include "securitynode.h"
#include "ui_securitynode.h"

SecurityNode::SecurityNode(QWidget *parent, QString text) :
    QWidget(parent),
    ui(new Ui::SecurityNode)
{
    ui->setupUi(this);
    ui->go->setText(text);

    QFont font = QFont("Helvetica", 14);
    ui->go->setFont(font);
    ui->go->setStyleSheet("QPushButton{background-color: rgb(128, 162, 255);}"
                                  "QPushButton:hover {border: 5px solid black};");
}

SecurityNode::~SecurityNode()
{
    delete ui;
}

// See Header
void SecurityNode::on_delete_2_clicked()
{
    // Ask for confirmation before deletion
    QMessageBox msgBox;
    msgBox.setText("Are you sure you want to delete " + ui->go->text());
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
        emit deleteSecurityNode(ui->go->text());
    }
}

// See Header
void SecurityNode::on_go_clicked()
{
    emit securityToTransaction(ui->go->text());
}
