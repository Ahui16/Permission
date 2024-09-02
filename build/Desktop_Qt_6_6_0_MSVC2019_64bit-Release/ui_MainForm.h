/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Permissions
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *groupPage;
    QTableView *groupTableView;
    QPushButton *addGroupButton;
    QPushButton *addGroupPermissionButton;
    QPushButton *deleteGroupButton;
    QPushButton *deleteGroupPermissionButton;
    QPushButton *editGroupButton;
    QPushButton *editGroupPermissionButton;
    QPushButton *searchGroupPermissionButton;
    QWidget *functionPage;
    QTableView *functionTableView;
    QPushButton *addFunctionButton;
    QPushButton *addFunctionPermissionButton;
    QPushButton *deleteFunctionButton;
    QPushButton *deleteFunctionPermissionButton;
    QPushButton *editFunctionButton;
    QPushButton *editFunctionPermissionButton;
    QPushButton *searchFunctionPermissionButton;
    QWidget *userPage;
    QTableView *userTableView;
    QPushButton *addUserButton;
    QPushButton *addPermissionButton;
    QPushButton *deleteUserButton;
    QPushButton *deletePermissionButton;
    QPushButton *editUserButton;
    QPushButton *editPermissionButton;
    QPushButton *searchUserPermissionButton;
    QWidget *rolePage;
    QTableView *roleTableView;
    QPushButton *addRoleButton;
    QPushButton *addRolePermissionButton;
    QPushButton *deleteRoleButton;
    QPushButton *deleteRolePermissionButton;
    QPushButton *editRoleButton;
    QPushButton *editRolePermissionButton;
    QPushButton *searchRolePermissionButton;
    QPushButton *userButton;
    QPushButton *roleButton;
    QPushButton *groupButton;
    QPushButton *functionButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Permissions)
    {
        if (Permissions->objectName().isEmpty())
            Permissions->setObjectName("Permissions");
        Permissions->resize(800, 600);
        centralwidget = new QWidget(Permissions);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(40, 90, 701, 461));
        groupPage = new QWidget();
        groupPage->setObjectName("groupPage");
        groupTableView = new QTableView(groupPage);
        groupTableView->setObjectName("groupTableView");
        groupTableView->setGeometry(QRect(30, 30, 481, 401));
        addGroupButton = new QPushButton(groupPage);
        addGroupButton->setObjectName("addGroupButton");
        addGroupButton->setGeometry(QRect(530, 30, 75, 51));
        addGroupPermissionButton = new QPushButton(groupPage);
        addGroupPermissionButton->setObjectName("addGroupPermissionButton");
        addGroupPermissionButton->setGeometry(QRect(620, 30, 75, 51));
        deleteGroupButton = new QPushButton(groupPage);
        deleteGroupButton->setObjectName("deleteGroupButton");
        deleteGroupButton->setGeometry(QRect(530, 100, 75, 51));
        deleteGroupPermissionButton = new QPushButton(groupPage);
        deleteGroupPermissionButton->setObjectName("deleteGroupPermissionButton");
        deleteGroupPermissionButton->setGeometry(QRect(620, 100, 75, 51));
        editGroupButton = new QPushButton(groupPage);
        editGroupButton->setObjectName("editGroupButton");
        editGroupButton->setGeometry(QRect(530, 170, 75, 51));
        editGroupPermissionButton = new QPushButton(groupPage);
        editGroupPermissionButton->setObjectName("editGroupPermissionButton");
        editGroupPermissionButton->setGeometry(QRect(620, 170, 75, 51));
        searchGroupPermissionButton = new QPushButton(groupPage);
        searchGroupPermissionButton->setObjectName("searchGroupPermissionButton");
        searchGroupPermissionButton->setGeometry(QRect(530, 240, 161, 51));
        stackedWidget->addWidget(groupPage);
        functionPage = new QWidget();
        functionPage->setObjectName("functionPage");
        functionTableView = new QTableView(functionPage);
        functionTableView->setObjectName("functionTableView");
        functionTableView->setGeometry(QRect(30, 30, 481, 401));
        addFunctionButton = new QPushButton(functionPage);
        addFunctionButton->setObjectName("addFunctionButton");
        addFunctionButton->setGeometry(QRect(530, 30, 75, 51));
        addFunctionPermissionButton = new QPushButton(functionPage);
        addFunctionPermissionButton->setObjectName("addFunctionPermissionButton");
        addFunctionPermissionButton->setGeometry(QRect(620, 30, 75, 51));
        deleteFunctionButton = new QPushButton(functionPage);
        deleteFunctionButton->setObjectName("deleteFunctionButton");
        deleteFunctionButton->setGeometry(QRect(530, 100, 75, 51));
        deleteFunctionPermissionButton = new QPushButton(functionPage);
        deleteFunctionPermissionButton->setObjectName("deleteFunctionPermissionButton");
        deleteFunctionPermissionButton->setGeometry(QRect(620, 100, 75, 51));
        editFunctionButton = new QPushButton(functionPage);
        editFunctionButton->setObjectName("editFunctionButton");
        editFunctionButton->setGeometry(QRect(530, 170, 75, 51));
        editFunctionPermissionButton = new QPushButton(functionPage);
        editFunctionPermissionButton->setObjectName("editFunctionPermissionButton");
        editFunctionPermissionButton->setGeometry(QRect(620, 170, 75, 51));
        searchFunctionPermissionButton = new QPushButton(functionPage);
        searchFunctionPermissionButton->setObjectName("searchFunctionPermissionButton");
        searchFunctionPermissionButton->setGeometry(QRect(530, 240, 161, 51));
        stackedWidget->addWidget(functionPage);
        userPage = new QWidget();
        userPage->setObjectName("userPage");
        userTableView = new QTableView(userPage);
        userTableView->setObjectName("userTableView");
        userTableView->setGeometry(QRect(30, 30, 481, 401));
        addUserButton = new QPushButton(userPage);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(530, 30, 75, 51));
        addPermissionButton = new QPushButton(userPage);
        addPermissionButton->setObjectName("addPermissionButton");
        addPermissionButton->setGeometry(QRect(620, 30, 75, 51));
        deleteUserButton = new QPushButton(userPage);
        deleteUserButton->setObjectName("deleteUserButton");
        deleteUserButton->setGeometry(QRect(530, 100, 75, 51));
        deletePermissionButton = new QPushButton(userPage);
        deletePermissionButton->setObjectName("deletePermissionButton");
        deletePermissionButton->setGeometry(QRect(620, 100, 75, 51));
        editUserButton = new QPushButton(userPage);
        editUserButton->setObjectName("editUserButton");
        editUserButton->setGeometry(QRect(530, 170, 75, 51));
        editPermissionButton = new QPushButton(userPage);
        editPermissionButton->setObjectName("editPermissionButton");
        editPermissionButton->setGeometry(QRect(620, 170, 75, 51));
        searchUserPermissionButton = new QPushButton(userPage);
        searchUserPermissionButton->setObjectName("searchUserPermissionButton");
        searchUserPermissionButton->setGeometry(QRect(530, 240, 161, 51));
        stackedWidget->addWidget(userPage);
        rolePage = new QWidget();
        rolePage->setObjectName("rolePage");
        roleTableView = new QTableView(rolePage);
        roleTableView->setObjectName("roleTableView");
        roleTableView->setGeometry(QRect(30, 30, 481, 401));
        addRoleButton = new QPushButton(rolePage);
        addRoleButton->setObjectName("addRoleButton");
        addRoleButton->setGeometry(QRect(530, 30, 75, 51));
        addRolePermissionButton = new QPushButton(rolePage);
        addRolePermissionButton->setObjectName("addRolePermissionButton");
        addRolePermissionButton->setGeometry(QRect(620, 30, 75, 51));
        deleteRoleButton = new QPushButton(rolePage);
        deleteRoleButton->setObjectName("deleteRoleButton");
        deleteRoleButton->setGeometry(QRect(530, 100, 75, 51));
        deleteRolePermissionButton = new QPushButton(rolePage);
        deleteRolePermissionButton->setObjectName("deleteRolePermissionButton");
        deleteRolePermissionButton->setGeometry(QRect(620, 100, 75, 51));
        editRoleButton = new QPushButton(rolePage);
        editRoleButton->setObjectName("editRoleButton");
        editRoleButton->setGeometry(QRect(530, 170, 75, 51));
        editRolePermissionButton = new QPushButton(rolePage);
        editRolePermissionButton->setObjectName("editRolePermissionButton");
        editRolePermissionButton->setGeometry(QRect(620, 170, 75, 51));
        searchRolePermissionButton = new QPushButton(rolePage);
        searchRolePermissionButton->setObjectName("searchRolePermissionButton");
        searchRolePermissionButton->setGeometry(QRect(530, 240, 161, 51));
        stackedWidget->addWidget(rolePage);
        userButton = new QPushButton(centralwidget);
        userButton->setObjectName("userButton");
        userButton->setGeometry(QRect(80, 40, 111, 51));
        roleButton = new QPushButton(centralwidget);
        roleButton->setObjectName("roleButton");
        roleButton->setGeometry(QRect(250, 40, 111, 51));
        groupButton = new QPushButton(centralwidget);
        groupButton->setObjectName("groupButton");
        groupButton->setGeometry(QRect(420, 40, 111, 51));
        functionButton = new QPushButton(centralwidget);
        functionButton->setObjectName("functionButton");
        functionButton->setGeometry(QRect(580, 40, 111, 51));
        Permissions->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Permissions);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Permissions->setMenuBar(menubar);
        statusbar = new QStatusBar(Permissions);
        statusbar->setObjectName("statusbar");
        Permissions->setStatusBar(statusbar);

        retranslateUi(Permissions);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Permissions);
    } // setupUi

    void retranslateUi(QMainWindow *Permissions)
    {
        Permissions->setWindowTitle(QCoreApplication::translate("Permissions", "Permissions", nullptr));
        addGroupButton->setText(QCoreApplication::translate("Permissions", "\345\242\236\345\212\240\347\273\204", nullptr));
        addGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\345\242\236\345\212\240\346\235\203\351\231\220", nullptr));
        deleteGroupButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\347\273\204", nullptr));
        deleteGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\346\235\203\351\231\220", nullptr));
        editGroupButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\347\273\204", nullptr));
        editGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        searchGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\347\273\204\346\235\203\351\231\220", nullptr));
        addFunctionButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\345\212\237\350\203\275", nullptr));
        addFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\347\273\221\345\256\232\346\235\203\351\231\220", nullptr));
        deleteFunctionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\345\212\237\350\203\275", nullptr));
        deleteFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\346\235\203\351\231\220", nullptr));
        editFunctionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\345\212\237\350\203\275", nullptr));
        editFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        searchFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\345\212\237\350\203\275\346\235\203\351\231\220", nullptr));
        addUserButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        addPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\346\235\203\351\231\220", nullptr));
        deleteUserButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        deletePermissionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\346\235\203\351\231\220", nullptr));
        editUserButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        editPermissionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        searchUserPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        addRoleButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\350\247\222\350\211\262", nullptr));
        addRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\346\235\203\351\231\220", nullptr));
        deleteRoleButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\350\247\222\350\211\262", nullptr));
        deleteRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\346\235\203\351\231\220", nullptr));
        editRoleButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\350\247\222\350\211\262", nullptr));
        editRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        searchRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\350\247\222\350\211\262\346\235\203\351\231\220", nullptr));
        userButton->setText(QCoreApplication::translate("Permissions", "Users", nullptr));
        roleButton->setText(QCoreApplication::translate("Permissions", "Roles", nullptr));
        groupButton->setText(QCoreApplication::translate("Permissions", "Groups", nullptr));
        functionButton->setText(QCoreApplication::translate("Permissions", "Functions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Permissions: public Ui_Permissions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
