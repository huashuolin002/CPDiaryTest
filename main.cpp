#include "mainwindow.h"
#include "registerdialog.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    RegisterDialog z;
    z.show();

    loginDialog ff;
    ff.show();

    return a.exec();
}
