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
            int id;
            QSqlQuery query1;
            query1.prepare("SELECT UserID FROM Users WHERE Username = :username");
            query1.bindValue(":username", username);
            if (query1.exec() && query1.next()) {
                id = query1.value(0).toInt();
                // 写入日志
                QString description = QString("用户 %1 登录系统").arg(username);
                query1.prepare("INSERT INTO UserLogs (UserID, Username, FunctionName, Result, Actions, Description) "
                              "VALUES (:userid, :username, '用户登录', '成功', '登录', :description)");
                query1.bindValue(":userid", id);
                query1.bindValue(":username", username);
                query1.bindValue(":description", description);
                if (query1.exec() && query1.next()) qDebug() << "插入错误";

                Permissions *permissions = new Permissions(id, username);
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
            QSqlQuery query;
            QString description = QString("注册用户 %1").arg(username);
            int id = -1;
            query.prepare("SELECT UserID FROM Users WHERE Username = :username");
            query.bindValue(":username", username);
            if (query.exec() && query.next())
                id = query.value(0).toInt();
            query.prepare("INSERT INTO UserLogs (UserID, Username, FunctionName, Result, Actions, Description) "
                          "VALUES (:userid, :username, '用户注册', '成功', '注册', :description)");
            query.bindValue(":userid", id);
            query.bindValue(":username", username);
            query.bindValue(":description", description);
            if (query.exec() && query.next()) qDebug() << "插入错误";
            dialog.accept();
        }
    });

    dialog.exec();
}
