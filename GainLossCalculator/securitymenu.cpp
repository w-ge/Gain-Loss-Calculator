#include "securitymenu.h"
#include "ui_securitymenu.h"

SecurityMenu::SecurityMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecurityMenu)
{
    ui->setupUi(this);
}

SecurityMenu::~SecurityMenu()
{
    delete ui;
}
