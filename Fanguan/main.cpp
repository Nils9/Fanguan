#include "mainwindow.h"
#include "entreeswindow.h"
#include "ui_entreeswidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    /*QApplication app(argc, argv);
    QWidget *widget = new QWidget;
    Ui_Form ui;
    ui.setupUi(widget);

    widget->show();
    return app.exec();*/

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
