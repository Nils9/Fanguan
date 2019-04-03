#include "model.h"

Model::Model(){

    //Création d'une famille
    Membre * margot = new Membre("Margot", 1);
    Membre * arthur = new Membre("Arthur", 2);
    Membre * julien = new Membre("Julien", 3);
    Membre * nils = new Membre("Nils", 4);
    Famille * fanguan = new Famille("Fanguan", "fanguan");
    fanguan->addMembre(margot);
    fanguan->addMembre(arthur);
    fanguan->addMembre(julien);
    fanguan->addMembre(nils);

    //Elaboration de la carte
    //Entrées
    Plat * e1 = new Plat(1);
    e1->setImageFile(":/images/Entrees/nems.jpeg");
    e1->setPrix(5);
    addEntree(e1);
    //Plats
    Plat * p1 = new Plat(2);
    p1->setImageFile(":/images/Plats/nouilles.jpg");
    p1->setPrix(10);
    addPlat(p1);
    //Desserts
    Plat * d1 = new Plat(3);
    d1->setImageFile(":/images/Desserts/sesame-beignets.jpeg");
    d1->setPrix(4);
    addPlat(d1);
    //Menus
    MenuModel * m1 = new MenuModel("Cantonais");
    m1->addMenuEntree(e1);
    m1->addMenuPlat(p1);
    m1->addMenuDessert(d1);

}

void Model::addDessert(Plat *dessert){
    carteDesserts->push_back(dessert);
}

void Model::addPlat(Plat * plat){
    cartePlats->push_back(plat);
}

void Model::addEntree(Plat *entree){
    carteEntrees->push_back(entree);
}

void Model::addMenu(MenuModel *menu){
    carteMenus->push_back(menu);
}

std::vector<Plat*> * Model::getEntrees(){
    return carteEntrees;
}

std::vector<Plat*> * Model::getPlats(){
    return cartePlats;
}

std::vector<Plat*> * Model::getDesserts(){
    return carteDesserts;
}

std::vector<MenuModel*> * Model::getMenus(){
    return carteMenus;
}


