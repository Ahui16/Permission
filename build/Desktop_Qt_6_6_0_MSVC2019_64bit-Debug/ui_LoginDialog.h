/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *UsernamelineEdit;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLineEdit *PasswordlineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(440, 320);
        LoginDialog->setMinimumSize(QSize(440, 320));
        LoginDialog->setMaximumSize(QSize(440, 320));
        UsernamelineEdit = new QLineEdit(LoginDialog);
        UsernamelineEdit->setObjectName("UsernamelineEdit");
        UsernamelineEdit->setGeometry(QRect(130, 80, 181, 41));
        UsernamelineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 8px;         /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}"));
        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(130, 180, 181, 41));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00aaff;  /* \346\265\205\350\223\235\350\211\262 */\n"
"    border: 1px solid #87ceeb;  /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px;         /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 10px;              /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #ffffff;             /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 14px;            /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #87ceeb;  /* \346\202\254\345\201\234\346\227\266\351\242\234\350\211\262\345\217\230\346\267\261\350\223\235\350\211\262 */\n"
"}"));
        registerButton = new QPushButton(LoginDialog);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(210, 220, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        registerButton->setFont(font);
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent;   /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none;              /* \346\227\240\350\276\271\346\241\206 */\n"
"    color: #b0b0b0;            /* \345\255\227\344\275\223\351\242\234\350\211\262\357\274\214\346\265\205\347\201\260\350\211\262 */\n"
"    font-size: 12px;           /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: Arial;        /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    font-weight: normal;       /* \345\255\227\344\275\223\347\262\227\347\273\206 */\n"
"    font-style: normal;        /* \345\255\227\344\275\223\346\240\267\345\274\217\357\274\210\344\270\215\346\226\234\344\275\223\357\274\211 */\n"
"    padding: 5px 10px;         /* \346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"	text-decoration: underline;  /*\344\270\213\345\210\222\347\272\277*/\n"
"}\n"
""));
        PasswordlineEdit = new QLineEdit(LoginDialog);
        PasswordlineEdit->setObjectName("PasswordlineEdit");
        PasswordlineEdit->setGeometry(QRect(130, 130, 181, 41));
        PasswordlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 8px;         /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}"));
        PasswordlineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 101, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Brush Script MT\", cursive; /* \350\256\276\347\275\256\350\211\272\346\234\257\345\255\227\344\275\223 */\n"
"    font-size: 24px;                         /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: bold;                       /* \345\212\240\347\262\227\345\255\227\344\275\223 */\n"
"    font-style: italic;                     /* \346\226\234\344\275\223 */\n"
"    color: #333333;                          /* \350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262\357\274\210\346\267\261\347\201\260\350\211\262\357\274\211 */\n"
"}"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 220, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #b0b0b0;            /* \345\255\227\344\275\223\351\242\234\350\211\262\357\274\214\346\265\205\347\201\260\350\211\262 */\n"
"    font-size: 12px;           /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: Arial;        /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    font-weight: normal;       /* \345\255\227\344\275\223\347\262\227\347\273\206 */\n"
"    font-style: normal;        /* \345\255\227\344\275\223\346\240\267\345\274\217\357\274\210\344\270\215\346\226\234\344\275\223\357\274\211 */\n"
"    padding: 5px 10px;         /* \346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
""));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        UsernamelineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Username", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginDialog", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        PasswordlineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
