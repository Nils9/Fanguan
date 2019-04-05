#include "inscription.h"

Inscription::Inscription(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter);
    layout->setMargin(100);
    QFormLayout * formLayout = new QFormLayout();
    QLineEdit * nomCompteLineEdit = new QLineEdit();
    QLineEdit * passwordLineEdit = new QLineEdit();
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    QSpinBox * nombrePersonnesSpinBox = new QSpinBox();
    scrollArea = new QScrollArea();


    membresFormLayout = new QFormLayout();
    membresVector = new std::vector<QLineEdit*>();
    scrollArea->setLayout(membresFormLayout);
    QPushButton * validerButton = new QPushButton("Valider le compte");

    formLayout->addRow(tr("&Nom du compte"),nomCompteLineEdit);
    formLayout->addRow(tr("&Mot de passe"),passwordLineEdit);
    formLayout->addRow(tr("&Nombre de personnes associées:"),nombrePersonnesSpinBox);
    layout->addLayout(formLayout);
    layout->addWidget(scrollArea);
    layout->addWidget(validerButton);

    connect(nombrePersonnesSpinBox,SIGNAL(valueChanged(int)),this,SLOT(displayMembres(int)));

}

void Inscription::displayMembres(int n){
    for(int j =0; j<=membresVector->size(); j++){
        if(membresFormLayout->rowCount()>0){
         //membresFormLayout->removeRow(0);
        }
    }
    membresVector->clear();
    for(int i = 1; i<=n; i++){
        QLineEdit * membreLineEdit = new QLineEdit();

        membresVector->push_back(membreLineEdit);
        membresFormLayout->addRow("&Membre "+QString::number(i)+" :",membreLineEdit);

    }
    QWidget * contentWidget = new QWidget();
    contentWidget->setLayout(membresFormLayout);
    scrollArea->setWidget(contentWidget);
}
