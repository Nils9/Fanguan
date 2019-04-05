#include "menu.h"
#include <QGroupBox>

Menu::Menu(QWidget *parent, Template * t, Model * model) : QWidget(parent)
{
    temp = t;
    this->model = model;
    menuList = model->getMenus();
    std::cout << "j'ai récupere les menus" << std::endl;
    unsigned int sizeMenu = menuList.size();
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
    entreesColumn = newColonne(currentMenu->getMenuEntrees(), "Entrees");
    platsColumn = newColonne(currentMenu->getMenuPlats(), "Plats");
    dessertsColumn = newColonne(currentMenu->getMenuDesserts(), "Desserts");

    QGroupBox * entreesGroup = new QGroupBox("Entree");
    QGroupBox * platsGroup = new QGroupBox("Plat");
    QGroupBox * dessertsGroup = new QGroupBox("dessert");
    entreesGroup->setLayout(entreesColumn);
    platsGroup->setLayout(platsColumn);
    dessertsGroup->setLayout(dessertsColumn);
    entreesGroup->setFont(QFont("Arial", 18));
    platsGroup->setFont(QFont("Arial", 18));
    dessertsGroup->setFont(QFont("Arial", 18));

    columns->addStretch(5);
    columns->addWidget(entreesGroup);
    columns->addStretch(5);
    columns->addWidget(platsGroup);
    columns->addStretch(5);
    columns->addWidget(dessertsGroup);
    columns->addStretch(5);

    mainLayout->addLayout(columns);

    QHBoxLayout * choiceLayout = new QHBoxLayout();
    QPushButton * choiceButton = new QPushButton(tr("Valider votre menu"));
    choiceButton->setFont(QFont("Arial", 22));
    choiceLayout->addWidget(choiceButton);

    mainLayout->addLayout(choiceLayout);
    //connect(flecheG, SIGNAL(clicked()), this, SLOT());
}

QVBoxLayout * Menu::newColonne(std::vector<Plat *> liste, QString type){
    QVBoxLayout * colonne = new QVBoxLayout();

    QLabel * label = new QLabel(type);
    label->setFont(QFont("Arial", 18));
    colonne->addStretch(5);
    for(unsigned int i = 0; i < liste.size(); i++){
        Plat * plat = liste[i];
        CatalogueItem * item = new CatalogueItem(temp, plat);
        item->setCheckable(true);
        item->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
        colonne->addWidget(item);
        colonne->addStretch(5);
    }

    return colonne;
}
