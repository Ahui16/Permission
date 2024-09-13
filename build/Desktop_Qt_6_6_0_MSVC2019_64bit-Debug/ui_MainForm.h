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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Permissions
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *userButton;
    QPushButton *roleButton;
    QPushButton *groupButton;
    QPushButton *functionButton;
    QPushButton *permissionButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *showverticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *usernameLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *userverticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *groupPage;
    QGridLayout *gridLayout_4;
    QPushButton *editGroupButton;
    QPushButton *searchGroupPermissionButton;
    QPushButton *editGroupPermissionButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *addGroupButton;
    QTableView *groupTableView;
    QPushButton *deleteGroupButton;
    QSpacerItem *horizontalSpacer_8;
    QWidget *functionPage;
    QGridLayout *gridLayout_5;
    QPushButton *editFunctionPermissionButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QTableView *functionTableView;
    QPushButton *addFunctionButton;
    QPushButton *editFunctionButton;
    QPushButton *deleteFunctionButton;
    QPushButton *searchFunctionPermissionButton;
    QWidget *permissionPage;
    QGridLayout *gridLayout_6;
    QPushButton *addPermissionButton;
    QPushButton *editPermissionButton;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *deletePermissionButton;
    QPushButton *editPermissionPermissionButton;
    QSpacerItem *horizontalSpacer_11;
    QTableView *permissionTableView;
    QPushButton *searchPermissionPermissionButton;
    QWidget *userPage;
    QGridLayout *gridLayout;
    QPushButton *editUserButton;
    QPushButton *editUserPermissionButton;
    QPushButton *deleteUserButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ViewLogsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *addUserButton;
    QPushButton *searchUserPermissionButton;
    QTableView *userTableView;
    QWidget *rolePage;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *searchRolePermissionButton;
    QPushButton *editRolePermissionButton;
    QPushButton *deleteRoleButton;
    QPushButton *addRoleButton;
    QPushButton *editRoleButton;
    QSpacerItem *horizontalSpacer_6;
    QTableView *roleTableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Permissions)
    {
        if (Permissions->objectName().isEmpty())
            Permissions->setObjectName("Permissions");
        Permissions->resize(906, 620);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Permissions->sizePolicy().hasHeightForWidth());
        Permissions->setSizePolicy(sizePolicy);
        Permissions->setMinimumSize(QSize(0, 0));
        Permissions->setMaximumSize(QSize(1000, 1000));
        Permissions->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: #e6f2ff;\n"
"}"));
        centralwidget = new QWidget(Permissions);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(122, 0));
        frame->setMaximumSize(QSize(122, 16777215));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #4c4c4c; /* \351\273\221\350\211\262\346\232\227\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    border: 1px solid #555555; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 124, 221));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userButton = new QPushButton(layoutWidget);
        userButton->setObjectName("userButton");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(userButton->sizePolicy().hasHeightForWidth());
        userButton->setSizePolicy(sizePolicy2);
        userButton->setMinimumSize(QSize(122, 39));
        userButton->setMaximumSize(QSize(122, 39));
        userButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background: transparent;\n"
"                color: #efefef;\n"
"                font-size: 15px;\n"
"                padding: 10px 20px;\n"
" }\n"
"QPushButton:hover { /*\345\201\234\347\225\231*/\n"
"               background: lightgray;\n"
" }\n"
"QPushButton:pressed { /*\347\202\271\345\207\273*/\n"
"                background: gray;\n"
"               color: white;\n"
"}\n"
"QPushButton:checked { /*\351\200\211\346\213\251*/\n"
"                background: #54a5e3;\n"
"                color: white;\n"
"}\n"
"QPushButton:disabled {\n"
"    color: #a9a9a9; /* \347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        userButton->setCheckable(true);

        verticalLayout_2->addWidget(userButton);

        roleButton = new QPushButton(layoutWidget);
        roleButton->setObjectName("roleButton");
        sizePolicy2.setHeightForWidth(roleButton->sizePolicy().hasHeightForWidth());
        roleButton->setSizePolicy(sizePolicy2);
        roleButton->setMinimumSize(QSize(122, 39));
        roleButton->setMaximumSize(QSize(122, 39));
        roleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background: transparent;\n"
