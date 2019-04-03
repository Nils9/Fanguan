#include "connexion.h"

Connexion::Connexion(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter);
    layout->setMargin(100);
    layout->setSpacing(20);
    QFormLayout *formLayout = new QFormLayout();
    formLayout->setSpacing(10);
    QLineEdit * familleLineEdit = new QLineEdit();
    QLineEdit * passwordLineEdit = new QLineEdit();
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    formLayout->addRow(tr("&Famille:"), familleLineEdit);
    formLayout->addRow(tr("&Password:"),passwordLineEdit);
    layout->addLayout(formLayout);
    QPushButton * connexionButton = new QPushButton("Connexion");
    QPushButton * creerCompteButton = new QPushButton("Créer un compte");
    connexionButton->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    creerCompteButton->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    layout->addWidget(connexionButton);
    layout->addWidget(creerCompteButton);

}
