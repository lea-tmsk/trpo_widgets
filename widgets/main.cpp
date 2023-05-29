#include "mainwindow.h"
#include <QApplication>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window win;
    win.show();
    return a.exec();
}