"                color: #efefef;\n"
"                font-size: 15px;\n"
"                padding: 10px 20px;\n"
" }\n"
"QPushButton:hover {\n"
"               background: lightgray;\n"
" }\n"
"QPushButton:pressed {\n"
"                background: gray;\n"
"               color: white;\n"
"}\n"
"QPushButton:checked {\n"
"                background: #54a5e3;\n"
"                color: white;\n"
"}\n"
"QPushButton:disabled {\n"
"    color: #a9a9a9; /* \347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        roleButton->setCheckable(true);

        verticalLayout_2->addWidget(roleButton);

        groupButton = new QPushButton(layoutWidget);
        groupButton->setObjectName("groupButton");
        sizePolicy2.setHeightForWidth(groupButton->sizePolicy().hasHeightForWidth());
        groupButton->setSizePolicy(sizePolicy2);
        groupButton->setMinimumSize(QSize(122, 39));
        groupButton->setMaximumSize(QSize(122, 39));
        groupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background: transparent;\n"
"                color: #efefef;\n"
"                font-size: 15px;\n"
"                padding: 10px 20px;\n"
" }\n"
"QPushButton:hover {\n"
"               background: lightgray;\n"
" }\n"
"QPushButton:pressed {\n"
"                background: gray;\n"
"               color: white;\n"
"}\n"
"QPushButton:checked {\n"
"                background: #54a5e3;\n"
"                color: white;\n"
"}\n"
"QPushButton:disabled {\n"
"    color: #a9a9a9; /* \347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        groupButton->setCheckable(true);

        verticalLayout_2->addWidget(groupButton);

        functionButton = new QPushButton(layoutWidget);
        functionButton->setObjectName("functionButton");
        sizePolicy2.setHeightForWidth(functionButton->sizePolicy().hasHeightForWidth());
        functionButton->setSizePolicy(sizePolicy2);
        functionButton->setMinimumSize(QSize(122, 39));
        functionButton->setMaximumSize(QSize(122, 39));
        functionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background: transparent;\n"
"                color: #efefef;\n"
"                font-size: 15px;\n"
"                padding: 10px 20px;\n"
" }\n"
"QPushButton:hover {\n"
"               background: lightgray;\n"
" }\n"
"QPushButton:pressed {\n"
"                background: gray;\n"
"               color: white;\n"
"}\n"
"QPushButton:checked {\n"
"                background: #54a5e3;\n"
"                color: white;\n"
"}\n"
"QPushButton:disabled {\n"
"    color: #a9a9a9; /* \347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        functionButton->setCheckable(true);

        verticalLayout_2->addWidget(functionButton);

        permissionButton = new QPushButton(layoutWidget);
        permissionButton->setObjectName("permissionButton");
        sizePolicy2.setHeightForWidth(permissionButton->sizePolicy().hasHeightForWidth());
        permissionButton->setSizePolicy(sizePolicy2);
        permissionButton->setMinimumSize(QSize(122, 39));
        permissionButton->setMaximumSize(QSize(122, 39));
        permissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background: transparent;\n"
