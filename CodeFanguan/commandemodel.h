#ifndef COMMANDEMODEL_H
#define COMMANDEMODEL_H
#include "plat.h"

class CommandeModel
{
public:
    CommandeModel(QString name, float price, int nb);
    void setInfos(QString s) {infos = s;}
    void setNbUnites(int n) {nbUnites = n;}
    float getItemPrice() {return itemPrice;}
    QString getItemName(){return itemName;}
    int getNbUnites() {return nbUnites;}
    QString getInfos() {return infos;}

private :
    QString itemName = "default";
    float itemPrice = 0;
    int nbUnites = 1;
    QString infos = QString("aucune infos");

};

#endif // COMMANDEMODEL_H
