#include <QMessageBox>
#include "ui_MainForm.h"
#include "Permissions.h"

Permissions::Permissions(int id, const QString& username, int level, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Permissions)
    , userPlugin(nullptr)
    , groupPlugin(nullptr)
    , rolePlugin(nullptr)
    , functionPlugin(nullptr)
    , name(username)
    , userlevel(level)
    , userid(id)
{
    ui->setupUi(this);
    setupDatabase();
    setupConnections();
    if(userlevel >= 1)  loadUserPlugin();  // 加载用户插件
    if(userlevel >= 2){
        loadGroupPlugin();  // 加载组插件
        loadRolePlugin();  // 加载角色插件
        loadFunctionPlugin();  // 加载功能插件
    }
    if(userlevel >= 3) qDebug() << "运维";
    if(userlevel >= 4) qDebug() << "管理员";
    ui->userButton->setChecked(true);
    switchToUserPage();

}
Permissions::~Permissions()
{
    delete userPlugin;
    delete groupPlugin;
    delete rolePlugin;
    delete functionPlugin;
    userPlugin = nullptr;
    groupPlugin = nullptr;
    rolePlugin = nullptr;
    functionPlugin = nullptr;
    delete ui;
    db.close();
}
// 连接数据库
void Permissions::setupDatabase()
{
    QString dbPath = "PermissionSystem.db";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"), db.lastError().text());
        qCritical() << "Failed to open database at path:" << dbPath;
    } else {
        qDebug() << "Database successfully opened at path:" << dbPath;
    }
    // 开启外键
    QSqlQuery query(db);
    query.exec("PRAGMA foreign_keys = ON;");
}
// 加载用户插件函数
void Permissions::loadUserPlugin()
{
    QPluginLoader loader("UserPlugin.dll");  // 指定插件路径
    QObject *plugin = loader.instance();
    if (plugin) {
        userPlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!userPlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            userPlugin->setDatabase(QSqlDatabase::database());  // 设置数据库连接
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load UserPlugin: " + loader.errorString());
    }
}
// 加载组插件函数
void Permissions::loadGroupPlugin()
{
    QPluginLoader loader("GroupPlugin.dll");  // 指定插件路径
    QObject *plugin = loader.instance();
    if (plugin) {
        groupPlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!groupPlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            groupPlugin->setDatabase(QSqlDatabase::database());  // 设置数据库连接
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load GroupPlugin: " + loader.errorString());
    }
}
// 加载角色插件函数
void Permissions::loadRolePlugin()
{
    QPluginLoader loader("RolePlugin.dll");  // 指定插件路径
    QObject *plugin = loader.instance();
    if (plugin) {
        rolePlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!rolePlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            rolePlugin->setDatabase(QSqlDatabase::database());  // 设置数据库连接
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load RolePlugin: " + loader.errorString());
    }
}
// 加载功能插件函数
void Permissions::loadFunctionPlugin()
{
    QPluginLoader loader("FunctionPlugin.dll");  // 指定插件路径
    QObject *plugin = loader.instance();
    if (plugin) {
        functionPlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!functionPlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            functionPlugin->setDatabase(QSqlDatabase::database());  // 设置数据库连接
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load FunctionPlugin: " + loader.errorString());
    }
}
// 按钮光亮提示
void Permissions::handleButtonClick()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

    if (clickedButton) {
        QList<QPushButton*> buttons = {ui->userButton, ui->roleButton, ui->groupButton, ui->functionButton};
        for (QPushButton *button : buttons) {
            if (button != clickedButton) {
                button->setChecked(false);
            }
            else button->setChecked(true);
        }
        if (clickedButton == ui->userButton)switchToUserPage();
        else if (clickedButton == ui->roleButton) switchToRolePage();
        else if (clickedButton == ui->groupButton) switchToGroupPage();
        else if (clickedButton == ui->functionButton) switchToFunctionPage();
    }
}
// 按钮绑定
void Permissions::setupConnections()
{
    // 页面切换按钮
    connect(ui->userButton, &QPushButton::clicked, this, &Permissions::handleButtonClick);
    connect(ui->roleButton, &QPushButton::clicked, this, &Permissions::handleButtonClick);
    connect(ui->groupButton, &QPushButton::clicked, this, &Permissions::handleButtonClick);
    connect(ui->functionButton, &QPushButton::clicked, this, &Permissions::handleButtonClick);
    ui->userButton->setCheckable(true);
    ui->roleButton->setCheckable(true);
    ui->groupButton->setCheckable(true);
    ui->functionButton->setCheckable(true);
    // 用户界面按钮
    connect(ui->addUserButton, &QPushButton::clicked, this, &Permissions::addUser);
    connect(ui->addUserPermissionButton, &QPushButton::clicked, this, &Permissions::addUserPermission);
    connect(ui->deleteUserButton, &QPushButton::clicked, this, &Permissions::deleteUser);
    connect(ui->deleteUserPermissionButton, &QPushButton::clicked, this, &Permissions::deleteUserPermission);
    connect(ui->editUserButton, &QPushButton::clicked, this, &Permissions::editUser);
    connect(ui->editUserPermissionButton, &QPushButton::clicked, this, &Permissions::editUserPermission);
    connect(ui->searchUserPermissionButton, &QPushButton::clicked, this, &Permissions::searchUserPermission);
    // 组界面按钮
    connect(ui->addGroupButton, &QPushButton::clicked, this, &Permissions::addGroup);
    connect(ui->addGroupPermissionButton, &QPushButton::clicked, this, &Permissions::addGroupPermission);
    connect(ui->deleteGroupButton, &QPushButton::clicked, this, &Permissions::deleteGroup);
    connect(ui->deleteGroupPermissionButton, &QPushButton::clicked, this, &Permissions::deleteGroupPermission);
    connect(ui->editGroupButton, &QPushButton::clicked, this, &Permissions::editGroup);
    connect(ui->editGroupPermissionButton, &QPushButton::clicked, this, &Permissions::editGroupPermission);
    connect(ui->searchGroupPermissionButton, &QPushButton::clicked, this, &Permissions::searchGroupPermission);
    // 角色界面按钮
    connect(ui->addRoleButton, &QPushButton::clicked, this, &Permissions::addRole);
    connect(ui->addRolePermissionButton, &QPushButton::clicked, this, &Permissions::addRolePermission);
    connect(ui->deleteRoleButton, &QPushButton::clicked, this, &Permissions::deleteRole);
    connect(ui->deleteRolePermissionButton, &QPushButton::clicked, this, &Permissions::deleteRolePermission);
    connect(ui->editRoleButton, &QPushButton::clicked, this, &Permissions::editRole);
    connect(ui->editRolePermissionButton, &QPushButton::clicked, this, &Permissions::editRolePermission);
    connect(ui->searchRolePermissionButton, &QPushButton::clicked, this, &Permissions::searchRolePermission);
    // 功能界面按钮
    connect(ui->addFunctionButton, &QPushButton::clicked, this, &Permissions::addFunction);
    connect(ui->addFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::addFunctionPermission);
    connect(ui->deleteFunctionButton, &QPushButton::clicked, this, &Permissions::deleteFunction);
    connect(ui->deleteFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::deleteFunctionPermission);
    connect(ui->editFunctionButton, &QPushButton::clicked, this, &Permissions::editFunction);
    connect(ui->editFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::editFunctionPermission);
    connect(ui->searchFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::searchFunctionPermission);
    // 权限按钮
    connect(ui->addPermissionButton, &QPushButton::clicked, this, &Permissions::addPermission);
    connect(ui->deletePermissionButton, &QPushButton::clicked, this, &Permissions::deletePermission);
    connect(ui->editPermissionButton, &QPushButton::clicked, this, &Permissions::editPermission);
    // 操作日志
    connect(ui->ViewLogsButton, &QPushButton::clicked, this, &Permissions::ViewLogs);
    // 显示当前用户
    ui->usernameLabel->setFixedWidth(151); // 设置固定宽度
    ui->usernameLabel->setWordWrap(false); // 确保不换行
    QFontMetrics fm(ui->usernameLabel->font());
    QString elidedText = fm.elidedText("欢迎, 用户" + name, Qt::ElideRight, ui->usernameLabel->width());
    ui->usernameLabel->setText(elidedText);
}
// 界面切换
void Permissions::switchToUserPage()
{
    ui->stackedWidget->setCurrentWidget(ui->userPage); // 切换到用户页面
    showUserPage();
}
void Permissions::switchToRolePage()
{
    ui->stackedWidget->setCurrentWidget(ui->rolePage); // 切换到角色页面
    showRolePage();
}
void Permissions::switchToGroupPage()
{
    ui->stackedWidget->setCurrentWidget(ui->groupPage); // 切换到组页面
    showGroupPage();
}
void Permissions::switchToFunctionPage()
{
    ui->stackedWidget->setCurrentWidget(ui->functionPage); // 切换到组页面
    showFunctionPage();
}
// 数据内容显示
void Permissions::showUserPage()
{
    if (userPlugin) {
        userPlugin->showPage(ui->userTableView);
    } else {
        QMessageBox::critical(this, "Plugin Error", "UserPlugin not loaded.");
    }
}
void Permissions::showRolePage()
{
    if (rolePlugin) {
        rolePlugin->showPage(ui->roleTableView);
    } else {
        QMessageBox::critical(this, "Plugin Error", "RolePlugin not loaded.");
    }
}
void Permissions::showGroupPage()
{
    if (groupPlugin) {
        groupPlugin->showPage(ui->groupTableView);
    } else {
        QMessageBox::critical(this, "Plugin Error", "GroupPlugin not loaded.");
    }
}
void Permissions::showFunctionPage()
{
    if (functionPlugin) {
        functionPlugin->showPage(ui->functionTableView);
    } else {
        QMessageBox::critical(this, "Plugin Error", "FunctionPlugin not loaded.");
    }
}
// 添加用户
void Permissions::addUser() {
    if (userPlugin) {
        QTableView *view = ui->userTableView;
        userPlugin->addEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 添加用户权限
void Permissions::addUserPermission() {
    if (userPlugin) {
        userPlugin->addEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 删除用户
void Permissions::deleteUser() {
    if (userPlugin) {
        QTableView *view = ui->userTableView;
        userPlugin->deleteEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 删除用户权限
void Permissions::deleteUserPermission() {
    if (userPlugin) {
        userPlugin->deleteEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 修改用户
void Permissions::editUser() {
    if (userPlugin) {
        QTableView *view = ui->userTableView;
        userPlugin->editEntity(view, userid, name);
        QSqlQuery query(db);
        query.prepare("SELECT Username FROM Users WHERE UserID = ?");
        query.addBindValue(userid);
        if (query.exec()) {
            if (query.next()) {
                name = query.value(0).toString();
                QFontMetrics fm(ui->usernameLabel->font());
                QString elidedText = fm.elidedText("欢迎, 用户" + name, Qt::ElideRight, ui->usernameLabel->width());
                ui->usernameLabel->setText(elidedText);
            }
        }
    }else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 修改权限
void Permissions::editUserPermission() {
    if (userPlugin) {
        userPlugin->editEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 查找用户
void Permissions::searchUserPermission() {
    if (userPlugin) {
            userPlugin->searchEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 组函数
// 添加组
void Permissions::addGroup() {
    if (groupPlugin) {
        QTableView *view = ui->groupTableView;
        groupPlugin->addEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 添加组权限
void Permissions::addGroupPermission() {
    if (groupPlugin) {
        groupPlugin->addEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 删除组
void Permissions::deleteGroup() {
    if (groupPlugin) {
        QTableView *view = ui->groupTableView;
        groupPlugin->deleteEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 删除组权限
void Permissions::deleteGroupPermission() {
    if (groupPlugin) {
        groupPlugin->deleteEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 修改组
void Permissions::editGroup() {
    if (groupPlugin) {
        QTableView *view = ui->groupTableView;
        groupPlugin->editEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 修改组权限
void Permissions::editGroupPermission() {
    if (groupPlugin) {
        groupPlugin->editEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 查找组权限
void Permissions::searchGroupPermission() {
    if (groupPlugin) {
        groupPlugin->searchEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 角色模块
// 添加角色
void Permissions::addRole() {
    if (rolePlugin) {
        QTableView *view = ui->roleTableView;
        rolePlugin->addEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 添加角色权限
void Permissions::addRolePermission() {
    if (rolePlugin) {
        rolePlugin->addEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 删除角色
void Permissions::deleteRole() {
    if (rolePlugin) {
        QTableView *view = ui->roleTableView;
        rolePlugin->deleteEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 删除角色权限
void Permissions::deleteRolePermission() {
    if (rolePlugin) {
        rolePlugin->deleteEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 修改角色
void Permissions::editRole() {
    if (rolePlugin) {
        QTableView *view = ui->roleTableView;
        rolePlugin->editEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 修改角色权限
void Permissions::editRolePermission(){
    if (rolePlugin) {
        rolePlugin->editEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 查找角色权限
void Permissions::searchRolePermission() {
    if (rolePlugin) {
        rolePlugin->searchEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 功能模块
// 添加功能
void Permissions::addFunction()
{
    if (functionPlugin) {
        QTableView *view = ui->functionTableView;
        functionPlugin->addEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 添加功能权限
void Permissions::addFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->addEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 删除功能
void Permissions::deleteFunction()
{
    if (functionPlugin) {
        QTableView *view = ui->functionTableView;
        functionPlugin->deleteEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 删除功能权限
void Permissions::deleteFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->deleteEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 修改功能
void Permissions::editFunction()
{
    if (functionPlugin) {
        QTableView *view = ui->functionTableView;
        functionPlugin->editEntity(view, userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 修改功能权限
void Permissions::editFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->editEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 查找权限功能
void Permissions::searchFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->searchEntityPermission(userid, name);
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 权限模块
// 添加权限
void Permissions::addPermission()
{
    if (functionPlugin) {
        QMetaObject::invokeMethod(functionPlugin, "addPermissionEntity"
                                  , Q_ARG(int, userid), Q_ARG(QString, name));
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 删除权限
void Permissions::deletePermission()
{
    if (functionPlugin) {
        QMetaObject::invokeMethod(functionPlugin, "deletePermissionEntity"
                                  , Q_ARG(int, userid), Q_ARG(QString, name));
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 修改权限
void Permissions::editPermission()
{
    if (functionPlugin) {
        QMetaObject::invokeMethod(functionPlugin, "editPermissionEntity"
                                  , Q_ARG(int, userid), Q_ARG(QString, name));
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 日志模块
// 操作日志 用户名 功能名 操作状态 操作内容
void Permissions::writeLog(const int &id, const QString &username, const QString &functionName, const QString &result,
              const QString &actions, const QString &description)
{
    QSqlQuery query;
    query.prepare("INSERT INTO UserLogs (UserID, Username, FunctionName, Result, Actions, Description) "
                  "VALUES (:userid, :username, :functionName, :result, :actions, :description)");
    query.bindValue(":userid", id);
    query.bindValue(":username", username);
    query.bindValue(":functionName", functionName);
    query.bindValue(":result", result);
    query.bindValue(":actions", actions);
    query.bindValue(":description", description.isEmpty() ? QVariant(QVariant::String) : description);
    if (!query.exec()) {
        qDebug() << "Error writing log: " << query.lastError().text();
    }
}
// 查看日志
void Permissions::ViewLogs()
{
    QDialog *dialog = new QDialog();
    dialog->setWindowTitle("查看日志");
    dialog->resize(800, 600);
    QFormLayout *formLayout = new QFormLayout(dialog);

    QTableView *tableView = new QTableView();
    QSqlQueryModel *model = new QSqlQueryModel();
    tableView->setModel(model);
    tableView->resizeColumnsToContents(); // 调整列宽以适应内容
    tableView->resizeRowsToContents();    // 调整行高以适应内容
    tableView->horizontalHeader()->setStretchLastSection(true); // 使最后一列扩展以填充表格

    QLineEdit *usernameEdit = new QLineEdit();
    QLineEdit *functionNameEdit = new QLineEdit();
    QComboBox *resultComboBox = new QComboBox();
    resultComboBox->addItems({"所有", "成功", "失败"});
    QComboBox *actionComboBox = new QComboBox();
    actionComboBox->addItems({"所有", "添加", "修改", "删除", "查找"});
    QDateEdit *startDateEdit = new QDateEdit();
    QDateEdit *endDateEdit = new QDateEdit();
    QDate today = QDate::currentDate();
    QDate tomorrow = today.addDays(1);
    startDateEdit->setDate(today);
    endDateEdit->setDate(tomorrow);
    startDateEdit->setCalendarPopup(true);
    endDateEdit->setCalendarPopup(true);

    QPushButton *filterButton = new QPushButton("筛选");

    formLayout->addRow("用户名:", usernameEdit);
    formLayout->addRow("功能名称:", functionNameEdit);
    formLayout->addRow("操作状态:", resultComboBox);
    formLayout->addRow("操作名称:", actionComboBox);
    formLayout->addRow("开始时间:", startDateEdit);
    formLayout->addRow("结束时间:", endDateEdit);
    formLayout->addWidget(filterButton);
    formLayout->addRow(tableView);

    if (userlevel == 1) {   //普通用户只能查看自己的操作
        usernameEdit->setEnabled(false);
        usernameEdit->setText(name);
    }

    connect(filterButton, &QPushButton::clicked, this, [=]() {
        QString username = usernameEdit->text().trimmed();
        QString functionName = functionNameEdit->text().trimmed();
        QString result = resultComboBox->currentText();
        QString action = actionComboBox->currentText();
        QDate startDate = startDateEdit->date();
        QDate endDate = endDateEdit->date();
        QString queryStr = "SELECT FunctionName, Username, Result, Actions, Timestamp, Description FROM UserLogs WHERE 1=1";

        if (!functionName.isEmpty()) queryStr += " AND FunctionName = :functionName";
        if (userlevel != 1) {
            if (!username.isEmpty()) {
                queryStr += " AND Username = :username";
            }
        } else {
            queryStr += " AND Username = :username";
        }
        if (result != "所有") queryStr += " AND Result = :result";
        if (action != "所有") queryStr += " AND Actions = :action";
        if (startDate.isValid()) queryStr += " AND Timestamp >= :startDate";
        if (endDate.isValid()) queryStr += " AND Timestamp <= :endDate";

        QSqlQuery query;
        query.prepare(queryStr);
        if (!functionName.isEmpty()) query.bindValue(":functionName", functionName);
        if (userlevel != 1) {
            if (!username.isEmpty()) {
                query.bindValue(":username", username);
            }
        } else {
            query.bindValue(":username", name);  // 用户等级为1时使用当前用户名
        }
        if (result != "所有") query.bindValue(":result", result);
        if (action != "所有") query.bindValue(":action", action);
        if (startDate.isValid()) query.bindValue(":startDate", startDate.toString("yyyy-MM-dd"));
        if (endDate.isValid()) query.bindValue(":endDate", endDate.toString("yyyy-MM-dd"));

        if (!query.exec()) {
            QMessageBox::critical(dialog, "查询错误", "数据库查询失败: " + query.lastError().text());
            writeLog(userid, name, "查看操作日志", "失败", "查找", "数据库查询失败");
            return;
        }
        model->setQuery(query);
        if (model->lastError().isValid()) {
            QMessageBox::critical(dialog, "数据错误", "数据模型设置失败: " + model->lastError().text());
            writeLog(userid, name, "查看操作日志", "失败", "查找", "数据模型设置失败");
            return;
        }
        writeLog(userid, name, "查看操作日志", "成功", "查找", "查看操作日志");
    });

    dialog->exec();
    delete dialog;
}