"                color: #efefef;\n"
"                font-size: 15px;\n"
"                padding: 10px 20px;\n"
" }\n"
"QPushButton:hover {\n"
"               background: lightgray;\n"
" }\n"
"QPushButton:pressed {\n"
"                background: gray;\n"
"               color: white;\n"
"}\n"
"QPushButton:checked {\n"
"                background: #54a5e3;\n"
"                color: white;\n"
"}\n"
"QPushButton:disabled {\n"
"    color: #a9a9a9; /* \347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        permissionButton->setCheckable(true);

        verticalLayout_2->addWidget(permissionButton);

        verticalSpacer = new QSpacerItem(122, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        showverticalLayout = new QVBoxLayout();
        showverticalLayout->setObjectName("showverticalLayout");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 40));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #ffffff; /* \351\273\221\350\211\262\346\232\227\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        usernameLabel = new QLabel(frame_2);
        usernameLabel->setObjectName("usernameLabel");
        sizePolicy1.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy1);
        usernameLabel->setMinimumSize(QSize(151, 40));
        usernameLabel->setMaximumSize(QSize(151, 40));
        QFont font;
        font.setPointSize(11);
        usernameLabel->setFont(font);
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            background-color: #ffffff; /*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));
        usernameLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(usernameLabel);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        showverticalLayout->addWidget(frame_2);

        userverticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        showverticalLayout->addItem(userverticalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget { background-color: white; }"));
        groupPage = new QWidget();
        groupPage->setObjectName("groupPage");
        gridLayout_4 = new QGridLayout(groupPage);
        gridLayout_4->setObjectName("gridLayout_4");
        editGroupButton = new QPushButton(groupPage);
        editGroupButton->setObjectName("editGroupButton");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(editGroupButton->sizePolicy().hasHeightForWidth());
        editGroupButton->setSizePolicy(sizePolicy4);
        editGroupButton->setMinimumSize(QSize(75, 51));
        editGroupButton->setMaximumSize(QSize(75, 51));
        editGroupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #74b7ff; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_4->addWidget(editGroupButton, 0, 3, 1, 1);

        searchGroupPermissionButton = new QPushButton(groupPage);
        searchGroupPermissionButton->setObjectName("searchGroupPermissionButton");
        sizePolicy4.setHeightForWidth(searchGroupPermissionButton->sizePolicy().hasHeightForWidth());
        searchGroupPermissionButton->setSizePolicy(sizePolicy4);
        searchGroupPermissionButton->setMinimumSize(QSize(85, 51));
        searchGroupPermissionButton->setMaximumSize(QSize(85, 51));
        searchGroupPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_4->addWidget(searchGroupPermissionButton, 0, 5, 1, 1);

        editGroupPermissionButton = new QPushButton(groupPage);
        editGroupPermissionButton->setObjectName("editGroupPermissionButton");
        sizePolicy4.setHeightForWidth(editGroupPermissionButton->sizePolicy().hasHeightForWidth());
        editGroupPermissionButton->setSizePolicy(sizePolicy4);
        editGroupPermissionButton->setMinimumSize(QSize(85, 51));
        editGroupPermissionButton->setMaximumSize(QSize(85, 51));
        editGroupPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5a90c6; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_4->addWidget(editGroupPermissionButton, 0, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        addGroupButton = new QPushButton(groupPage);
        addGroupButton->setObjectName("addGroupButton");
        sizePolicy4.setHeightForWidth(addGroupButton->sizePolicy().hasHeightForWidth());
        addGroupButton->setSizePolicy(sizePolicy4);
        addGroupButton->setMinimumSize(QSize(75, 51));
        addGroupButton->setMaximumSize(QSize(75, 51));
        addGroupButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#3284e8; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_4->addWidget(addGroupButton, 0, 1, 1, 1);

        groupTableView = new QTableView(groupPage);
        groupTableView->setObjectName("groupTableView");
        groupTableView->setAutoFillBackground(false);
        groupTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \345\217\226\346\266\210\345\244\226\345\261\202\350\276\271\346\241\206 */\n"
"    gridline-color: transparent; /* \351\232\220\350\227\217\347\275\221\346\240\274\347\272\277 */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: none; /* \345\217\226\346\266\210\345\215\225\345\205\203\346\240\274\350\276\271\346\241\206 */\n"
"    padding: 0; /* \345\216\273\351\231\244\345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #a8a8a8; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: black; /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \345\217\226\346\266\210\350\241\250\345\244\264\350\276\271\346\241\206 */\n"
"    font-weight: bold; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\212\240"
                        "\347\262\227 */\n"
"    font-size: 15px; /* \350\260\203\346\225\264\350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"	text-align: left;\n"
"}\n"
""));
        groupTableView->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(groupTableView, 1, 1, 1, 6);

        deleteGroupButton = new QPushButton(groupPage);
        deleteGroupButton->setObjectName("deleteGroupButton");
        sizePolicy4.setHeightForWidth(deleteGroupButton->sizePolicy().hasHeightForWidth());
        deleteGroupButton->setSizePolicy(sizePolicy4);
        deleteGroupButton->setMinimumSize(QSize(75, 51));
        deleteGroupButton->setMaximumSize(QSize(75, 51));
        deleteGroupButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #ff5858; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\272\242\350\211\262 */\n"
