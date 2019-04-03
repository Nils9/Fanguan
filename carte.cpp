#include "carte.h"
#include "catalogue.h"
#include "menu.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <iostream>

Carte::Carte(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout * mainLayout = new QHBoxLayout();
    //mainLayout->setSizeConstraint(QLayout::SetMinimumSize);

    QHBoxLayout * topLayout = new QHBoxLayout();
    topLayout->setSpacing(0);

    class CarteButton : public QPushButton
    {
    public:
        CarteButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(280, 70));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Helvetica", 13));
            setStyleSheet("color : white; background-color : #ff5e4d;");
        }
        virtual ~CarteButton() {}
    };

    QPushButton * entreesButton = new CarteButton("Entrees");
    QPushButton * platsButton = new CarteButton("Plats");
    QPushButton * dessertsButton = new CarteButton("Desserts");
    QPushButton * menusButton = new CarteButton("Menus");
    QPushButton * boissonsButton = new CarteButton("Boissons");

    QVBoxLayout * buttonLayout = new QVBoxLayout();
    buttonLayout->addStretch(5);
    buttonLayout->addWidget(entreesButton);
    buttonLayout->addStretch(5);
    buttonLayout->addWidget(platsButton);
    buttonLayout->addStretch(5);
    buttonLayout->addWidget(dessertsButton);
    buttonLayout->addStretch(5);
    buttonLayout->addWidget(menusButton);
    buttonLayout->addStretch(5);
    buttonLayout->addWidget(boissonsButton);
    buttonLayout->addStretch(5);


    //Zone centrale
    centralLayout = new QHBoxLayout();
    centralWidget = new Catalogue(this);
    centralWidget->setMinimumSize(QSize(300, 300));
    centralLayout->addWidget(centralWidget);

    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
  
    //mainLayout->addLayout(topLayout);
    //mainLayout->addStretch(5);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addLayout(centralLayout);

    setLayout(mainLayout);

    connect(entreesButton, SIGNAL(clicked()), this, SLOT(displayEntrees()));
    connect(platsButton, SIGNAL(clicked()), this, SLOT(displayPlats()));
    connect(dessertsButton, SIGNAL(clicked()), this, SLOT(displayDesserts()));
    connect(menusButton, SIGNAL(clicked()), this, SLOT(displayMenus()));
    connect(boissonsButton, SIGNAL(clicked()), this, SLOT(displayBoissons()));
}

void Carte::displayEntrees() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue());
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayPlats() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue());
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayDesserts() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue());
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayMenus() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Menu(nullptr, new Model()));
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayBoissons() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue());
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::paintEvent(QPaintEvent *){
}

