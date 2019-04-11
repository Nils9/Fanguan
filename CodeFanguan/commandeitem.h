#ifndef COMMANDEITEM_H
#define COMMANDEITEM_H

#include <QObject>
#include <QLayout>
#include <QPushButton>
#include <QSpinBox>
#include <QFrame>
#include <QLineEdit>
#include "commandemodel.h"
#include "commande.h"

class CommandeItem : public QFrame
{
    Q_OBJECT
private:
    CommandeModel * commandeModel;
    QLabel * priceLabel;


public:
    CommandeItem(Commande * com, CommandeModel * commandeModel): QFrame() {
        //Données de la commande
        this->commandeModel = commandeModel;
        Plat * platCommande = commandeModel->getPlat();
        int nbUnites = commandeModel->getNbUnites();

        //Création de la vue
        QVBoxLayout * layout = new QVBoxLayout(this);
        QString nomPlat = platCommande->getLabel();
        QPushButton * itemName = new QPushButton(nomPlat);
        itemName->setIcon(QIcon(":/images/cross.png"));
        itemName->setFont(QFont("Arial", 12));
        QHBoxLayout * bottomLayout = new QHBoxLayout();
        float itemPrice = platCommande->getPrix();
        QSpinBox * quantity =  new QSpinBox();
        quantity->setValue(nbUnites);
        quantity->setRange(1, 20);
        quantity->setSuffix(tr(" unite(s)"));
        priceLabel = new QLabel(QString("%1 euros").arg(itemPrice*nbUnites));
        priceLabel->setFont(QFont("Arial", 12));
        bottomLayout->addWidget(quantity);
        bottomLayout->addStretch(5);
        bottomLayout->addWidget(priceLabel);
        QLineEdit * infos = new QLineEdit("infos");
        infos->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        layout->addWidget(itemName);
        layout->addLayout(bottomLayout);
        layout->addWidget(infos);
        setLayout(layout);
        setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
        setLineWidth(2);
        layout->setSizeConstraint(QLayout::SetMinimumSize);
        setStyleSheet("background : orange");

        connect(quantity, SIGNAL(valueChanged(int)), this, SLOT(changeUnity(int)));
        connect(this, SIGNAL(unityChanged(int)), com, SLOT(displayTotal()));
    }

    virtual ~CommandeItem() {}

public slots:
    void changeUnity(int i){
        Plat * p = commandeModel->getPlat();
        float itemPrice = p->getPrix();
        priceLabel->setText(QString("%1 euros").arg(itemPrice*i));
        commandeModel->setNbUnites(i);
        emit unityChanged(i);}

signals:
    void unityChanged(int);
};

#endif // COMMANDEITEM_H