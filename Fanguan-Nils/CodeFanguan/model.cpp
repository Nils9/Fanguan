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
    e1->setLabel("Nems Poulet");
    addEntree(e1);
    Plat * e2 = new Plat(4);
    e2->setImageFile(":/images/Entrees/nems.jpeg");
    e2->setPrix(5);
    e2->setLabel("Nems Porc");
    addEntree(e2);
    Plat * e3 = new Plat(5);
    e3->setImageFile(":/images/Entrees/nems.jpeg");
    e3->setPrix(5);
    e3->setLabel("Nems Crevettes");
    addEntree(e3);
    //Plats
    Plat * p1 = new Plat(2);
    p1->setImageFile(":/images/Plats/nouilles.jpg");
    p1->setPrix(10);
    p1->setLabel("Nouilles");
    addPlat(p1);
    //Desserts
    Plat * d1 = new Plat(3);
    d1->setImageFile(":/images/Desserts/sesame-beignets.jpeg");
    d1->setPrix(4);
    d1->setLabel("Beignets de sésame");
    addPlat(d1);
    //Menus
    MenuModel * m1 = new MenuModel("Cantonais");
    m1->addMenuEntree(e1);
    m1->addMenuEntree(e2);
    //m1->addMenuEntree(e3);
    m1->addMenuPlat(p1);
    m1->addMenuDessert(d1);
    addMenu(m1);
    MenuModel * m2 = new MenuModel("Japonais");
    m2->addMenuEntree(e1);
    m2->addMenuEntree(e3);
    m2->addMenuPlat(d1);
    m2->addMenuDessert(p1);
    addMenu(m2);
    MenuModel * m3 = new MenuModel("Thaïlandais");
    m3->addMenuEntree(e1);
    m3->addMenuEntree(e2);
    m3->addMenuEntree(e3);
    m3->addMenuPlat(p1);
    m3->addMenuDessert(d1);
    addMenu(m3);
}

void Model::addDessert(Plat *dessert){
    carteDesserts.push_back(dessert);
}

void Model::addPlat(Plat * plat){
    cartePlats.push_back(plat);
}

void Model::addEntree(Plat *entree){
    carteEntrees.push_back(entree);
}

void Model::addMenu(MenuModel *menu){
    carteMenus.push_back(menu);
}

std::vector<Plat*> Model::getEntrees(){
    return carteEntrees;
}

std::vector<Plat*> Model::getPlats(){
    return cartePlats;
}

std::vector<Plat*> Model::getDesserts(){
    return carteDesserts;
}

std::vector<MenuModel*> Model::getMenus(){
    return carteMenus;
}


