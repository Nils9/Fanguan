#include "gerercompte.h"

GererCompte::GererCompte(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * layout = new QVBoxLayout(this);
    layout->setSpacing(20);
    layout->setMargin(100);

    QLabel * familyLabel = new QLabel("Famille Calvi");

    QProgressBar * familleProgressBar = new QProgressBar();
    familleProgressBar->setValue(68);
    familleProgressBar->setFormat("Habitués");

    progressGridLayout = new QGridLayout();
    progressGridLayout->setAlignment(Qt::AlignCenter);

    QLabel * margotLabel = new QLabel("Margot");
    QProgressBar * margotProgressBar = new QProgressBar();
    margotProgressBar->setValue(81);
    margotProgressBar->setTextVisible(false);
    progressGridLayout->addWidget(margotLabel,1,1);
    progressGridLayout->addWidget(margotProgressBar,1,2);

    QLabel * arthurLabel = new QLabel("Arthur");
    QProgressBar * arthurProgressBar = new QProgressBar();
    arthurProgressBar->setValue(44);
    arthurProgressBar->setTextVisible(false);
    progressGridLayout->addWidget(arthurLabel,2,1);
    progressGridLayout->addWidget(arthurProgressBar,2,2);

    QLabel * nilsLabel = new QLabel("Nils");
    QProgressBar * nilsProgressBar = new QProgressBar();
    nilsProgressBar->setValue(51);
    nilsProgressBar->setTextVisible(false);
    progressGridLayout->addWidget(nilsLabel,3,1);
    progressGridLayout->addWidget(nilsProgressBar,3,2);

    QLabel * julienLabel = new QLabel("Julien");
    QProgressBar * julienProgressBar = new QProgressBar();
    julienProgressBar->setValue(69);
    julienProgressBar->setTextVisible(false);
    progressGridLayout->addWidget(julienLabel,4,1);
    progressGridLayout->addWidget(julienProgressBar,4,2);

    plusButton = new QToolButton();
    plusButton->setIcon(QIcon(":/plus.png"));
    plusButton->setIconSize(QSize(25,25));
    plusButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(plusButton,5,1);

    QToolButton * deleteMargotButton = new QToolButton();
    deleteMargotButton->setIcon(QIcon(":/poubelle.png"));
    deleteMargotButton->setIconSize(QSize(25,25));
    deleteMargotButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(deleteMargotButton,1,0);

    QToolButton * deleteArthurButton = new QToolButton();
    deleteArthurButton->setIcon(QIcon(":/poubelle.png"));
    deleteArthurButton->setIconSize(QSize(25,25));
    deleteArthurButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(deleteArthurButton,2,0);

    QToolButton * deleteNilsButton = new QToolButton();
    deleteNilsButton->setIcon(QIcon(":/poubelle.png"));
    deleteNilsButton->setIconSize(QSize(25,25));
    deleteNilsButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(deleteNilsButton,3,0);

    QToolButton * deleteJulienButton = new QToolButton();
    deleteJulienButton->setIcon(QIcon(":/poubelle.png"));
    deleteJulienButton->setIconSize(QSize(25,25));
    deleteJulienButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    progressGridLayout->addWidget(deleteJulienButton,4,0);


    QLabel * passwordLabel = new QLabel("Mot de passe: ");
    QLineEdit * passwordLineEdit = new QLineEdit();
    passwordLineEdit->setText("Bisounours42");
    passwordLineEdit->setEchoMode(QLineEdit::Password);


    layout->addWidget(familyLabel);
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
    //progressGridLayout->addWidget(plusButton,n+1,1);
}

void GererCompte::addMembre(){
    int n = progressGridLayout->rowCount();
    QString newMembreName = newMembreLineEdit->text();
    newMembreLineEdit->clear();
    QToolButton * deleteButton = new QToolButton();
    deleteButton->setIcon(QIcon(":/poubelle.png"));
    deleteButton->setIconSize(QSize(25,25));
    deleteButton->setStyleSheet("QToolButton{border-radius: 0px;}");
    QLabel * newMembreLabel = new QLabel(newMembreName);
    QProgressBar * newMembreProgressBar = new QProgressBar();
    newMembreProgressBar->setValue(0);
    newMembreProgressBar->setTextVisible(false);
    //progressGridLayout->removeWidget(plusButton);
    progressGridLayout->removeWidget(newMembreLineEdit);
    newMembreLineEdit->hide();
    progressGridLayout->removeWidget(addMembreButton);
    addMembreButton->hide();
    progressGridLayout->addWidget(deleteButton,n,0);
    progressGridLayout->addWidget(newMembreLabel,n,1);
    progressGridLayout->addWidget(newMembreProgressBar,n,2);
    progressGridLayout->addWidget(plusButton,n+1,1);
}