"	color: white;\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color:#df4d4d; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_4->addWidget(deleteGroupButton, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 6, 1, 1);

        stackedWidget->addWidget(groupPage);
        functionPage = new QWidget();
        functionPage->setObjectName("functionPage");
        gridLayout_5 = new QGridLayout(functionPage);
        gridLayout_5->setObjectName("gridLayout_5");
        editFunctionPermissionButton = new QPushButton(functionPage);
        editFunctionPermissionButton->setObjectName("editFunctionPermissionButton");
        sizePolicy4.setHeightForWidth(editFunctionPermissionButton->sizePolicy().hasHeightForWidth());
        editFunctionPermissionButton->setSizePolicy(sizePolicy4);
        editFunctionPermissionButton->setMinimumSize(QSize(85, 51));
        editFunctionPermissionButton->setMaximumSize(QSize(85, 51));
        editFunctionPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5a90c6; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_5->addWidget(editFunctionPermissionButton, 0, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 0, 6, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        functionTableView = new QTableView(functionPage);
        functionTableView->setObjectName("functionTableView");
        functionTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \345\217\226\346\266\210\345\244\226\345\261\202\350\276\271\346\241\206 */\n"
"    gridline-color: transparent; /* \351\232\220\350\227\217\347\275\221\346\240\274\347\272\277 */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: none; /* \345\217\226\346\266\210\345\215\225\345\205\203\346\240\274\350\276\271\346\241\206 */\n"
"    padding: 0; /* \345\216\273\351\231\244\345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #a8a8a8; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: black; /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \345\217\226\346\266\210\350\241\250\345\244\264\350\276\271\346\241\206 */\n"
"    font-weight: bold; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\212\240"
                        "\347\262\227 */\n"
"    font-size: 15px; /* \350\260\203\346\225\264\350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
""));
        functionTableView->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(functionTableView, 2, 1, 1, 6);

        addFunctionButton = new QPushButton(functionPage);
        addFunctionButton->setObjectName("addFunctionButton");
        sizePolicy4.setHeightForWidth(addFunctionButton->sizePolicy().hasHeightForWidth());
        addFunctionButton->setSizePolicy(sizePolicy4);
        addFunctionButton->setMinimumSize(QSize(75, 51));
        addFunctionButton->setMaximumSize(QSize(75, 51));
        addFunctionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#3284e8; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_5->addWidget(addFunctionButton, 0, 1, 1, 1);

        editFunctionButton = new QPushButton(functionPage);
        editFunctionButton->setObjectName("editFunctionButton");
        sizePolicy4.setHeightForWidth(editFunctionButton->sizePolicy().hasHeightForWidth());
        editFunctionButton->setSizePolicy(sizePolicy4);
        editFunctionButton->setMinimumSize(QSize(75, 51));
        editFunctionButton->setMaximumSize(QSize(75, 51));
        editFunctionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #74b7ff; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_5->addWidget(editFunctionButton, 0, 3, 1, 1);

        deleteFunctionButton = new QPushButton(functionPage);
        deleteFunctionButton->setObjectName("deleteFunctionButton");
        sizePolicy4.setHeightForWidth(deleteFunctionButton->sizePolicy().hasHeightForWidth());
        deleteFunctionButton->setSizePolicy(sizePolicy4);
        deleteFunctionButton->setMinimumSize(QSize(75, 51));
        deleteFunctionButton->setMaximumSize(QSize(75, 51));
        deleteFunctionButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #ff5858; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\272\242\350\211\262 */\n"
