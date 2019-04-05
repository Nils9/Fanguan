#include "menu.h"
#include <QGroupBox>

Menu::Menu(QWidget *parent, Model * model) : QWidget(parent)
{
    this->model = model;
    menuList = model->getMenus();

    currentMenu = menuList[0];
    currentIndex = 0;

    QVBoxLayout * mainLayout = new QVBoxLayout(this);

    //Partie en-tête du menu
    menu = new QHBoxLayout();
    menu->setAlignment(Qt::AlignCenter);

    QToolButton * flecheG = new QToolButton();
    flecheG->setIcon(QIcon(":/images/left.png"));

    QToolButton * flecheD = new QToolButton();
    flecheD->setIcon(QIcon(":/images/right.png"));

    menuLabel = new QLabel(currentMenu->getName());
    menuLabel->setFont(QFont("Arial", 22));

    menu->addWidget(flecheG);
    menu->addWidget(menuLabel);
    menu->addWidget(flecheD);

    mainLayout->addLayout(menu);

    //Partie contenu du menu
    columns = new QHBoxLayout();
    entreesColumn = newColonne(currentMenu->getMenuEntrees(), "Entrées");
    platsColumn = newColonne(currentMenu->getMenuPlats(), "Plats");
    dessertsColumn = newColonne(currentMenu->getMenuDesserts(), "Desserts");

    columns->addWidget(entreesColumn);
    columns->addWidget(platsColumn);
    columns->addWidget(dessertsColumn);

    mainLayout->addLayout(columns);

    QHBoxLayout * choiceLayout = new QHBoxLayout();
    QPushButton * choiceButton = new QPushButton(tr("Valider votre menu"));
    choiceLayout->setAlignment(Qt::AlignCenter);
    choiceLayout->addWidget(choiceButton);

    mainLayout->addLayout(choiceLayout);

    connect(flecheD, SIGNAL(clicked()), this, SLOT(nextMenu()));
    connect(flecheG, SIGNAL(clicked()), this, SLOT(previousMenu()));
}


QGroupBox * Menu::newColonne(std::vector<Plat *> liste, QString nom){
    QGroupBox * newColonne = new QGroupBox(nom);
    QVBoxLayout * colonne = new QVBoxLayout();
    colonne->addStretch(5);
    QButtonGroup * group = new QButtonGroup();
    group->setExclusive(true);

    for(int i = 0; i < liste.size(); i++){
        Plat * plat = liste[i];
        CatalogueItem * item = new CatalogueItem(plat);
        item->setCheckable(true);
        item->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
        group->addButton(item);
        colonne->addWidget(item);
        colonne->addStretch(5);
    }
    colonne->setAlignment(Qt::AlignCenter);
    newColonne->setLayout(colonne);
    return newColonne;
}

void Menu::nextMenu(){
    int nbOfMenus = menuList.size();
    currentIndex = (currentIndex + 1) % nbOfMenus;
    currentMenu = menuList[currentIndex];
    menuLabel->setText(currentMenu->getName());

    columns->removeWidget(entreesColumn);
    entreesColumn->hide();
    entreesColumn = newColonne(currentMenu->getMenuEntrees(), "Entrées");
    columns->addWidget(entreesColumn);

    columns->removeWidget(platsColumn);
    platsColumn->hide();
    platsColumn = newColonne(currentMenu->getMenuPlats(), "Plats");
    columns->addWidget(platsColumn);

    columns->removeWidget(dessertsColumn);
    dessertsColumn->hide();
    dessertsColumn = newColonne(currentMenu->getMenuDesserts(), "Desserts");
    columns->addWidget(dessertsColumn);
}

void Menu::previousMenu(){
    int nbOfMenus = menuList.size();
    if(currentIndex == 0){
        currentIndex = nbOfMenus - 1;
    }
    else{
        currentIndex = (currentIndex - 1) % nbOfMenus;
    }
    currentMenu = menuList[currentIndex];
    menuLabel->setText(currentMenu->getName());

    columns->removeWidget(entreesColumn);
    entreesColumn->hide();
    entreesColumn = newColonne(currentMenu->getMenuEntrees(), "Entrées");
    columns->addWidget(entreesColumn);

    columns->removeWidget(platsColumn);
    platsColumn->hide();
    platsColumn = newColonne(currentMenu->getMenuPlats(), "Plats");
    columns->addWidget(platsColumn);

    columns->removeWidget(dessertsColumn);
    dessertsColumn->hide();
    dessertsColumn = newColonne(currentMenu->getMenuDesserts(), "Desserts");
    columns->addWidget(dessertsColumn);
}
