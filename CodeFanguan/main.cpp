#include "mainwindow.h"
#include "carte.h"
#include "template.h"
#include <QApplication>
#include "template.h"
#include "detail.h"
#include "connexion.h"
//#define TEST

int main(int argc, char *argv[])
{
#ifdef TEST
    QApplication a(argc, argv);
    QMainWindow w;
    w.setCentralWidget(new Detail());
    w.show();
    return a.exec();

#else
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
#endif

}
