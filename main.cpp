#include <QApplication>
#include "Permissions.h"
#include "logindialog.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    LoginDialog loginDialog;
    loginDialog.show();
    // Permissions *permissions = new Permissions(4, "4");
    // // 设置大小最大可为全屏, 最小为设计ui界面时候的大小
    // QScreen *screen = QGuiApplication::primaryScreen();
    // QRect screenGeometry = screen->geometry();
    // int screenWidth = screenGeometry.width();
    // int screenHeight = screenGeometry.height();
    // permissions->setMaximumSize(screenWidth, screenHeight);
    // permissions->show();
    return a.exec();
}
