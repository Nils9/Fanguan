#include "gerercompte.h"

GererCompte::GererCompte(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * layout = new QVBoxLayout(this);
    layout->setSpacing(20);
    layout->setMargin(100);

    QHBoxLayout * headerVerticalLayout = new QHBoxLayout();
    QLabel * familyLabel = new QLabel("Famille Calvi");
    QToolButton * backButton = new QToolButton();
    backButton->setIcon(QIcon(":images/back.png"));
    headerVerticalLayout->addWidget(familyLabel);
    headerVerticalLayout->addWidget(backButton);

    QProgressBar * familleProgressBar = new QProgressBar();
    familleProgressBar->setValue(68);
    familleProgressBar->setFormat("Habitués");

    progressGridLayout = new QGridLayout();
    progressGridLayout->setAlignment(Qt::AlignCenter);

    plusButton = new QToolButton();
    plusButton->setIcon(QIcon(":images/plus.png"));
    plusButton->setIconSize(QSize(25,25));
    plusButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(plusButton,5,1);

    addDeleteButton(1,0);
    addLabel(1,1,"Margot");
    addProgressBar(1,2,71);
    addDeleteButton(2,0);
    addLabel(2,1,"Arthur");
    addProgressBar(2,2,81);
    addDeleteButton(3,0);
    addLabel(3,1,"Nils");
    addProgressBar(3,2,48);
    addDeleteButton(4,0);
    addLabel(4,1,"Julien");
    addProgressBar(4,2,56);

    QLabel * passwordLabel = new QLabel("Mot de passe: ");
    QLineEdit * passwordLineEdit = new QLineEdit();
    passwordLineEdit->setText("Bisounours42");
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    layout->addLayout(headerVerticalLayout);
    layout->addWidget(familleProgressBar);
    layout->addStretch(10);
    layout->addLayout(progressGridLayout);
    layout->addStretch(10);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);

    connect(plusButton,SIGNAL(clicked()),this,SLOT(addMembreLineEdit()));
    connect(addMembreButton,SIGNAL(clicked()),this,SLOT(addMembre()));

}

void GererCompte::addMembreLineEdit(){
    int n = progressGridLayout->rowCount();
    progressGridLayout->removeWidget(plusButton);
    newMembreLineEdit = new QLineEdit;
    progressGridLayout->addWidget(newMembreLineEdit,n,1);
    progressGridLayout->addWidget(addMembreButton,n,2);
    addMembreButton->setVisible(true);
}

void GererCompte::addMembre(){
    int n = progressGridLayout->rowCount();
    QString newMembreName = newMembreLineEdit->text();
    newMembreLineEdit->clear();
    addDeleteButton(n,0);
    addLabel(n,1,newMembreName);
    addProgressBar(n,2,0);
    progressGridLayout->removeWidget(newMembreLineEdit);
    newMembreLineEdit->hide();
    progressGridLayout->removeWidget(addMembreButton);
    addMembreButton->hide();
    progressGridLayout->addWidget(plusButton,n+1,1);
}

void GererCompte::deleteMembre(){
    QObject * buttonClicked = sender();
    int i = 0;
    while((deleteButtonsVector->at(i) != buttonClicked) & (i<deleteButtonsVector->size())){
      i+=1;
    }
    progressGridLayout->removeWidget(deleteButtonsVector->at(i));
    progressGridLayout->removeWidget(labelsVector->at(i));
    progressGridLayout->removeWidget(progressBarsVector->at(i));
    deleteButtonsVector->at(i)->hide();
    labelsVector->at(i)->hide();
    progressBarsVector->at(i)->hide();
    deleteButtonsVector->erase(deleteButtonsVector->begin()+i);
    labelsVector->erase(labelsVector->begin()+i);
    progressBarsVector->erase(progressBarsVector->begin()+i);
}

void GererCompte::addDeleteButton(int row, int column){
    QToolButton * deleteButton = new QToolButton();
    deleteButton->setIcon(QIcon(":images/poubelle.png"));
    deleteButton->setIconSize(QSize(25,25));
    deleteButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    deleteButtonsVector->push_back(deleteButton);
    connect(deleteButton,SIGNAL(clicked()),this,SLOT(deleteMembre()));
    progressGridLayout->addWidget(deleteButton,row,column);
}

void GererCompte::addLabel(int row, int column, QString name){
    QLabel * newMembreLabel = new QLabel(name);
    progressGridLayout->addWidget(newMembreLabel,row,column);
    labelsVector->push_back(newMembreLabel);
}

void GererCompte::addProgressBar(int row, int column, int progress){
    QProgressBar * newMembreProgressBar = new QProgressBar();
    newMembreProgressBar->setValue(progress);
    progressBarsVector->push_back(newMembreProgressBar);
    progressGridLayout->addWidget(newMembreProgressBar,row,column);
}
