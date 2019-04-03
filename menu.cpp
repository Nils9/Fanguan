#include "menu.h"

Menu::Menu(QWidget *parent, Model * model) : QWidget(parent)
{
    this->model = model;
    menuList = model->getMenus();
    std::cout << "j'ai récupéré les menus" << std::endl;
    int sizeMenu = menuList.size();
    std::cout << sizeMenu << std::endl;

    currentMenu = menuList[0];
    currentIndex = 0;

    QVBoxLayout * mainLayout = new QVBoxLayout(this);

    //Partie en-tête du menu
    QHBoxLayout * menu = new QHBoxLayout();
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
    QHBoxLayout * columns = new QHBoxLayout();
    entreesColumn = newColonne(currentMenu->getMenuEntrees(), "Entrées");
    platsColumn = newColonne(currentMenu->getMenuPlats(), "Plats");
    dessertsColumn = newColonne(currentMenu->getMenuDesserts(), "Desserts");

    columns->addLayout(entreesColumn);
    columns->addLayout(platsColumn);
    columns->addLayout(dessertsColumn);

    mainLayout->addLayout(columns);

    QHBoxLayout * choiceLayout = new QHBoxLayout();
    QPushButton * choiceButton = new QPushButton(tr("Valider votre menu"));
    choiceLayout->setAlignment(Qt::AlignCenter);
    choiceLayout->addWidget(choiceButton);

    mainLayout->addLayout(choiceLayout);
    //connect(flecheG, SIGNAL(clicked()), this, SLOT());
}

QVBoxLayout * Menu::newColonne(std::vector<Plat *> liste, QString type){
    QVBoxLayout * colonne = new QVBoxLayout();
    QLabel * label = new QLabel(type);
    label->setFont(QFont("Arial", 18));
    colonne->addStretch(5);
    for(int i = 0; i < liste.size(); i++){
        Plat * plat = liste[i];
        CatalogueItem * item = new CatalogueItem(plat);
        item->setCheckable(true);
        item->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
        colonne->addWidget(item);
        colonne->addStretch(5);
    }

    return colonne;
}
