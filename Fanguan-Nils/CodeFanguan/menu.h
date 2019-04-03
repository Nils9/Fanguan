//Nils
#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QLayout>
#include <QToolButton>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include "menumodel.h"
#include "model.h"
#include "catalogueitem.h"
#include "plat.h"

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr, Model * model = nullptr);
    QVBoxLayout * newColonne(std::vector<Plat*> liste, QString type);

private:
    Model * model;
    std::vector<MenuModel*> menuList;
    MenuModel * currentMenu;
    int currentIndex; //index du menu courant dans la liste
    QLabel * menuLabel;
    QVBoxLayout * entreesColumn;
    QVBoxLayout * platsColumn;
    QVBoxLayout * dessertsColumn;

signals:

public slots:
};

#endif // MENU_H
