#include "entreeswindow.h"
#include "ui_entreeswindow.h"

EntreesWindow::EntreesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new EntreesWindow)
{

}

EntreesWindow::~EntreesWindow()
{
    delete ui;
}
