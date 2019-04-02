#include "mainwindow.h"
#include "carte.h"
#include "template.h"
#include <QApplication>
#include "template.h"
#include "recherche.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setCentralWidget(new Recherche());
    w.show();
    return a.exec();
}
