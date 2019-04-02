#include "menu.h"

Menu::Menu(QWidget *parent) : QWidget(parent)
{
    class CatalogueItem : public QToolButton
    {
    public:
        CatalogueItem(QString label, QIcon icon, int id) : QToolButton(){
            setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            setIcon(icon);
            setIconSize(QSize(150, 120));
            setText(label);
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setStyleSheet("color : black; background-color : white;");
        }
        virtual ~CatalogueItem() {}
    };

    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    QHBoxLayout * menu = new QHBoxLayout();
    menu->setAlignment(Qt::AlignCenter);

    QToolButton * flecheG = new QToolButton();
    flecheG->setIcon(QIcon(":/images/left.png"));

    QToolButton * flecheD = new QToolButton();
    flecheD->setIcon(QIcon(":/images/right.png"));

    QLabel * menuLabel = new QLabel(tr("Menu Cantonais : 18€"));

    menu->addWidget(flecheG);
    menu->addWidget(menuLabel);
    menu->addWidget(flecheD);

    mainLayout->addLayout(menu);

    QGridLayout * grid = new QGridLayout();
    QLabel * starterLabel = new QLabel(tr("Entrées"));
    QLabel * dishLabel = new QLabel(tr("Plats"));
    QLabel * dessertLabel = new QLabel(tr("Desserts"));
    QToolButton * entree1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree1->setCheckable(true);
    entree1->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * plat1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    plat1->setCheckable(true);
    plat1->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * dessert1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert1->setCheckable(true);
    dessert1->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * entree2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree2->setCheckable(true);
    entree2->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * plat2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    plat2->setCheckable(true);
    plat2->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * dessert2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert2->setCheckable(true);
    dessert2->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * entree3 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree3->setCheckable(true);
    entree3->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));
    QToolButton * dessert3 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert3->setCheckable(true);
    dessert3->setStyleSheet(QString("QToolButton:checked{background-color: green;} QToolButton:pressed {background-color: green;}"));

    grid->addWidget(starterLabel, 1, 1);
    grid->setAlignment(starterLabel, Qt::AlignCenter);
    grid->addWidget(dishLabel, 1, 2);
    grid->setAlignment(dishLabel, Qt::AlignCenter);
    grid->addWidget(dessertLabel, 1, 3);
    grid->setAlignment(dessertLabel, Qt::AlignCenter);
    grid->addWidget(entree1, 2, 1);
    grid->addWidget(plat1, 2, 2);
    grid->addWidget(dessert1, 2, 3);
    grid->addWidget(entree2, 3, 1);
    grid->addWidget(plat2, 3, 2);
    grid->addWidget(dessert2, 3, 3);
    grid->addWidget(entree3, 4, 1);
    grid->addWidget(dessert3, 4, 3);

    mainLayout->addLayout(grid);

    QHBoxLayout * choiceLayout = new QHBoxLayout();
    QPushButton * choiceButton = new QPushButton(tr("Valider votre menu"));
    choiceLayout->setAlignment(Qt::AlignCenter);
    choiceLayout->addWidget(choiceButton);

    mainLayout->addLayout(choiceLayout);
}

