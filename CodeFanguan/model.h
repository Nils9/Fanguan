#ifndef MODEL_H
#define MODEL_H
#include <QString>
#include <QFont>

#include "plat.h"
#include "membre.h"
#include "famille.h"
#include "menumodel.h"

class Model{
private:
    bool connected;
    QString langage = "French";

    //Carte du restaurant
    std::vector<Plat*> carteEntrees = std::vector<Plat*>();
    std::vector<Plat*> cartePlats= std::vector<Plat*>();
    std::vector<Plat*> carteDesserts= std::vector<Plat*>();
    std::vector<Plat*> carteEntiere= std::vector<Plat*>();
    std::vector<MenuModel*> carteMenus;

    //Liste des familles du restaurant
    std::vector<Famille*> clients;

public:
    Model();

    //Paramètres de connexion
    bool getConnected(){return connected;}
    void setConnected(bool b){connected = b;}

    //Paramètres de langue
    const QString getLangage() {return langage;}

    //Accès carte
    std::vector<Plat*> getEntrees();
    std::vector<Plat*> getPlats();
    std::vector<Plat*> getDesserts();
    std::vector<Plat*> getCarteEntiere();
    std::vector<MenuModel*> getMenus();

    //Mise à jour de la carte
    void addEntree(Plat * entree);
    void addPlat(Plat * plat);
    void addDessert(Plat * dessert);
    void addMenu(MenuModel * menu);

    // Template CSS
    QFont getTitleFont();
    QFont getAccueilButtonFont();
    QFont getButtonFont();
    QFont getTextFont();
    QFont getPlatFont();
};

#endif // MODEL_H
