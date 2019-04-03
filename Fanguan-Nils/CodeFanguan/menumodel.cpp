#include "menumodel.h"

MenuModel::MenuModel()
{

}

MenuModel::MenuModel(QString name)
{
    this->name = name;
    this->menuEntrees = new std::vector<Plat*>();
    this->menuPlats = new std::vector<Plat*>();
    this->menuDesserts= new std::vector<Plat*>();
}

void MenuModel::addMenuEntree(Plat * plat){
    menuEntrees->push_back(plat);
}

void MenuModel::addMenuPlat(Plat * plat){
    menuPlats->push_back(plat);
}

void MenuModel::addMenuDessert(Plat * plat){
    menuDesserts->push_back(plat);
}

std::vector<Plat*> * MenuModel::getMenuEntrees(){
    return menuEntrees;
}

std::vector<Plat*> * MenuModel::getMenuPlats(){
    return menuPlats;
}

std::vector<Plat*> * MenuModel::getMenuDesserts(){
    return menuDesserts;
}
