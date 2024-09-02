#include "logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    connect(ui->loginButton, &QPushButton::clicked, this, &LoginDialog::loginButton);
    connect(ui->registerButton, &QPushButton::clicked, this, &LoginDialog::registerButton);

    QString dbPath = "PermissionSystem.db";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"), db.lastError().text());
        qCritical() << "Failed to open database at path:" << dbPath;
    } else {
        qDebug() << "Database successfully opened at path:" << dbPath;
    }
}

LoginDialog::~LoginDialog()
{
    delete ui;
    db.close();
}

void LoginDialog::loginButton()
{
    QString username = ui->UsernamelineEdit->text().trimmed();
    QString password = ui->PasswordlineEdit->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "用户名和密码不能为空！");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT Password FROM Users WHERE Username = :username");
    query.bindValue(":username", username);

    if (!query.exec()) {
        QMessageBox::critical(this, "查询错误", "查询失败: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString storedPasswordHash = query.value(0).toString().trimmed();
        if (storedPasswordHash == password) {
            QSqlQuery query1;
            int level, id;
            query1.prepare("SELECT PermissionLevel FROM Users WHERE Username = :username");
            query1.bindValue(":username", username);
            if (!query1.exec()) {
                QMessageBox::critical(this, "查询错误", "查询失败: " + query1.lastError().text());
                return;
            }
            if (query1.next()) level = query1.value(0).toInt();
            else level = 1;

            QSqlQuery query2;
            query2.prepare("SELECT UserID FROM Users WHERE Username = :username");
            query2.bindValue(":username", username);
            if (query2.exec() && query2.next()) {
                id = query2.value(0).toInt();
                Permissions *permissions = new Permissions(id, username, level);
                permissions->show();
                QScreen *screen = QGuiApplication::primaryScreen();
                QRect screenGeometry = screen->geometry();
                int screenWidth = screenGeometry.width();
                int screenHeight = screenGeometry.height();
                permissions->setMaximumSize(screenWidth, screenHeight);
                permissions->show();
                this->close();
            }
            else QMessageBox::warning(this, "错误", "没有该用户");
        } else {
            QMessageBox::warning(this, "警告", "密码错误！");
        }
    } else {
        QMessageBox::warning(this, "警告", "用户名不存在！");
    }
}

void LoginDialog::registerButton()
{
    QDialog dialog;
    dialog.setWindowTitle("Register");

    QFormLayout form(&dialog);

    QLineEdit usernameLineEdit;
    QLineEdit passwordLineEdit;
    QLineEdit confirmPasswordLineEdit;
    QLineEdit nameLineEdit;
    QPushButton addButton("确认", &dialog);

    usernameLineEdit.setPlaceholderText("Enter Username");
    passwordLineEdit.setPlaceholderText("Enter Password");
    confirmPasswordLineEdit.setPlaceholderText("Ensure Password");
    nameLineEdit.setPlaceholderText("Enter Name");

    passwordLineEdit.setEchoMode(QLineEdit::Password);
    confirmPasswordLineEdit.setEchoMode(QLineEdit::Password);

    form.addRow("用户名:", &usernameLineEdit);
    form.addRow("密码:", &passwordLineEdit);
    form.addRow("确认密码:", &confirmPasswordLineEdit);
    form.addRow("姓名:", &nameLineEdit);
    form.addRow(&addButton);

    connect(&addButton, &QPushButton::clicked, &dialog, [&]() {
        QString username = usernameLineEdit.text();
        QString password = passwordLineEdit.text();
        QString confirmPassword = confirmPasswordLineEdit.text();
        QString name = nameLineEdit.text();

        if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty() || name.isEmpty()) {
            QMessageBox::warning(&dialog, "Input Error", "所有字段不能为空！");
            return;
        }

        if (password != confirmPassword) {
            QMessageBox::warning(&dialog, "Password Mismatch", "密码和确认密码不匹配！");
            return;
        }

        QSqlQuery query;
        query.prepare("INSERT INTO Users (Username, Password, Name) VALUES (:username, :password, :name)");
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.bindValue(":name", name);

        if (!query.exec()) {
            QMessageBox::warning(&dialog, "Register Error", "用户名已存在！");
        } else {
            QMessageBox::information(&dialog, "Register Success", "注册成功！");
            dialog.accept();
        }
    });

    dialog.exec();
}