"	color: white;\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color:#df4d4d; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_5->addWidget(deleteFunctionButton, 0, 2, 1, 1);

        searchFunctionPermissionButton = new QPushButton(functionPage);
        searchFunctionPermissionButton->setObjectName("searchFunctionPermissionButton");
        sizePolicy2.setHeightForWidth(searchFunctionPermissionButton->sizePolicy().hasHeightForWidth());
        searchFunctionPermissionButton->setSizePolicy(sizePolicy2);
        searchFunctionPermissionButton->setMinimumSize(QSize(85, 51));
        searchFunctionPermissionButton->setMaximumSize(QSize(85, 51));
        searchFunctionPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_5->addWidget(searchFunctionPermissionButton, 0, 5, 1, 1);

        stackedWidget->addWidget(functionPage);
        permissionPage = new QWidget();
        permissionPage->setObjectName("permissionPage");
        gridLayout_6 = new QGridLayout(permissionPage);
        gridLayout_6->setObjectName("gridLayout_6");
        addPermissionButton = new QPushButton(permissionPage);
        addPermissionButton->setObjectName("addPermissionButton");
        sizePolicy4.setHeightForWidth(addPermissionButton->sizePolicy().hasHeightForWidth());
        addPermissionButton->setSizePolicy(sizePolicy4);
        addPermissionButton->setMinimumSize(QSize(75, 51));
        addPermissionButton->setMaximumSize(QSize(75, 51));
        QFont font1;
        font1.setPointSize(9);
        addPermissionButton->setFont(font1);
        addPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#3284e8; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_6->addWidget(addPermissionButton, 0, 1, 1, 1);

        editPermissionButton = new QPushButton(permissionPage);
        editPermissionButton->setObjectName("editPermissionButton");
        sizePolicy4.setHeightForWidth(editPermissionButton->sizePolicy().hasHeightForWidth());
        editPermissionButton->setSizePolicy(sizePolicy4);
        editPermissionButton->setMinimumSize(QSize(75, 51));
        editPermissionButton->setMaximumSize(QSize(75, 51));
        editPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #74b7ff; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_6->addWidget(editPermissionButton, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_12, 0, 6, 1, 1);

        deletePermissionButton = new QPushButton(permissionPage);
        deletePermissionButton->setObjectName("deletePermissionButton");
        sizePolicy4.setHeightForWidth(deletePermissionButton->sizePolicy().hasHeightForWidth());
        deletePermissionButton->setSizePolicy(sizePolicy4);
        deletePermissionButton->setMinimumSize(QSize(75, 51));
        deletePermissionButton->setMaximumSize(QSize(75, 51));
        deletePermissionButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #ff5858; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\272\242\350\211\262 */\n"
