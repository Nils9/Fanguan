#ifndef COMMANDEMODEL_H
#define COMMANDEMODEL_H
#include "plat.h"

class CommandeModel
{
public:
    CommandeModel(Plat * p, int nb);
    void setRequete(QString s) {requete = s;}
    void setNbUnites(int n) {nbUnites = n;}
    Plat* getPlat() {return plat;}
    int getNbUnites() {return nbUnites;}
    QString getRequete() {return requete;}

private :
    Plat * plat = nullptr;
    int nbUnites = 1;
    QString requete = QString("aucune");

};

#endif // COMMANDEMODEL_H
