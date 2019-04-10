#ifndef MODEL_H
#define MODEL_H
#include <QString>
#include <QFont>

#include "plat.h"
#include "membre.h"
#include "famille.h"
#include "menumodel.h"
#include "commandemodel.h"

class Model{
private:
    bool connected = false;
    QString langage = "French";

    //Carte du restaurant
    std::vector<Plat*> carteEntrees = std::vector<Plat*>();
    std::vector<Plat*> cartePlats = std::vector<Plat*>();
    std::vector<Plat*> carteDesserts = std::vector<Plat*>();
    std::vector<Plat*> carteEntiere = std::vector<Plat*>();
    std::vector<MenuModel*> carteMenus = std::vector<MenuModel*>();

    std::vector<CommandeModel*> listeCommandes = std::vector<CommandeModel*>();

    //Liste des familles du restaurant
    std::vector<Famille*> clients;
    int indiceFamilleCourante;

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

    //Accès liste famille et indice famille courante
    std::vector<Famille*> getClients();
    void addFamille(Famille * famille);
    int getIndiceFamilleCourante();
    void setIndiceFamilleCourante(int indice);

    //Accès à la liste des commandes (dans le cas non connecté
    std::vector<CommandeModel*> getCommandes() {return listeCommandes;}
    void addCommande(CommandeModel * cm) {listeCommandes.push_back(cm);}

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
