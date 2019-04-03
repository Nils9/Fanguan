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
#include "detail.h"

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
        centralLayout->removeWidget(centralWidget);
        centralWidget = new Carte(this);
        previousWidget = 2;
        break;

    case ESPACEABO:
        centralLayout->removeWidget(centralWidget);
        centralWidget = new EspaceAbo(this);
        previousWidget = 1;
        break;

    case RECHERCHE:
        centralLayout->removeWidget(centralWidget);
        centralWidget = new Detail(this);
        previousWidget = 1;
        break;

	case RECHERCHE:
    	std::cout << "Ouvrir detail"<< std::endl;
    	centralWidget = new Detail(this);
    	break;

    default:
        centralWidget = new QWidget();
        previousWidget = 3;
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
    previousWidget = 2;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new Carte(this));
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayRecherche() {
    previousWidget = 3;
   std::cout << "Recherche"<<std::endl;
}

void Template::displayEspaceAbo() {
    previousWidget = 1;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new EspaceAbo(this));
    centralLayout->addWidget(centralWidget);
    update();
}


void Template::displayCommande() {
   centralLayout->removeWidget(centralWidget);
   centralWidget->hide();
   setCentralWidget(new Commande(this));
   centralLayout->addWidget(centralWidget);
}

void Template::appelServeur() {
   std::cout << "Serveur"<< std::endl;
}


void Template::retourCommande() {
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    if(previousWidget == 1){
        setCentralWidget(new EspaceAbo(this));
    }
    if(previousWidget == 2){
        setCentralWidget(new Carte(this));
    }
    if(previousWidget == 3){
        setCentralWidget(new QWidget(this));
    }
    if(previousWidget == 4){
        setCentralWidget(new GererCompte(this));
    }
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayGererCompte() {
    previousWidget = 4;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new GererCompte(this));
    centralLayout->addWidget(centralWidget);
    update();
}



void Template::paintEvent(QPaintEvent *){
}