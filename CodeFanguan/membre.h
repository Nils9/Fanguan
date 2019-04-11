#ifndef MEMBRE_H
#define MEMBRE_H

#include <QString>
#include <iostream>
#include <string>
#include <vector>
#include "plat.h"
#include "commandemodel.h"

class Membre
{
private:
    QString name;
    int id;
    std::vector<CommandeModel*> listeCommandes = std::vector<CommandeModel*>();
    std::vector<Plat*> * favoris;
    std::vector<Plat*> * recommendations;
    std::vector<QString> * avantages;
    int progress;
    float sousTotal = 0;

public:
    Membre();
    QString getName();
    int getId();
    Membre(QString name, int id);
    void addCommande(CommandeModel * com);
    std::vector<CommandeModel*>  getCommande() {return listeCommandes;}
    std::vector<Plat*> * getFavoris();
    void addFavori(Plat * plat);
    std::vector<Plat*> * getRecommendations();
    void addRecommendation(Plat * plat);
    std::vector<QString> * getAvantages();
    void addAvantage(QString avantage);
    int getProgress();
    void setProgress(int value);
    float getSousTotal();

};

#endif // MEMBRE_H
