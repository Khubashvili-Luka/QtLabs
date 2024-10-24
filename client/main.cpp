#include <AuthWindow.h>
#include <mainwindow.h>
#include <clientfunctions.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AuthWindow authw;
    MainWindow mainw;

    load_setting("login") == "-1" ?authw.show() : mainw.show();

    return a.exec();
}
