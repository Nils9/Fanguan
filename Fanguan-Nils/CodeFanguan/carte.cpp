#include "carte.h"
#include "catalogue.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <iostream>

Carte::Carte(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout * mainLayout = new QHBoxLayout();

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
    mainLayout->addStretch(5);
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
    setCentralWidget(new Catalogue());
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

