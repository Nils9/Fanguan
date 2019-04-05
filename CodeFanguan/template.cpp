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
#include "recherche.h"

Template::Template(QWidget *parent, Model *m, Rubriques rub) : QWidget(parent)
{
    model = m;

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
    previousWidget = rub;
    switch (rub) {
    case CARTE:
        setCentralWidget(new Carte(this, model));
        break;

    case ESPACEABO:
        setCentralWidget(new EspaceAbo(this));
        break;

	case RECHERCHE:
        setCentralWidget(new Recherche(this, model));
        break;

    default:
        centralWidget = new QWidget();
        previousWidget = CARTE;
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
    previousWidget = CARTE;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new Carte(this, model));
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayRecherche() {
    previousWidget = RECHERCHE;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new Recherche(this, model));
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayEspaceAbo() {
    previousWidget = ESPACEABO;
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


void Template::displayDetail(Plat* p) {
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new Detail(this, p));
    centralLayout->addWidget(centralWidget);
}

void Template::appelServeur() {
   std::cout << "Serveur"<< std::endl;
}


void Template::retourCommande() {
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();

    switch (previousWidget) {
    case ESPACEABO:
        setCentralWidget(new EspaceAbo(this));
        break;
    case RECHERCHE:
        setCentralWidget(new Recherche(this, model));
        break;
    case CARTE:
        setCentralWidget(new Carte(this, model));
        break;
    case GERERCOMPTE:
        setCentralWidget(new GererCompte(this));
        break;
    default:
        break;
    }
    centralLayout->addWidget(centralWidget);
    update();
}

void Template::displayGererCompte() {
    previousWidget = GERERCOMPTE;
    centralLayout->removeWidget(centralWidget);
    centralWidget->hide();
    setCentralWidget(new GererCompte(this));
    centralLayout->addWidget(centralWidget);
    update();
}



void Template::paintEvent(QPaintEvent *){
}
