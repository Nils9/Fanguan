#ifndef MEMBRE_H
#define MEMBRE_H

#include <QString>
#include <iostream>
#include <string>
#include <vector>
#include <plat.h>

class Membre
{
private:
    QString name;
    int id;
    std::vector<Plat*> * commande;
    std::vector<Plat*> * favoris;
    std::vector<Plat*> * recommendations;
    std::vector<QString> * avantages;
    int progress;

public:
    Membre();
    QString getName();
    int getId();
    Membre(QString name, int id);
    std::vector<Plat*> * getCommande();
    void addCommande(Plat * plat);
    std::vector<Plat*> * getFavoris();
    void addFavori(Plat * plat);
    std::vector<Plat*> * getRecommendations();
    void addRecommendation(Plat * plat);
    std::vector<QString> * getAvantages();
    void addAvantage(QString avantage);
    int getProgress();
    void setProgress(int value);


};

#endif // MEMBRE_H
