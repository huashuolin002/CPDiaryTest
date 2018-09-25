#include "mainwindow.h"
#include "registerdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    RegisterDialog z;
    z.show();

    return a.exec();
}
