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
        int nbUnites = commandeModel->getNbUnites();

        //Création de la vue
        QVBoxLayout * layout = new QVBoxLayout(this);
        QString nomPlat = commandeModel->getItemName();
        QPushButton * itemName = new QPushButton(nomPlat);
        itemName->setIcon(QIcon(":/images/cross.png"));
        itemName->setFont(QFont("Arial", 12));
        QHBoxLayout * bottomLayout = new QHBoxLayout();
        float itemPrice =commandeModel->getItemPrice();
        QSpinBox * quantity =  new QSpinBox();
        quantity->setMinimumHeight(50);
        quantity->setValue(nbUnites);
        quantity->setRange(1, 20);
        quantity->setSuffix(tr(" unite(s)"));
        priceLabel = new QLabel(QString("%1 euros").arg(itemPrice*nbUnites));
        priceLabel->setFont(QFont("Arial", 12));
        bottomLayout->addWidget(quantity);
        bottomLayout->addStretch(5);
        bottomLayout->addWidget(priceLabel);
        QLineEdit * infos = new QLineEdit(commandeModel->getInfos());
        infos->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        layout->addWidget(itemName);
        layout->addLayout(bottomLayout);
        layout->addWidget(infos);
        setLayout(layout);
        setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
        setLineWidth(2);
        layout->setSizeConstraint(QLayout::SetMinimumSize);
        setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        setStyleSheet("background-color : #FFECB3 ");

        connect(quantity, SIGNAL(valueChanged(int)), this, SLOT(changeUnity(int)));
        connect(this, SIGNAL(unityChanged(int)), com, SLOT(displayTotal()));
        connect(itemName, SIGNAL(pressed()), this, SLOT(remove()));
        connect(this, SIGNAL(removed()), com, SLOT(refresh()));
    }

    virtual ~CommandeItem() {}

public slots:
    void changeUnity(int i){
        float itemPrice = commandeModel->getItemPrice();
        priceLabel->setText(QString("%1 euros").arg(itemPrice*i));
        commandeModel->setNbUnites(i);
        emit unityChanged(i);}

    void remove(){
        commandeModel->setNbUnites(0);
        //this->close();
        emit removed();
        emit unityChanged(0);}

signals:
    void unityChanged(int);
    void removed();
};

#endif // COMMANDEITEM_H
