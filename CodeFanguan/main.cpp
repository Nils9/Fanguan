#include "mainwindow.h"
#include "carte.h"
#include "template.h"
#include <QApplication>
#include "template.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setCentralWidget(new Template());
    w.show();
    return a.exec();
}
