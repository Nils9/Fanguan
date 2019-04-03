#include "template.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <iostream>
#include "commande.h"
#include "selection.h"
#include "carte.h"
#include "connexion.h"


Template::Template(QWidget *parent, Rubriques rub) : QWidget(parent)
{
    QFont buttonFont = QFont("Arial", 18);
    QVBoxLayout * mainLayout = new QVBoxLayout(this);

    //Barre supérieure
    QHBoxLayout * topMenuLayout = new QHBoxLayout();

    QPushButton * aboButton = new QPushButton(tr("Espace Habitue"));
    QPushButton * carteButton = new QPushButton(tr("Carte"));
    QPushButton * rechercheButton = new QPushButton(tr("Recherche"));
    QPushButton * selectionButton = new QPushButton(tr("Selection du Chef"));

    aboButton->setFont(buttonFont);
    carteButton->setFont(buttonFont);
    rechercheButton->setFont(buttonFont);
    selectionButton->setFont(buttonFont);

    topMenuLayout->addWidget(aboButton);
    topMenuLayout->addWidget(carteButton);
    topMenuLayout->addWidget(rechercheButton);
    topMenuLayout->addWidget(selectionButton);

    //Zone centrale
    switch (rub) {
    case CARTE:
        centralWidget = new Carte(this);
        break;
    default:
        centralWidget = new QWidget(this);
        break;
    }
    centralWidget->setMinimumSize(QSize(600, 400));
    centralLayout->addWidget(centralWidget);

    //Barre inférieure
    QHBoxLayout * bottomMenuLayout = new QHBoxLayout();

    QPushButton * serveurButton = new QPushButton(tr("Appeler Serveur"));
    QPushButton * commandeButton = new QPushButton(tr("Commande"));

    serveurButton->setFont(buttonFont);
    commandeButton->setFont(buttonFont);

    bottomMenuLayout->addWidget(serveurButton);
    bottomMenuLayout->addWidget(commandeButton);

    //Layout général
    mainLayout->addLayout(topMenuLayout);
    mainLayout->addLayout(centralLayout);
    mainLayout->addLayout(bottomMenuLayout);

    //Connection des boutons aux slots
    connect(aboButton, SIGNAL(clicked()), this, SLOT(displayEspaceAbo()));
    connect(rechercheButton, SIGNAL(clicked()), this, SLOT(displayRecherche()));
    connect(carteButton, SIGNAL(clicked()), this, SLOT(displayCarte()));
    connect(commandeButton, SIGNAL(clicked()), this, SLOT(displayCommande()));
    connect(serveurButton, SIGNAL(clicked()), this, SLOT(appelServeur()));
}

void Template::displayCarte() {
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Carte());
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayRecherche() {
   std::cout << "Recherche"<<std::endl;
}

void Template::displayEspaceAbo() {
   std::cout << "Espace habitués"<<std::endl;
   EspaceAbo * espaceAbo = new EspaceAbo();
   centralLayout->addWidget(espaceAbo);
}


void Template::displayCommande() {
   centralLayout->removeWidget(centralWidget);
   setCentralWidget(new Commande());
   centralLayout->addWidget(centralWidget);
}

void Template::appelServeur() {
   std::cout << "Serveur"<< std::endl;
}

void Template::paintEvent(QPaintEvent *){
}
