#ifndef IENTITYPLUGIN_H
#define IENTITYPLUGIN_H

#include <QString>
#include <QTableView>
#include <QObject>
#include <QSqlDatabase>
#include <QWidget>
#include <QStackedWidget>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlQuery>

class IEntityPlugin : public QObject
{
    Q_OBJECT

public:
    virtual ~IEntityPlugin() {}

    // 增加、删除、修改实体
    virtual void addEntity(QTableView *view, int id, const QString &Users) = 0;
    virtual void deleteEntity(QTableView *view, int id, const QString &Users) = 0;
    virtual void editEntity(QTableView *view, int id, const QString &Users) = 0;
    // 增加、删除、修改、查找权限
    virtual void addEntityPermission(int id, const QString &Users) = 0;
    virtual void deleteEntityPermission(int id, const QString &Users) = 0;
    virtual void editEntityPermission(int id, const QString &Users) = 0;
    virtual void searchEntityPermission(int id, const QString &Users) = 0;

    // 显示数据
    virtual void showPage(QTableView *view) = 0;
    virtual void showData(QTableView *view) = 0;
    // 设置数据库
    virtual void setDatabase(const QSqlDatabase &db) = 0;
    virtual void writeLog(const int &id, const QString &username, const QString &functionName,
                          const QString &result, const QString &actions, const QString &description = "")
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

signals:
    void entityUpdated();
};

#define IEntityPlugin_iid "com.example.PermissionsApp.IEntityPlugin"
Q_DECLARE_INTERFACE(IEntityPlugin, IEntityPlugin_iid)

#endif // IENTITYPLUGIN_H
