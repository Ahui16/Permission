#ifndef PERMISSIONS_H
#define PERMISSIONS_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QStackedWidget>
#include <QSqlTableModel>
#include <QDir>
#include <QSqlQuery>
#include <QSqlError>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QPluginLoader>
#include <qTimer>
#include <QComboBox>
#include <QDateEdit>
#include <QScreen>
#include "ui_MainForm.h"
#include "IEntityPlugin.h"

QT_BEGIN_NAMESPACE
namespace Ui{
    class Permissions;
}
QT_END_NAMESPACE

class Permissions : public QMainWindow {
    Q_OBJECT

public:
    Permissions(int id, const QString& username, QWidget *parent = nullptr);
    ~Permissions();
    void loadUserPlugin();  // 加载用户插件
    void loadGroupPlugin();  // 加载组插件
    void loadRolePlugin();  // 加载角色插件
    void loadFunctionPlugin();  // 加载功能插件
    void loadMenuPlugin();  //加载菜单插件

private slots:
    // 界面切换
    void handleButtonClick();
    void switchToUserPage();
    void switchToRolePage();
    void switchToGroupPage();
    void switchToFunctionPage();
    void switchToMenuPage();
    // 用户界面槽函数
    void addUser();
    void addUserPermission();
    void deleteUser();
    void deleteUserPermission();
    void editUser();
    void editUserPermission();
    void searchUserPermission();
    // 角色界面槽函数
    void addRole();
    void addRolePermission();
    void deleteRole();
    void deleteRolePermission();
    void editRole();
    void editRolePermission();
    void searchRolePermission();
    // 组界面槽函数
    void addGroup();
    void addGroupPermission();
    void deleteGroup();
    void deleteGroupPermission();
    void editGroup();
    void editGroupPermission();
    void searchGroupPermission();
    // 功能槽函数
    void addFunction();
    void addFunctionPermission();
    void deleteFunction();
    void deleteFunctionPermission();
    void editFunction();
    void editFunctionPermission();
    void searchFunctionPermission();
    // 界面槽函数
    void addMenu();
    void addMenuPermission();
    void deleteMenu();
    void deleteMenuPermission();
    void editMenu();
    void editMenuPermission();
    void searchMenuPermission();
    // 权限槽函数
    void addPermission();
    void deletePermission();
    void editPermission();
    //操作日志
    void ViewLogs();
private:
    Ui::Permissions *ui;
    IEntityPlugin *userPlugin;
    IEntityPlugin *groupPlugin;
    IEntityPlugin *rolePlugin;
    IEntityPlugin *functionPlugin;
    IEntityPlugin *menuPlugin;
    QSqlDatabase db;

    // 用户信息
    QString name;
    int userid;

    void setupDatabase();
    void setupConnections();
    void showUserPage();
    void showRolePage();
    void showGroupPage();
    void showFunctionPage();
    void showMenuPage();
    void writeLog(const int &id, const QString &username, const QString &functionName,
                  const QString &result, const QString &actions, const QString &description = "");
    void Menu();
};

#endif // PERMISSIONS_H
