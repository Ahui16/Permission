QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += plugin

QMAKE_PROJECT_DEPTH = 0
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    logindialog.cpp \
    main.cpp \
    permissions.cpp

HEADERS += \
    IEntityPlugin.h \
    logindialog.h \
    permissions.h \
    ui_LoginDialog.h \
    ui_MainForm.h

FORMS += \
    LoginDialog.ui \
    MainForm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