"	color: white;\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color:#df4d4d; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_6->addWidget(deletePermissionButton, 0, 2, 1, 1);

        editPermissionPermissionButton = new QPushButton(permissionPage);
        editPermissionPermissionButton->setObjectName("editPermissionPermissionButton");
        sizePolicy4.setHeightForWidth(editPermissionPermissionButton->sizePolicy().hasHeightForWidth());
        editPermissionPermissionButton->setSizePolicy(sizePolicy4);
        editPermissionPermissionButton->setMinimumSize(QSize(85, 51));
        editPermissionPermissionButton->setMaximumSize(QSize(85, 51));
        editPermissionPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5a90c6; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_6->addWidget(editPermissionPermissionButton, 0, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        permissionTableView = new QTableView(permissionPage);
        permissionTableView->setObjectName("permissionTableView");
        permissionTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \345\217\226\346\266\210\345\244\226\345\261\202\350\276\271\346\241\206 */\n"
"    gridline-color: transparent; /* \351\232\220\350\227\217\347\275\221\346\240\274\347\272\277 */\n"
"}\n"
"QTableView::item {\n"
"    border: none; /* \345\217\226\346\266\210\345\215\225\345\205\203\346\240\274\350\276\271\346\241\206 */\n"
"    padding: 0; /* \345\216\273\351\231\244\345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"QHeaderView::section {  \n"
"    background-color: #a8a8a8; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: black; /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \345\217\226\346\266\210\350\241\250\345\244\264\350\276\271\346\241\206 */\n"
"    font-weight: bold; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\212\240\347\262"
                        "\227 */\n"
"    font-size: 15px; /* \350\260\203\346\225\264\350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"	text-align: right;\n"
"}\n"
""));
        permissionTableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        permissionTableView->verticalHeader()->setVisible(false);

        gridLayout_6->addWidget(permissionTableView, 1, 1, 1, 6);

        searchPermissionPermissionButton = new QPushButton(permissionPage);
        searchPermissionPermissionButton->setObjectName("searchPermissionPermissionButton");
        sizePolicy4.setHeightForWidth(searchPermissionPermissionButton->sizePolicy().hasHeightForWidth());
        searchPermissionPermissionButton->setSizePolicy(sizePolicy4);
        searchPermissionPermissionButton->setMinimumSize(QSize(85, 51));
        searchPermissionPermissionButton->setMaximumSize(QSize(85, 51));
        searchPermissionPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\273\277\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #71ad6b; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\273\277\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_6->addWidget(searchPermissionPermissionButton, 0, 5, 1, 1);

        stackedWidget->addWidget(permissionPage);
        userPage = new QWidget();
        userPage->setObjectName("userPage");
        gridLayout = new QGridLayout(userPage);
        gridLayout->setObjectName("gridLayout");
        editUserButton = new QPushButton(userPage);
        editUserButton->setObjectName("editUserButton");
        sizePolicy4.setHeightForWidth(editUserButton->sizePolicy().hasHeightForWidth());
        editUserButton->setSizePolicy(sizePolicy4);
        editUserButton->setMinimumSize(QSize(75, 51));
        editUserButton->setMaximumSize(QSize(75, 51));
        editUserButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #74b7ff; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(editUserButton, 0, 3, 1, 1);

        editUserPermissionButton = new QPushButton(userPage);
        editUserPermissionButton->setObjectName("editUserPermissionButton");
        sizePolicy4.setHeightForWidth(editUserPermissionButton->sizePolicy().hasHeightForWidth());
        editUserPermissionButton->setSizePolicy(sizePolicy4);
        editUserPermissionButton->setMinimumSize(QSize(85, 51));
        editUserPermissionButton->setMaximumSize(QSize(85, 51));
        editUserPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5a90c6; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(editUserPermissionButton, 0, 4, 1, 1);

        deleteUserButton = new QPushButton(userPage);
        deleteUserButton->setObjectName("deleteUserButton");
        sizePolicy4.setHeightForWidth(deleteUserButton->sizePolicy().hasHeightForWidth());
        deleteUserButton->setSizePolicy(sizePolicy4);
        deleteUserButton->setMinimumSize(QSize(75, 51));
        deleteUserButton->setMaximumSize(QSize(75, 51));
        deleteUserButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #ff5858; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\272\242\350\211\262 */\n"
"	color: white;\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color:#df4d4d; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(deleteUserButton, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        ViewLogsButton = new QPushButton(userPage);
        ViewLogsButton->setObjectName("ViewLogsButton");
        sizePolicy4.setHeightForWidth(ViewLogsButton->sizePolicy().hasHeightForWidth());
        ViewLogsButton->setSizePolicy(sizePolicy4);
        ViewLogsButton->setMinimumSize(QSize(85, 51));
        ViewLogsButton->setMaximumSize(QSize(85, 51));
        ViewLogsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #71ad6b; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\273\277\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(ViewLogsButton, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 7, 1, 1);

        addUserButton = new QPushButton(userPage);
        addUserButton->setObjectName("addUserButton");
        sizePolicy4.setHeightForWidth(addUserButton->sizePolicy().hasHeightForWidth());
        addUserButton->setSizePolicy(sizePolicy4);
        addUserButton->setMinimumSize(QSize(75, 51));
        addUserButton->setMaximumSize(QSize(75, 51));
        addUserButton->setFont(font1);
        addUserButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#3284e8; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(addUserButton, 0, 1, 1, 1);

        searchUserPermissionButton = new QPushButton(userPage);
        searchUserPermissionButton->setObjectName("searchUserPermissionButton");
        sizePolicy4.setHeightForWidth(searchUserPermissionButton->sizePolicy().hasHeightForWidth());
        searchUserPermissionButton->setSizePolicy(sizePolicy4);
        searchUserPermissionButton->setMinimumSize(QSize(85, 51));
        searchUserPermissionButton->setMaximumSize(QSize(85, 51));
        searchUserPermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\273\277\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #71ad6b; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\273\277\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout->addWidget(searchUserPermissionButton, 0, 5, 1, 1);

        userTableView = new QTableView(userPage);
        userTableView->setObjectName("userTableView");
        userTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \345\217\226\346\266\210\345\244\226\345\261\202\350\276\271\346\241\206 */\n"
