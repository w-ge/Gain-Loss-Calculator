#ifndef SECURITYMENU_H
#define SECURITYMENU_H

#include <QWidget>

namespace Ui {
class SecurityMenu;
}

class SecurityMenu : public QWidget
{
    Q_OBJECT

public:
    explicit SecurityMenu(QWidget *parent = nullptr);
    ~SecurityMenu();

private:
    Ui::SecurityMenu *ui;
};

#endif // SECURITYMENU_H
