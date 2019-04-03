#include "membre.h"

Membre::Membre()
{

}

Membre::Membre(QString name, int id){
    this->name = name;
    this->id = id;
}

int Membre::getId(){
    return id;
}

QString Membre::getName(){
    return name;
}

//std::vector<Plat*> getCommande(){
//    return commande;
//}

//void Membre::addCommande(Plat *plat){
//    commande->push_back(plat);
//}

//void Membre::addFavori(Plat *plat){
//    favoris->push_back(plat);
//}

//std::vector<Plat*> getFavoris(){
//    return favoris;
//}

//void Membre::addRecommendation(Plat *plat){
//    recommendations->push_back(plat);
//}

//std::vector<Plat*> getRecommendations(){
//    return recommendations;
//}

//void Membre::addAvantage(QString avantage){
//    commande->push_back(avantage);
//}

//std::vector<QString> getAvantages(){
//    return avantages;
//}
