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
#include <QHeaderView>
#include <QComboBox>
#include <QCompleter>
#include <Qlabel>
#include <QCheckBox>
#include <QScrollArea>
#include <QStyledItemDelegate>
#include <QApplication>

class IEntityPlugin : public QObject
{
    Q_OBJECT

public:
    virtual ~IEntityPlugin() {}

    // 增加、删除、修改实体
    virtual void addEntity() = 0;
    virtual void deleteEntity() = 0;
    virtual void editEntity() = 0;
    // 编辑实体权限
    virtual void editEntityPermission() = 0;
    virtual void addEntityPermission(const int permissionID, const int ID, const QString &Name) = 0;
    virtual void deleteEntityPermission(const int permissionID, const int ID, const QString &Name) = 0;
    virtual void searchEntityPermission() = 0;
    // 显示数据
    virtual void showData() = 0;
    // 设置数据库及数据
    virtual void setDatabase(const QSqlDatabase &db) = 0;
    virtual void setData(QTableView *View, int ID, const QString &username) = 0;
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
