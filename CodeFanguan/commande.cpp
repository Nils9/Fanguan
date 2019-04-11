
#include "commande.h"
#include "template.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <iostream>
#include <QSpinBox>
#include <QLineEdit>
#include <QLabel>
#include <QFrame>
#include "commandeitem.h"

Commande::Commande(QWidget *parent, Model * model) : QWidget(parent)
{
    this->m = model;

    //Interface
    QVBoxLayout * mainLayout = new QVBoxLayout(this);

    QFont font = QFont("Arial", 22);

    //top
    QHBoxLayout * topLayout = new QHBoxLayout();
    QLabel * title = new QLabel(tr("Commande"));
    title->setFont(font);
    title->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QPushButton * backButton = new QPushButton();
    backButton->setIcon(QIcon(":/images/back.png"));
    backButton->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);

    topLayout->addWidget(title);
    topLayout->addWidget(backButton);
    mainLayout->addLayout(topLayout);

    //Cas connecté
    if(m->getConnected()){

        //Récupération des commandes des clients
        std::vector<Famille*> clients = m->getClients();
        int currentFamilyInd = m->getIndiceFamilleCourante();
        Famille * familleCourante = clients[currentFamilyInd];
        std::vector<Membre*> * membresCourants = familleCourante->getMembres();
        int nbOfCommands = membresCourants->size();

        QHBoxLayout * columns = new QHBoxLayout();

        for(unsigned int i = 0; i < nbOfCommands; i++){
            Membre * membreCourant = membresCourants->at(i);
            QWidget * membreCommande = newColonne(membreCourant, i);
            columns->addWidget(membreCommande);
        }

        mainLayout->addLayout(columns);

    }

    else{
        std::cout<< "je ne suis pas connecté" << std::endl;
        std::vector<CommandeModel*> commande = m->getCommandes();
        int nbOfCommands = commande.size();
        QGridLayout * grid = new QGridLayout();
        for (int i = 0; i < nbOfCommands; i++) {
            CommandeModel * commandeItem = commande[i];
            if(commandeItem->getNbUnites() > 1){
                grid->addWidget(new CommandeItem(this, commandeItem), i/3, i%3);
            }
        }
        grid->setHorizontalSpacing(30);
        mainLayout->addLayout(grid);
    }


    QHBoxLayout * bottomLayout = new QHBoxLayout();
    QPushButton * sendButton = new QPushButton("Envoyer en cuisine");
    sendButton->setFont(font);
    m->calculateTotal();
    float totalPrice = m->getTotal();
    total = new QLabel(QString("%1 euros").arg(totalPrice));
    total->setFont(font);
    bottomLayout->addWidget(total);
    bottomLayout->addStretch(10);
    bottomLayout->addWidget(sendButton);

    mainLayout->addLayout(bottomLayout);

    connect(backButton, SIGNAL(clicked()), parent, SLOT(retourCommande()));
}

QGroupBox * Commande::newColonne(Membre * membre, int nb){
    QString nom = membre->getName();
    QGroupBox * newColonne = new QGroupBox(nom);
    QVBoxLayout * colonne = new QVBoxLayout();
    colonne->addStretch(5);
    QButtonGroup * group = new QButtonGroup();
    group->setExclusive(true);
    std::vector<CommandeModel*> listePlats = membre->getCommande();
    float sousTotal = membre->getSousTotal();

    for(unsigned int i = 0; i < listePlats.size(); i++){
        CommandeModel * commande = listePlats[i];
        CommandeItem * commandeItem = new CommandeItem(this, commande);
        if(commande->getNbUnites() > 0){
            colonne->addWidget(commandeItem);
            colonne->addStretch(5);
        }
    }
    QLabel * total = new QLabel(QString("%1 euros").arg(sousTotal));
    sousTotaux.push_back(total);
    colonne->addWidget(total);
    colonne->setAlignment(Qt::AlignCenter);
    newColonne->setLayout(colonne);
    return newColonne;
}

void Commande::displayTotal(){
    std::cout << "je display" << std::endl;
    m->calculateTotal();
    total->setText(QString("%1 euros").arg(m->getTotal()));
    std::vector<Famille*> clients = m->getClients();
    int currentFamilyInd = m->getIndiceFamilleCourante();
    Famille * familleCourante = clients[currentFamilyInd];
    std::vector<Membre*> * membres = familleCourante->getMembres();
    for(int i = 0; i < sousTotaux.size(); i++){
        float nouveauSousTotal = membres->at(i)->getSousTotal();
        sousTotaux[i]->setText(QString("%1 euros").arg(nouveauSousTotal));
    }
}
