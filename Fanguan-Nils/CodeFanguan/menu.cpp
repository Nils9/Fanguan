#include "menu.h"

Menu::Menu(QWidget *parent) : QWidget(parent)
{

    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    QHBoxLayout * menu = new QHBoxLayout();
    menu->setAlignment(Qt::AlignCenter);

    QToolButton * flecheG = new QToolButton();
    flecheG->setIcon(QIcon(":/images/left.png"));

    QToolButton * flecheD = new QToolButton();
    flecheD->setIcon(QIcon(":/images/right.png"));

    QLabel * menuLabel = new QLabel(tr("Menu Cantonais : 18€"));
    menuLabel->setFont(QFont("Arial", 22));

    menu->addWidget(flecheG);
    menu->addWidget(menuLabel);
    menu->addWidget(flecheD);

    mainLayout->addLayout(menu);

    QHBoxLayout * columns = new QHBoxLayout();
    QVBoxLayout * column1 = new QVBoxLayout();
    QVBoxLayout * column2 = new QVBoxLayout();
    QVBoxLayout * column3 = new QVBoxLayout();

    //Titres des colonnes
    QLabel * starterLabel = new QLabel(tr("Entrées"));
    starterLabel->setFont(QFont("Arial", 18));
    QLabel * dishLabel = new QLabel(tr("Plats"));
    dishLabel->setFont(QFont("Arial", 18));
    QLabel * dessertLabel = new QLabel(tr("Desserts"));
    dessertLabel->setFont(QFont("Arial", 18));

    //Quelques items
    QToolButton * entree1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree1->setCheckable(true);
    entree1->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * plat1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    plat1->setCheckable(true);
    plat1->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * dessert1 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert1->setCheckable(true);
    dessert1->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * entree2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree2->setCheckable(true);
    entree2->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * plat2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    plat2->setCheckable(true);
    plat2->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * dessert2 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert2->setCheckable(true);
    dessert2->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * entree3 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    entree3->setCheckable(true);
    entree3->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));
    QToolButton * dessert3 = new CatalogueItem("nems: 7 euros",QIcon(":/images/nourriture.jpg"),1);
    dessert3->setCheckable(true);
    dessert3->setStyleSheet(QString("QToolButton:checked{background-color: orange;} QToolButton:pressed {background-color: orange;}"));

    column1->addWidget(starterLabel);
    column1->setAlignment(starterLabel, Qt::AlignCenter);
    column2->addWidget(dishLabel);
    column2->setAlignment(dishLabel, Qt::AlignCenter);
    column3->addWidget(dessertLabel);
    column3->setAlignment(dessertLabel, Qt::AlignCenter);

    column1->addStretch(5);
    column1->addWidget(entree1);
    column1->addStretch(5);
    column1->addWidget(entree2);
    column1->addStretch(5);
    column1->addWidget(entree3);
    column1->addStretch(5);

    column2->addStretch(5);
    column2->addWidget(plat1);
    column2->addStretch(5);
    column2->addWidget(plat2);
    column2->addStretch(5);

    column3->addStretch(5);
    column3->addWidget(dessert1);
    column3->addStretch(5);
    column3->addWidget(dessert2);
    column3->addStretch(5);
    column3->addWidget(dessert3);
    column3->addStretch(5);

    columns->addLayout(column1);
    columns->addLayout(column2);
    columns->addLayout(column3);

    mainLayout->addLayout(columns);

    QHBoxLayout * choiceLayout = new QHBoxLayout();
    QPushButton * choiceButton = new QPushButton(tr("Valider votre menu"));
    choiceLayout->setAlignment(Qt::AlignCenter);
    choiceLayout->addWidget(choiceButton);

    mainLayout->addLayout(choiceLayout);
}