"    gridline-color: transparent; /* \351\232\220\350\227\217\347\275\221\346\240\274\347\272\277 */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: none; /* \345\217\226\346\266\210\345\215\225\345\205\203\346\240\274\350\276\271\346\241\206 */\n"
"    padding: 0; /* \345\216\273\351\231\244\345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #a8a8a8; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: black; /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \345\217\226\346\266\210\350\241\250\345\244\264\350\276\271\346\241\206 */\n"
"    font-weight: bold; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\212\240"
                        "\347\262\227 */\n"
"    font-size: 15px; /* \350\260\203\346\225\264\350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
""));
        userTableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        userTableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(userTableView, 1, 1, 1, 7);

        stackedWidget->addWidget(userPage);
        rolePage = new QWidget();
        rolePage->setObjectName("rolePage");
        gridLayout_2 = new QGridLayout(rolePage);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        searchRolePermissionButton = new QPushButton(rolePage);
        searchRolePermissionButton->setObjectName("searchRolePermissionButton");
        sizePolicy4.setHeightForWidth(searchRolePermissionButton->sizePolicy().hasHeightForWidth());
        searchRolePermissionButton->setSizePolicy(sizePolicy4);
        searchRolePermissionButton->setMinimumSize(QSize(85, 51));
        searchRolePermissionButton->setMaximumSize(QSize(85, 51));
        searchRolePermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#8bd583; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_2->addWidget(searchRolePermissionButton, 0, 5, 1, 1);

        editRolePermissionButton = new QPushButton(rolePage);
        editRolePermissionButton->setObjectName("editRolePermissionButton");
        sizePolicy4.setHeightForWidth(editRolePermissionButton->sizePolicy().hasHeightForWidth());
        editRolePermissionButton->setSizePolicy(sizePolicy4);
        editRolePermissionButton->setMinimumSize(QSize(85, 51));
        editRolePermissionButton->setMaximumSize(QSize(85, 51));
        editRolePermissionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5a90c6; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}"));

        gridLayout_2->addWidget(editRolePermissionButton, 0, 4, 1, 1);

        deleteRoleButton = new QPushButton(rolePage);
        deleteRoleButton->setObjectName("deleteRoleButton");
        sizePolicy4.setHeightForWidth(deleteRoleButton->sizePolicy().hasHeightForWidth());
        deleteRoleButton->setSizePolicy(sizePolicy4);
        deleteRoleButton->setMinimumSize(QSize(75, 51));
        deleteRoleButton->setMaximumSize(QSize(75, 51));
        deleteRoleButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #ff5858; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\272\242\350\211\262 */\n"
"	color: white;\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color:#df4d4d; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_2->addWidget(deleteRoleButton, 0, 2, 1, 1);

        addRoleButton = new QPushButton(rolePage);
        addRoleButton->setObjectName("addRoleButton");
        sizePolicy4.setHeightForWidth(addRoleButton->sizePolicy().hasHeightForWidth());
        addRoleButton->setSizePolicy(sizePolicy4);
        addRoleButton->setMinimumSize(QSize(75, 51));
        addRoleButton->setMaximumSize(QSize(75, 51));
        addRoleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#3284e8; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_2->addWidget(addRoleButton, 0, 1, 1, 1);

        editRoleButton = new QPushButton(rolePage);
        editRoleButton->setObjectName("editRoleButton");
        sizePolicy4.setHeightForWidth(editRoleButton->sizePolicy().hasHeightForWidth());
        editRoleButton->setSizePolicy(sizePolicy4);
        editRoleButton->setMinimumSize(QSize(75, 51));
        editRoleButton->setMaximumSize(QSize(75, 51));
        editRoleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #74b7ff; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"	border: none; /* \345\217\226\346\266\210\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: #1a65d3; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: white; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_2->addWidget(editRoleButton, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 6, 1, 1);

        roleTableView = new QTableView(rolePage);
        roleTableView->setObjectName("roleTableView");
        roleTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \345\217\226\346\266\210\345\244\226\345\261\202\350\276\271\346\241\206 */\n"
