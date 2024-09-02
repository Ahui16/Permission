#include "ui_logindialog.h"
#include "permissions.h"

#include <QMessageBox>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void loginButton();
    void registerButton();

private:
    Ui::LoginDialog *ui;
    QSqlDatabase db;
};
