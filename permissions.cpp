#include <QMessageBox>
#include "ui_MainForm.h"
#include "Permissions.h"

Permissions::Permissions(int id, const QString& username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Permissions)
    , userPlugin(nullptr)
    , groupPlugin(nullptr)
    , rolePlugin(nullptr)
    , functionPlugin(nullptr)
    , permissionPlugin(nullptr)
    , name(username)
    , userid(id)
{
    ui->setupUi(this);
    setupDatabase();
    setupConnections();
    Menu();
    ui->userButton->setChecked(true);
    switchToUserPage();
}
Permissions::~Permissions()
{
    delete userPlugin;
    delete groupPlugin;
    delete rolePlugin;
    delete functionPlugin;
    delete permissionPlugin;
    userPlugin = nullptr;
    groupPlugin = nullptr;
    rolePlugin = nullptr;
    functionPlugin = nullptr;
    permissionPlugin = nullptr;
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
            userPlugin->setData(ui->userTableView, userid, name);
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
            groupPlugin->setData(ui->groupTableView, userid, name);
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load GroupPlugin: " + loader.errorString());
    }
}
// 加载角色插件函数
void Permissions::loadRolePlugin()
{
    QPluginLoader loader("RolePlugin.dll");
    QObject *plugin = loader.instance();
    if (plugin) {
        rolePlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!rolePlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            rolePlugin->setDatabase(QSqlDatabase::database());
            rolePlugin->setData(ui->roleTableView, userid, name);
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load RolePlugin: " + loader.errorString());
    }
}
// 加载功能插件函数
void Permissions::loadFunctionPlugin()
{
    QPluginLoader loader("FunctionPlugin.dll");
    QObject *plugin = loader.instance();
    if (plugin) {
        functionPlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!functionPlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            functionPlugin->setDatabase(QSqlDatabase::database());
            functionPlugin->setData(ui->functionTableView, userid, name);
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load FunctionPlugin: " + loader.errorString());
    }
}
// 加载权限插件函数
void Permissions::loadPermissionPlugin()
{
    QPluginLoader loader("PermissionPlugin.dll");
    QObject *plugin = loader.instance();
    if (plugin) {
        permissionPlugin = qobject_cast<IEntityPlugin*>(plugin);
        if (!permissionPlugin) {
            QMessageBox::critical(this, "Plugin Error", "Failed to cast plugin to IEntityPlugin.");
        } else {
            permissionPlugin->setDatabase(QSqlDatabase::database());
            permissionPlugin->setData(ui->permissionTableView, userid, name);
        }
    } else {
        QMessageBox::critical(this, "Plugin Error", "Failed to load PermissionPlugin: " + loader.errorString());
    }
}
// 按钮光亮提示
void Permissions::handleButtonClick()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

    if (clickedButton) {
        QList<QPushButton*> buttons = {ui->userButton, ui->roleButton, ui->groupButton, ui->functionButton, ui->permissionButton};
        for (QPushButton *button : buttons) {
            if (button != clickedButton) {
                button->setChecked(false);
            }
            else button->setChecked(true);
        }
        if (clickedButton == ui->userButton) switchToUserPage();
        else if (clickedButton == ui->roleButton) switchToRolePage();
        else if (clickedButton == ui->groupButton) switchToGroupPage();
        else if (clickedButton == ui->functionButton) switchToFunctionPage();
        else if (clickedButton == ui->permissionButton) switchToPermissionPage();
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
    connect(ui->permissionButton, &QPushButton::clicked, this, &Permissions::handleButtonClick);
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
    connect(ui->deleteFunctionButton, &QPushButton::clicked, this, &Permissions::deleteFunction);
    connect(ui->editFunctionButton, &QPushButton::clicked, this, &Permissions::editFunction);
    connect(ui->editFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::editFunctionPermission);
    connect(ui->searchFunctionPermissionButton, &QPushButton::clicked, this, &Permissions::searchFunctionPermission);
    // 权限界面按钮
    connect(ui->addPermissionButton, &QPushButton::clicked, this, &Permissions::addPermission);
    connect(ui->addPermissionPermissionButton, &QPushButton::clicked, this, &Permissions::addPermissionPermission);
    connect(ui->deletePermissionButton, &QPushButton::clicked, this, &Permissions::deletePermission);
    connect(ui->deletePermissionPermissionButton, &QPushButton::clicked, this, &Permissions::deletePermissionPermission);
    connect(ui->editPermissionButton, &QPushButton::clicked, this, &Permissions::editPermission);
    connect(ui->editPermissionPermissionButton, &QPushButton::clicked, this, &Permissions::editPermissionPermission);
    connect(ui->searchPermissionPermissionButton, &QPushButton::clicked, this, &Permissions::searchPermissionPermission);
    // 操作日志
    connect(ui->ViewLogsButton, &QPushButton::clicked, this, &Permissions::ViewLogs);
    // 显示当前用户
    QFontMetrics fm(ui->usernameLabel->font());
    QString elidedText = fm.elidedText("欢迎, 用户" + name, Qt::ElideRight, ui->usernameLabel->width());
    ui->usernameLabel->setText(elidedText);
}
// 界面配置
void Permissions::Menu()
{
    QList<QString> functions;
    QSqlQuery query;
    query.prepare(R"(
        SELECT DISTINCT f.FunctionName
        FROM Functions f
        JOIN Permission_Function pf ON f.FunctionID = pf.FunctionID
        JOIN Permissions p ON p.PermissionID = pf.PermissionID
        JOIN User_Permissions up ON up.PermissionID = p.PermissionID
        JOIN Users u ON u.UserID = up.UserID
        WHERE u.username = :username
    )");
    query.bindValue(":username", name);

    if (!query.exec()) {
        QMessageBox::critical(this, "错误", query.lastError().text());
        qDebug() << "操作错误";
        return;
    }

    while (query.next()) {
        functions.append(query.value(0).toString());
    }
    ui->userButton->setEnabled(functions.contains("用户管理"));
    ui->roleButton->setEnabled(functions.contains("角色管理"));
    ui->groupButton->setEnabled(functions.contains("组别管理"));
    ui->functionButton->setEnabled(functions.contains("功能管理"));

    if(functions.contains("用户管理")) loadUserPlugin();
    ui->addUserButton->setVisible(functions.contains("添加用户"));
    ui->addUserPermissionButton->setVisible(functions.contains("添加用户权限"));
    ui->deleteUserButton->setVisible(functions.contains("删除用户"));
    ui->deleteUserPermissionButton->setVisible(functions.contains("删除用户权限"));
    ui->editUserButton->setVisible(functions.contains("修改用户"));
    ui->editUserPermissionButton->setVisible(functions.contains("修改用户权限"));
    ui->searchUserPermissionButton->setVisible(functions.contains("查找用户权限"));

    if(functions.contains("角色管理")) loadRolePlugin();
    ui->addRoleButton->setVisible(functions.contains("添加角色"));
    ui->addRolePermissionButton->setVisible(functions.contains("添加角色权限"));
    ui->deleteRoleButton->setVisible(functions.contains("删除角色"));
    ui->deleteRolePermissionButton->setVisible(functions.contains("删除角色权限"));
    ui->editRoleButton->setVisible(functions.contains("修改角色"));
    ui->editRolePermissionButton->setVisible(functions.contains("修改角色权限"));
    ui->searchRolePermissionButton->setVisible(functions.contains("查找角色权限"));

    if(functions.contains("组别管理")) loadGroupPlugin();
    ui->addGroupButton->setVisible(functions.contains("添加组别"));
    ui->addGroupPermissionButton->setVisible(functions.contains("添加组别权限"));
    ui->deleteGroupButton->setVisible(functions.contains("删除组别"));
    ui->deleteGroupPermissionButton->setVisible(functions.contains("删除组别权限"));
    ui->editGroupButton->setVisible(functions.contains("修改组别"));
    ui->editGroupPermissionButton->setVisible(functions.contains("修改组别权限"));
    ui->searchGroupPermissionButton->setVisible(functions.contains("查找组别权限"));

    if(functions.contains("功能管理")) loadFunctionPlugin();
    ui->addFunctionButton->setVisible(functions.contains("添加功能"));
    ui->deleteFunctionButton->setVisible(functions.contains("删除功能"));
    ui->editFunctionButton->setVisible(functions.contains("修改功能"));
    ui->editFunctionPermissionButton->setVisible(functions.contains("修改功能权限"));
    ui->searchFunctionPermissionButton->setVisible(functions.contains("查找功能权限"));

    if(functions.contains("权限管理")) loadPermissionPlugin();
    ui->addPermissionButton->setVisible(functions.contains("添加权限"));
    ui->addPermissionPermissionButton->setVisible(functions.contains("添加权限权限"));
    ui->deletePermissionButton->setVisible(functions.contains("删除权限"));
    ui->deletePermissionPermissionButton->setVisible(functions.contains("删除权限权限"));
    ui->editPermissionButton->setVisible(functions.contains("修改权限"));
    ui->editPermissionPermissionButton->setVisible(functions.contains("修改权限权限"));
    ui->searchPermissionPermissionButton->setVisible(functions.contains("查找权限权限"));

    ui->ViewLogsButton->setVisible(functions.contains("查看操作日志"));
}
// 界面切换
void Permissions::switchToUserPage()
{
    ui->stackedWidget->setCurrentWidget(ui->userPage); // 切换到用户页面
    showUserPage();
}
void Permissions::switchToRolePage()
{
    ui->stackedWidget->setCurrentWidget(ui->rolePage);
    showRolePage();
}
void Permissions::switchToGroupPage()
{
    ui->stackedWidget->setCurrentWidget(ui->groupPage);
    showGroupPage();
}
void Permissions::switchToFunctionPage()
{
    ui->stackedWidget->setCurrentWidget(ui->functionPage);
    showFunctionPage();
}
void Permissions::switchToPermissionPage()
{
    ui->stackedWidget->setCurrentWidget(ui->permissionPage);
    showPermissionPage();
}
// 数据内容显示
void Permissions::showUserPage()
{
    if (userPlugin) {
        userPlugin->showPage();
    } else {
        QMessageBox::critical(this, "Plugin Error", "UserPlugin not loaded.");
    }
}
void Permissions::showRolePage()
{
    if (rolePlugin) {
        rolePlugin->showPage();
    } else {
        QMessageBox::critical(this, "Plugin Error", "RolePlugin not loaded.");
    }
}
void Permissions::showGroupPage()
{
    if (groupPlugin) {
        groupPlugin->showPage();
    } else {
        QMessageBox::critical(this, "Plugin Error", "GroupPlugin not loaded.");
    }
}
void Permissions::showFunctionPage()
{
    if (functionPlugin) {
        functionPlugin->showPage();
    } else {
        QMessageBox::critical(this, "Plugin Error", "FunctionPlugin not loaded.");
    }
}
void Permissions::showPermissionPage()
{
    if (permissionPlugin) {
        permissionPlugin->showPage();
    } else {
        QMessageBox::critical(this, "Plugin Error", "PermissionPlugin not loaded.");
    }
}
// 添加用户
void Permissions::addUser() {
    if (userPlugin) {
        userPlugin->addEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 添加用户权限
void Permissions::addUserPermission() {
    if (userPlugin) {
        userPlugin->addEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 删除用户
void Permissions::deleteUser() {
    if (userPlugin) {
        userPlugin->deleteEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 删除用户权限
void Permissions::deleteUserPermission() {
    if (userPlugin) {
        userPlugin->deleteEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 修改用户
void Permissions::editUser() {
    if (userPlugin) {
        userPlugin->editEntity();
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
        userPlugin->editEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 查找用户
void Permissions::searchUserPermission() {
    if (userPlugin) {
            userPlugin->searchEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("User plugin is not loaded."));
    }
}
// 组函数
// 添加组
void Permissions::addGroup() {
    if (groupPlugin) {
        groupPlugin->addEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 添加组权限
void Permissions::addGroupPermission() {
    if (groupPlugin) {
        groupPlugin->addEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 删除组
void Permissions::deleteGroup() {
    if (groupPlugin) {
        groupPlugin->deleteEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 删除组权限
void Permissions::deleteGroupPermission() {
    if (groupPlugin) {
        groupPlugin->deleteEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 修改组
void Permissions::editGroup() {
    if (groupPlugin) {
        groupPlugin->editEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 修改组权限
void Permissions::editGroupPermission() {
    if (groupPlugin) {
        groupPlugin->editEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 查找组权限
void Permissions::searchGroupPermission() {
    if (groupPlugin) {
        groupPlugin->searchEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("group plugin is not loaded."));
    }
}
// 角色模块
// 添加角色
void Permissions::addRole() {
    if (rolePlugin) {
        rolePlugin->addEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 添加角色权限
void Permissions::addRolePermission() {
    if (rolePlugin) {
        rolePlugin->addEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 删除角色
void Permissions::deleteRole() {
    if (rolePlugin) {
        rolePlugin->deleteEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 删除角色权限
void Permissions::deleteRolePermission() {
    if (rolePlugin) {
        rolePlugin->deleteEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 修改角色
void Permissions::editRole() {
    if (rolePlugin) {
        rolePlugin->editEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 修改角色权限
void Permissions::editRolePermission(){
    if (rolePlugin) {
        rolePlugin->editEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 查找角色权限
void Permissions::searchRolePermission() {
    if (rolePlugin) {
        rolePlugin->searchEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("role plugin is not loaded."));
    }
}
// 功能模块
// 添加功能
void Permissions::addFunction()
{
    if (functionPlugin) {
        functionPlugin->addEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 删除功能
void Permissions::deleteFunction()
{
    if (functionPlugin) {
        functionPlugin->deleteEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 修改功能
void Permissions::editFunction()
{
    if (functionPlugin) {
        functionPlugin->editEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 修改功能权限
void Permissions::editFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->editEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
// 查找权限功能
void Permissions::searchFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->searchEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("function plugin is not loaded."));
    }
}
//权限模块
// 添加权限
void Permissions::addPermission()
{
    if (permissionPlugin) {
        permissionPlugin->addEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
//添加权限权限
void Permissions::addPermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->addEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
// 删除功能
void Permissions::deletePermission()
{
    if (permissionPlugin) {
        permissionPlugin->deleteEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
// 删除功能权限
void Permissions::deletePermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->deleteEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
// 修改功能
void Permissions::editPermission()
{
    if (permissionPlugin) {
        permissionPlugin->editEntity();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
// 修改功能权限
void Permissions::editPermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->editEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
    }
}
// 查找权限功能
void Permissions::searchPermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->searchEntityPermission();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("permission plugin is not loaded."));
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
    actionComboBox->addItems({"所有", "添加", "修改", "删除", "查找", "注册", "登录"});
    QDateEdit *startDateEdit = new QDateEdit();
    QDateEdit *endDateEdit = new QDateEdit();
    QDate today = QDate::currentDate();
    QDate tomorrow = today.addDays(1);
    startDateEdit->setDate(today);
    endDateEdit->setDate(tomorrow);
    startDateEdit->setCalendarPopup(true);
    endDateEdit->setCalendarPopup(true);

    QPushButton *filterButton = new QPushButton("筛选");
    QPushButton *deleteButton = new QPushButton("删除选中项");

    formLayout->addRow("用户名:", usernameEdit);
    formLayout->addRow("功能名称:", functionNameEdit);
    formLayout->addRow("操作状态:", resultComboBox);
    formLayout->addRow("操作名称:", actionComboBox);
    formLayout->addRow("开始时间:", startDateEdit);
    formLayout->addRow("结束时间:", endDateEdit);
    formLayout->addWidget(filterButton);
    formLayout->addWidget(deleteButton);
    formLayout->addRow(tableView);

    connect(filterButton, &QPushButton::clicked, this, [=]() {
        QString username = usernameEdit->text().trimmed();
        QString functionName = functionNameEdit->text().trimmed();
        QString result = resultComboBox->currentText();
        QString action = actionComboBox->currentText();
        QDate startDate = startDateEdit->date();
        QDate endDate = endDateEdit->date();
        QString queryStr = "SELECT LogID, FunctionName, Username, Result, Actions, Timestamp, Description FROM UserLogs WHERE 1=1";

        if (!functionName.isEmpty()) queryStr += " AND FunctionName = :functionName";
        if (!username.isEmpty()) queryStr += " AND Username = :username";
        if (result != "所有") queryStr += " AND Result = :result";
        if (action != "所有") queryStr += " AND Actions = :action";
        if (startDate.isValid()) queryStr += " AND Timestamp >= :startDate";
        if (endDate.isValid()) queryStr += " AND Timestamp <= :endDate";

        QSqlQuery query;
        query.prepare(queryStr);
        if (!functionName.isEmpty()) query.bindValue(":functionName", functionName);
        if (!username.isEmpty()) query.bindValue(":username", username);
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

    connect(deleteButton, &QPushButton::clicked, this, [=]() {
        QModelIndexList selectedIndexes = tableView->selectionModel()->selectedRows();
        if (selectedIndexes.isEmpty()) {
            QMessageBox::warning(dialog, "删除错误", "没有选中任何日志项,请整行选择");
            return;
        }
        QSqlQuery query;
        for (const QModelIndex &index : selectedIndexes) {
            int logId = model->data(model->index(index.row(), 0)).toInt();
            query.prepare("DELETE FROM UserLogs WHERE LogID = :id");
            query.bindValue(":id", logId);
            if (!query.exec()) {
                QMessageBox::critical(dialog, "删除错误", "删除日志失败: " + query.lastError().text());
                return;
            }
        }
        filterButton->click();
    });

    dialog->exec();
    delete dialog;
}

// // 查看日志
// void Permissions::ViewLogs()
// {
//     QDialog *dialog = new QDialog();
//     dialog->setWindowTitle("查看日志");
//     dialog->resize(800, 600);
//     QFormLayout *formLayout = new QFormLayout(dialog);

//     QTableView *tableView = new QTableView();
//     QSqlQueryModel *model = new QSqlQueryModel();
//     tableView->setModel(model);
//     tableView->resizeColumnsToContents(); // 调整列宽以适应内容
//     tableView->resizeRowsToContents();    // 调整行高以适应内容
//     tableView->horizontalHeader()->setStretchLastSection(true); // 使最后一列扩展以填充表格

//     QLineEdit *usernameEdit = new QLineEdit();
//     QLineEdit *functionNameEdit = new QLineEdit();
//     QComboBox *resultComboBox = new QComboBox();
//     resultComboBox->addItems({"所有", "成功", "失败"});
//     QComboBox *actionComboBox = new QComboBox();
//     actionComboBox->addItems({"所有", "添加", "修改", "删除", "查找", "注册", "登录"});
//     QDateEdit *startDateEdit = new QDateEdit();
//     QDateEdit *endDateEdit = new QDateEdit();
//     QDate today = QDate::currentDate();
//     QDate tomorrow = today.addDays(1);
//     startDateEdit->setDate(today);
//     endDateEdit->setDate(tomorrow);
//     startDateEdit->setCalendarPopup(true);
//     endDateEdit->setCalendarPopup(true);

//     QPushButton *filterButton = new QPushButton("筛选");

//     formLayout->addRow("用户名:", usernameEdit);
//     formLayout->addRow("功能名称:", functionNameEdit);
//     formLayout->addRow("操作状态:", resultComboBox);
//     formLayout->addRow("操作名称:", actionComboBox);
//     formLayout->addRow("开始时间:", startDateEdit);
//     formLayout->addRow("结束时间:", endDateEdit);
//     formLayout->addWidget(filterButton);
//     formLayout->addRow(tableView);

//     connect(filterButton, &QPushButton::clicked, this, [=]() {
//         QString username = usernameEdit->text().trimmed();
//         QString functionName = functionNameEdit->text().trimmed();
//         QString result = resultComboBox->currentText();
//         QString action = actionComboBox->currentText();
//         QDate startDate = startDateEdit->date();
//         QDate endDate = endDateEdit->date();
//         QString queryStr = "SELECT FunctionName, Username, Result, Actions, Timestamp, Description FROM UserLogs WHERE 1=1";

//         if (!functionName.isEmpty()) queryStr += " AND FunctionName = :functionName";
//         if (!username.isEmpty()) queryStr += " AND Username = :username";
//         if (result != "所有") queryStr += " AND Result = :result";
//         if (action != "所有") queryStr += " AND Actions = :action";
//         if (startDate.isValid()) queryStr += " AND Timestamp >= :startDate";
//         if (endDate.isValid()) queryStr += " AND Timestamp <= :endDate";

//         QSqlQuery query;
//         query.prepare(queryStr);
//         if (!functionName.isEmpty()) query.bindValue(":functionName", functionName);
//         if (!username.isEmpty()) query.bindValue(":username", username);
//         if (result != "所有") query.bindValue(":result", result);
//         if (action != "所有") query.bindValue(":action", action);
//         if (startDate.isValid()) query.bindValue(":startDate", startDate.toString("yyyy-MM-dd"));
//         if (endDate.isValid()) query.bindValue(":endDate", endDate.toString("yyyy-MM-dd"));

//         if (!query.exec()) {
//             QMessageBox::critical(dialog, "查询错误", "数据库查询失败: " + query.lastError().text());
//             writeLog(, "查看操作日志", "失败", "查找", "数据库查询失败");
//             return;
//         }
//         model->setQuery(query);
//         if (model->lastError().isValid()) {
//             QMessageBox::critical(dialog, "数据错误", "数据模型设置失败: " + model->lastError().text());
//             writeLog(, "查看操作日志", "失败", "查找", "数据模型设置失败");
//             return;
//         }
//         writeLog(, "查看操作日志", "成功", "查找", "查看操作日志");
//     });

//     dialog->exec();
//     delete dialog;
// }
