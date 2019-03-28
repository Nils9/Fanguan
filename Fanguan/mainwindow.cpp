#include <QStackedWidget>
#include <QComboBox>
#include <QStateMachine>
#include <QState>
#include <QButtonGroup>
#include <QLayout>
#include "mainwindow.h"
#include "Transitions.h"
#include "ui_templatewidget.h"
#include "ui_welcomewidget.h"
#include "ui_persowidget.h"
#include "ui_searchwidget.h"
#include "ui_selectionwidget.h"
#include "ui_cardtemplatewidget.h"
#include "ui_entreeswidget.h"
#include "ui_minientreeswidget.h"
#include "ui_miniplatswidget.h"
#include "ui_minidessertswidget.h"
#include "ui_minimenuswidget.h"
#include "ui_miniboissonswidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//,
   // ui(new Ui::MainWindow),
{
    //ui->setupUi(this);
    this->setFixedSize(1200,675);

    // on définit les pages du globalStackedWidget
    QWidget *welcomePageWidget = new QWidget;
    Ui_Form welcomeUi;
    welcomeUi.setupUi(welcomePageWidget);

    QWidget *templateWidget = new QWidget;
    Ui_Template templateUi;
    templateUi.setupUi(templateWidget);

    globalStackedWidget = new QStackedWidget;
    globalStackedWidget->addWidget(welcomePageWidget);
    globalStackedWidget->addWidget(templateWidget);

    this->setCentralWidget(globalStackedWidget);

    // on définit les pages du centerStackedWidget
    QWidget *persoWidget = new QWidget;
    Ui_Perso persoUi;
    persoUi.setupUi(persoWidget);

    QWidget *cardTemplateWidget = new QWidget;
    Ui_CardTemplate cardTemplateUi;
    cardTemplateUi.setupUi(cardTemplateWidget);

    QWidget *searchWidget = new QWidget;
    Ui_Search searchUi;
    searchUi.setupUi(searchWidget);

    QWidget *selectionWidget = new QWidget;
    Ui_Selection selectionUi;
    selectionUi.setupUi(selectionWidget);

    centerStackedWidget = new QStackedWidget;
    centerStackedWidget->addWidget(persoWidget);
    centerStackedWidget->addWidget(cardTemplateWidget);
    centerStackedWidget->addWidget(searchWidget);
    centerStackedWidget->addWidget(selectionWidget);

    templateUi.centralLayout->addWidget(centerStackedWidget);

    // on définit les pages du cardStackedWidget

    QWidget *entreesWidget = new QWidget;
    Ui_MiniEntrees entreesUi;
    entreesUi.setupUi(entreesWidget);

    QWidget *platsWidget = new QWidget;
    Ui_MiniPlats platsUi;
    platsUi.setupUi(platsWidget);

    QWidget *dessertsWidget = new QWidget;
    Ui_MiniDesserts dessertsUi;
    dessertsUi.setupUi(dessertsWidget);

    QWidget *menusWidget = new QWidget;
    Ui_MiniMenus menusUi;
    menusUi.setupUi(menusWidget);

    QWidget *boissonsWidget = new QWidget;
    Ui_MiniBoissons boissonsUi;
    boissonsUi.setupUi(boissonsWidget);

    cardStackedWidget = new QStackedWidget;
    cardStackedWidget->addWidget(entreesWidget);
    cardStackedWidget->addWidget(platsWidget);
    cardStackedWidget->addWidget(dessertsWidget);
    cardStackedWidget->addWidget(menusWidget);
    cardStackedWidget->addWidget(boissonsWidget);

    cardTemplateUi.rightLayout->addWidget(cardStackedWidget);

    globalStackedWidget->setCurrentIndex(0);

    connect(welcomeUi.persoButton, SIGNAL(clicked()),this,SLOT(goToPerso()));
    connect(welcomeUi.cardButton, SIGNAL(clicked()),this, SLOT(goToCard()));
    connect(welcomeUi.searchButton, SIGNAL(clicked()),this,SLOT(goToSearch()));
    connect(welcomeUi.selectionButton, SIGNAL(clicked()),this,SLOT(goToSelection()));

    connect(templateUi.persoButton, SIGNAL(clicked()),this,SLOT(goToPerso()));
    connect(templateUi.cardButton, SIGNAL(clicked()),this, SLOT(goToCard()));
    connect(templateUi.searchButton, SIGNAL(clicked()),this,SLOT(goToSearch()));
    connect(templateUi.selectionButton, SIGNAL(clicked()),this,SLOT(goToSelection()));

    connect(cardTemplateUi.entreesButton, SIGNAL(clicked()), this, SLOT(goToEntrees()));
    connect(cardTemplateUi.platsButton, SIGNAL(clicked()), this, SLOT(goToPlats()));
    connect(cardTemplateUi.dessertsButton, SIGNAL(clicked()), this, SLOT(goToDesserts()));
    connect(cardTemplateUi.menusButton, SIGNAL(clicked()), this, SLOT(goToMenus()));
    connect(cardTemplateUi.boissonsButton, SIGNAL(clicked()), this, SLOT(goToBoissons()));

}

void MainWindow::goToPerso(){
   globalStackedWidget->setCurrentIndex(1);
   centerStackedWidget->setCurrentIndex(0);
}

void MainWindow::goToCard(){
    globalStackedWidget->setCurrentIndex(1);
    centerStackedWidget->setCurrentIndex(1);
    cardStackedWidget->setCurrentIndex(0);
}

void MainWindow::goToSearch(){
    globalStackedWidget->setCurrentIndex(1);
    centerStackedWidget->setCurrentIndex(2);
}

void MainWindow::goToSelection(){
    globalStackedWidget->setCurrentIndex(1);
    centerStackedWidget->setCurrentIndex(3);
}

void MainWindow::goToEntrees(){
    cardStackedWidget->setCurrentIndex(0);
}

void MainWindow::goToPlats(){
    cardStackedWidget->setCurrentIndex(1);
}

void MainWindow::goToDesserts(){
    cardStackedWidget->setCurrentIndex(2);
}

void MainWindow::goToMenus(){
    cardStackedWidget->setCurrentIndex(3);
}

void MainWindow::goToBoissons(){
    cardStackedWidget->setCurrentIndex(4);
}

MainWindow::~MainWindow()
{
    delete ui;
}