"    gridline-color: transparent; /* \351\232\220\350\227\217\347\275\221\346\240\274\347\272\277 */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: none; /* \345\217\226\346\266\210\345\215\225\345\205\203\346\240\274\350\276\271\346\241\206 */\n"
"    padding: 0; /* \345\216\273\351\231\244\345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #a8a8a8; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: black; /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \345\217\226\346\266\210\350\241\250\345\244\264\350\276\271\346\241\206 */\n"
"    font-weight: bold; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\212\240"
                        "\347\262\227 */\n"
"    font-size: 15px; /* \350\260\203\346\225\264\350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
""));
        roleTableView->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(roleTableView, 1, 1, 1, 6);

        stackedWidget->addWidget(rolePage);

        showverticalLayout->addWidget(stackedWidget);


        gridLayout_3->addLayout(showverticalLayout, 0, 1, 1, 1);

        Permissions->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Permissions);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 21));
        Permissions->setMenuBar(menubar);
        statusbar = new QStatusBar(Permissions);
        statusbar->setObjectName("statusbar");
        Permissions->setStatusBar(statusbar);

        retranslateUi(Permissions);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Permissions);
    } // setupUi

    void retranslateUi(QMainWindow *Permissions)
    {
        Permissions->setWindowTitle(QCoreApplication::translate("Permissions", "Permissions", nullptr));
        userButton->setText(QCoreApplication::translate("Permissions", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        roleButton->setText(QCoreApplication::translate("Permissions", "\350\247\222\350\211\262\347\256\241\347\220\206", nullptr));
        groupButton->setText(QCoreApplication::translate("Permissions", "\347\273\204\347\256\241\347\220\206", nullptr));
        functionButton->setText(QCoreApplication::translate("Permissions", "\345\212\237\350\203\275\347\256\241\347\220\206", nullptr));
        permissionButton->setText(QCoreApplication::translate("Permissions", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Permissions", "Username", nullptr));
        editGroupButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\347\273\204", nullptr));
        searchGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\347\273\204\346\235\203\351\231\220", nullptr));
        editGroupPermissionButton->setText(QCoreApplication::translate("Permissions", "\347\274\226\350\276\221\347\273\204\346\235\203\351\231\220", nullptr));
        addGroupButton->setText(QCoreApplication::translate("Permissions", "\345\242\236\345\212\240\347\273\204", nullptr));
        deleteGroupButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\347\273\204", nullptr));
        editFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\350\256\276\347\275\256\345\212\237\350\203\275\346\235\203\351\231\220", nullptr));
        addFunctionButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\345\212\237\350\203\275", nullptr));
        editFunctionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\345\212\237\350\203\275", nullptr));
        deleteFunctionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\345\212\237\350\203\275", nullptr));
        searchFunctionPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\345\212\237\350\203\275\346\235\203\351\231\220", nullptr));
        addPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\346\235\203\351\231\220", nullptr));
        editPermissionButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        deletePermissionButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\346\235\203\351\231\220", nullptr));
        editPermissionPermissionButton->setText(QCoreApplication::translate("Permissions", "\347\274\226\350\276\221\346\235\203\351\231\220\345\205\263\350\201\224", nullptr));
        searchPermissionPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\346\235\203\351\231\220\345\205\263\350\201\224", nullptr));
        editUserButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        editUserPermissionButton->setText(QCoreApplication::translate("Permissions", "\347\274\226\350\276\221\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        deleteUserButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        ViewLogsButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\347\234\213\346\223\215\344\275\234\346\227\245\345\277\227", nullptr));
        addUserButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        searchUserPermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        searchRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\346\237\245\346\211\276\350\247\222\350\211\262\346\235\203\351\231\220", nullptr));
        editRolePermissionButton->setText(QCoreApplication::translate("Permissions", "\347\274\226\350\276\221\350\247\222\350\211\262\346\235\203\351\231\220", nullptr));
        deleteRoleButton->setText(QCoreApplication::translate("Permissions", "\345\210\240\351\231\244\350\247\222\350\211\262", nullptr));
        addRoleButton->setText(QCoreApplication::translate("Permissions", "\346\267\273\345\212\240\350\247\222\350\211\262", nullptr));
        editRoleButton->setText(QCoreApplication::translate("Permissions", "\344\277\256\346\224\271\350\247\222\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Permissions: public Ui_Permissions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
