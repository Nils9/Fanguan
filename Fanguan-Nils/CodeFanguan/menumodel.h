#ifndef MENUMODEL_H
#define MENUMODEL_H
#include <QString>
#include "plat.h"

class MenuModel
{
public:
    MenuModel();
    MenuModel(QString name);
    void addMenuEntree(Plat * plat);
    void addMenuPlat(Plat * plat);
    void addMenuDessert(Plat * plat);
    std::vector<Plat*> * getMenuEntrees();
    std::vector<Plat*> * getMenuPlats();
    std::vector<Plat*> * getMenuDesserts();

private:
    QString name;
    std::vector<Plat*> * menuEntrees;
    std::vector<Plat*> * menuPlats;
    std::vector<Plat*> * menuDesserts;
};

#endif // MENUMODEL_H
