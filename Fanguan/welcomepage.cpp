#include "welcomepage.h"
#include "ui_welcomewindow.h"
WelcomePage::WelcomePage(QWidget *parent) :
    QWidget(parent)//,
    //ui(new Ui::WelcomePage)
{
   // ui->setupUi(this);
}

WelcomePage::~WelcomePage()
{
    delete ui;
}
