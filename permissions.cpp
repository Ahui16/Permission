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
    connect(ui->deleteUserButton, &QPushButton::clicked, this, &Permissions::deleteUser);
    connect(ui->editUserButton, &QPushButton::clicked, this, &Permissions::editUser);
    connect(ui->editUserPermissionButton, &QPushButton::clicked, this, &Permissions::editUserPermission);
    connect(ui->searchUserPermissionButton, &QPushButton::clicked, this, &Permissions::searchUserPermission);
    // 组界面按钮
    connect(ui->addGroupButton, &QPushButton::clicked, this, &Permissions::addGroup);
    connect(ui->deleteGroupButton, &QPushButton::clicked, this, &Permissions::deleteGroup);
    connect(ui->editGroupButton, &QPushButton::clicked, this, &Permissions::editGroup);
    connect(ui->editGroupPermissionButton, &QPushButton::clicked, this, &Permissions::editGroupPermission);
    connect(ui->searchGroupPermissionButton, &QPushButton::clicked, this, &Permissions::searchGroupPermission);
    // 角色界面按钮
    connect(ui->addRoleButton, &QPushButton::clicked, this, &Permissions::addRole);
    connect(ui->deleteRoleButton, &QPushButton::clicked, this, &Permissions::deleteRole);
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
    connect(ui->deletePermissionButton, &QPushButton::clicked, this, &Permissions::deletePermission);
    connect(ui->editPermissionButton, &QPushButton::clicked, this, &Permissions::editPermission);
    connect(ui->editPermissionPermissionButton, &QPushButton::clicked, this, &Permissions::editPermissionPermission);
    connect(ui->searchPermissionPermissionButton, &QPushButton::clicked, this, &Permissions::searchPermissionPermission);
    // 操作日志
    connect(ui->ViewLogsButton, &QPushButton::clicked, this, &Permissions::ViewLogs);
    // 显示当前用户
    QFontMetrics fm(ui->usernameLabel->font());
    QString elidedText = fm.elidedText("欢迎, 用户 " + name, Qt::ElideRight, ui->usernameLabel->width());
    ui->usernameLabel->setText(elidedText);
}
// 界面配置
void Permissions::Menu()
{
    QList<QString> functions = getUserFunctions(name);

    // ui->userButton->setEnabled(functions.contains("用户管理"));
    // if(functions.contains("用户管理"))
    loadUserPlugin();

    ui->roleButton->setEnabled(functions.contains("角色管理"));
    ui->groupButton->setEnabled(functions.contains("组别管理"));
    ui->functionButton->setEnabled(functions.contains("功能管理"));
    ui->permissionButton->setEnabled(functions.contains("权限管理"));

    ui->addUserButton->setVisible(functions.contains("添加用户"));
    ui->deleteUserButton->setVisible(functions.contains("删除用户"));
    ui->editUserButton->setVisible(functions.contains("修改用户"));
    ui->editUserPermissionButton->setVisible(functions.contains("设置用户权限"));
    ui->searchUserPermissionButton->setVisible(functions.contains("查找用户权限"));

    if(functions.contains("角色管理")) loadRolePlugin();
    ui->addRoleButton->setVisible(functions.contains("添加角色"));
    ui->deleteRoleButton->setVisible(functions.contains("删除角色"));
    ui->editRoleButton->setVisible(functions.contains("修改角色"));
    ui->editRolePermissionButton->setVisible(functions.contains("设置角色权限"));
    ui->searchRolePermissionButton->setVisible(functions.contains("查找角色权限"));

    if(functions.contains("组别管理")) loadGroupPlugin();
    ui->addGroupButton->setVisible(functions.contains("添加组别"));
    ui->deleteGroupButton->setVisible(functions.contains("删除组别"));
    ui->editGroupButton->setVisible(functions.contains("修改组别"));
    ui->editGroupPermissionButton->setVisible(functions.contains("设置组别权限"));
    ui->searchGroupPermissionButton->setVisible(functions.contains("查找组别权限"));

    if(functions.contains("功能管理")) loadFunctionPlugin();
    ui->addFunctionButton->setVisible(functions.contains("添加功能"));
    ui->deleteFunctionButton->setVisible(functions.contains("删除功能"));
    ui->editFunctionButton->setVisible(functions.contains("修改功能"));
    ui->editFunctionPermissionButton->setVisible(functions.contains("设置功能权限"));
    ui->searchFunctionPermissionButton->setVisible(functions.contains("查找功能权限"));

    if(functions.contains("权限管理")) loadPermissionPlugin();
    ui->addPermissionButton->setVisible(functions.contains("添加权限"));
    ui->deletePermissionButton->setVisible(functions.contains("删除权限"));
    ui->editPermissionButton->setVisible(functions.contains("修改权限"));
    ui->editPermissionPermissionButton->setVisible(functions.contains("设置权限功能"));
    ui->searchPermissionPermissionButton->setVisible(functions.contains("查找权限功能"));

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
        userPlugin->showData();
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
void Permissions::showRolePage()
{
    if (rolePlugin) {
        rolePlugin->showData();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
void Permissions::showGroupPage()
{
    if (groupPlugin) {
        groupPlugin->showData();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
void Permissions::showFunctionPage()
{
    if (functionPlugin) {
        functionPlugin->showData();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
void Permissions::showPermissionPage()
{
    if (permissionPlugin) {
        permissionPlugin->showData();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 添加用户
void Permissions::addUser() {
    if (userPlugin) {
        userPlugin->addEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
// 删除用户
void Permissions::deleteUser() {
    if (userPlugin) {
        userPlugin->deleteEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
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
                QString elidedText = fm.elidedText("欢迎, 用户 " + name, Qt::ElideRight, ui->usernameLabel->width());
                ui->usernameLabel->setText(elidedText);
            }
        }
    }else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
// 修改权限
void Permissions::editUserPermission() {
    if (userPlugin) {
        userPlugin->editEntityPermission();
        Menu();
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
// 查找用户
void Permissions::searchUserPermission() {
    if (userPlugin) {
            userPlugin->searchEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
// 组函数
// 添加组
void Permissions::addGroup() {
    if (groupPlugin) {
        groupPlugin->addEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
// 删除组
void Permissions::deleteGroup() {
    if (groupPlugin) {
        groupPlugin->deleteEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
// 修改组
void Permissions::editGroup() {
    if (groupPlugin) {
        groupPlugin->editEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
// 修改组权限
void Permissions::editGroupPermission() {
    if (groupPlugin) {
        groupPlugin->editEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
// 查找组权限
void Permissions::searchGroupPermission() {
    if (groupPlugin) {
        groupPlugin->searchEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "组别插件出错");
    }
}
// 角色模块
// 添加角色
void Permissions::addRole() {
    if (rolePlugin) {
        rolePlugin->addEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
// 删除角色
void Permissions::deleteRole() {
    if (rolePlugin) {
        rolePlugin->deleteEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
// 修改角色
void Permissions::editRole() {
    if (rolePlugin) {
        rolePlugin->editEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
// 修改角色权限
void Permissions::editRolePermission(){
    if (rolePlugin) {
        rolePlugin->editEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
// 查找角色权限
void Permissions::searchRolePermission() {
    if (rolePlugin) {
        rolePlugin->searchEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "角色插件出错");
    }
}
// 功能模块
// 添加功能
void Permissions::addFunction()
{
    if (functionPlugin) {
        functionPlugin->addEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
// 删除功能
void Permissions::deleteFunction()
{
    if (functionPlugin) {
        functionPlugin->deleteEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
// 修改功能
void Permissions::editFunction()
{
    if (functionPlugin) {
        functionPlugin->editEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
// 修改功能权限
void Permissions::editFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->editEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
// 查找权限功能
void Permissions::searchFunctionPermission()
{
    if (functionPlugin) {
        functionPlugin->searchEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "功能插件出措");
    }
}
//权限模块
// 添加权限
void Permissions::addPermission()
{
    if (permissionPlugin) {
        permissionPlugin->addEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 删除功能
void Permissions::deletePermission()
{
    if (permissionPlugin) {
        permissionPlugin->deleteEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 修改功能
void Permissions::editPermission()
{
    if (permissionPlugin) {
        permissionPlugin->editEntity();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 修改功能权限
void Permissions::editPermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->editEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 查找权限功能
void Permissions::searchPermissionPermission()
{
    if (permissionPlugin) {
        permissionPlugin->searchEntityPermission();
    } else {
        QMessageBox::critical(this, "插件错误", "权限插件出错");
    }
}
// 查看日志
void Permissions::ViewLogs()
{
    if (userPlugin) {
        QMetaObject::invokeMethod(userPlugin, "ViewLogs");
    } else {
        QMessageBox::critical(this, "插件错误", "用户插件出错");
    }
}
QList<QString> Permissions::getUserFunctions(const QString& username) {
    QList<QString> functions;
    QSqlQuery query;

    query.prepare(R"(
        -- 用户直接关联的权限
        SELECT DISTINCT f.FunctionName
        FROM Functions f
        JOIN Permission_Function pf ON f.FunctionID = pf.FunctionID
        JOIN Permissions p ON p.PermissionID = pf.PermissionID
        JOIN User_Permissions up ON up.PermissionID = p.PermissionID
        JOIN Users u ON u.UserID = up.UserID
        WHERE u.Username = :username

        UNION

        -- 用户通过角色获得的权限
        SELECT DISTINCT f.FunctionName
        FROM Functions f
        JOIN Permission_Function pf ON f.FunctionID = pf.FunctionID
        JOIN Permissions p ON p.PermissionID = pf.PermissionID
        JOIN Role_Permissions rp ON rp.PermissionID = p.PermissionID
        JOIN User_Roles ur ON ur.RoleID = rp.RoleID
        JOIN Users u ON u.UserID = ur.UserID
        WHERE u.Username = :username

        UNION

        -- 用户通过组获得的权限
        SELECT DISTINCT f.FunctionName
        FROM Functions f
        JOIN Permission_Function pf ON f.FunctionID = pf.FunctionID
        JOIN Permissions p ON p.PermissionID = pf.PermissionID
        JOIN Group_Permissions gp ON gp.PermissionID = p.PermissionID
        JOIN User_Groups ug ON ug.GroupID = gp.GroupID
        JOIN Users u ON u.UserID = ug.UserID
        WHERE u.Username = :username

        UNION

        -- 用户通过组中的角色获得的权限
        SELECT DISTINCT f.FunctionName
        FROM Functions f
        JOIN Permission_Function pf ON f.FunctionID = pf.FunctionID
        JOIN Permissions p ON p.PermissionID = pf.PermissionID
        JOIN Role_Permissions rp ON rp.PermissionID = p.PermissionID
        JOIN Group_Roles gr ON gr.RoleID = rp.RoleID
        JOIN User_Groups ug ON ug.GroupID = gr.GroupID
        JOIN Users u ON u.UserID = ug.UserID
        WHERE u.Username = :username
    )");

    query.bindValue(":username", username);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "错误", query.lastError().text());
        qDebug() << "查询执行失败: " << query.lastError().text();
        return functions;
    }

    while (query.next()) {
        functions.append(query.value(0).toString());
    }

    return functions;
}
