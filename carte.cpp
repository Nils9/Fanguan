#include "carte.h"
#include "catalogue.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <iostream>

Carte::Carte(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();

    QHBoxLayout * topLayout = new QHBoxLayout();
    topLayout->setSpacing(0);

    class CarteButton : public QPushButton
    {
    public:
        CarteButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(200, 70));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Arial", 13));
            setStyleSheet("color : black; background-color : white;");
        }
        virtual ~CarteButton() {}
    };

    QPushButton * entreesButton = new CarteButton("Entrees");
    QPushButton * platsButton = new CarteButton("Plats");
    QPushButton * dessertsButton = new CarteButton("Desserts");
    QPushButton * menusButton = new CarteButton("Menus");
    QPushButton * boissonsButton = new CarteButton("Boissons");

    QVBoxLayout * buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(entreesButton);
    buttonLayout->addWidget(platsButton);
    buttonLayout->addWidget(dessertsButton);
    buttonLayout->addWidget(menusButton);
    buttonLayout->addWidget(boissonsButton);
    buttonLayout->setSpacing(50);

    mainLayout->addLayout(topLayout);
    mainLayout->addStretch(5);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addStretch(5);
    setLayout(mainLayout);

    //Zone centrale
    centralLayout = new QHBoxLayout();
    centralWidget = new QWidget(this);
    centralWidget->setMinimumSize(QSize(600, 400));
    centralLayout->addWidget(centralWidget);

    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

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
   std::cout << "Plats"<<std::endl;
}

void Carte::displayDesserts() {
   std::cout << "Desserts"<<std::endl;
}

void Carte::displayMenus() {
   std::cout << "Menus"<<std::endl;
}

void Carte::displayBoissons() {
   std::cout << "Boissons"<<std::endl;
}

void Carte::paintEvent(QPaintEvent *){/*
    centralLayout->removeWidget(centralWidget);
    centralLayout->addWidget(centralWidget);*/
}

