#include "connexion.h"

Connexion::Connexion(QWidget *parent, Model * m) : QWidget(parent)
{
    model = m;
    QVBoxLayout * layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter);
    layout->setMargin(100);
    layout->setSpacing(20);
    QFormLayout *formLayout = new QFormLayout();
    formLayout->setSpacing(10);
    familleLineEdit = new QLineEdit();
    passwordLineEdit = new QLineEdit();
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    familleLineEdit->setFont(model->getButtonFont());
    passwordLineEdit->setFont(model->getButtonFont());
    formLayout->addRow(tr("&Famille:"), familleLineEdit);
    formLayout->addRow(tr("&Password:"),passwordLineEdit);
    layout->addLayout(formLayout);

    QHBoxLayout * connexionLayout = new QHBoxLayout();
    QPushButton * connexionButton = new QPushButton("Connexion");
    feedbackLabel = new QLabel();
    connexionLayout->addWidget(connexionButton);
    connexionLayout->addWidget(feedbackLabel);

    QPushButton * creerCompteButton = new QPushButton("Creer un compte");
    connexionButton->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    creerCompteButton->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    creerCompteButton->setFont(model->getButtonFont());
    connexionButton->setFont(model->getButtonFont());
    layout->addLayout(connexionLayout);
    layout->addWidget(creerCompteButton);

    connect(creerCompteButton,SIGNAL(clicked()),parent,SLOT(displayInscription()));
    connect(connexionButton,SIGNAL(clicked()),this,SLOT(verifierIdentifiants()));
    connect(this,SIGNAL(identifiantsCorrects()),parent,SLOT(displayEspaceAbo()));

}

void Connexion::verifierIdentifiants(){
    QString familleName = familleLineEdit->text();
    QString password = passwordLineEdit->text();
    std::vector<Famille*> clients = model->getClients();
    int i = 0;
    while(i<clients.size() && familleName != clients[i]->getName()){
        i+=1;
    }
    if(i == clients.size()){
        feedbackLabel->setText("Famille introuvable!");
    }
    else{
        if(password == clients[i]->getPassword()){
            model->setConnected(true);
            model->setIndiceFamilleCourante(i);
            emit(identifiantsCorrects());
        }
        else{
            feedbackLabel->setText("Mot de passe incorrect!");
        }
    }
}



