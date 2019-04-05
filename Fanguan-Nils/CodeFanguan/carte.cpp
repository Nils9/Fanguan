#include "carte.h"
#include "catalogue.h"
#include "menu.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <iostream>

Carte::Carte(QWidget *parent, Model * m) : QWidget(parent)
{
    model = m;

    QHBoxLayout * mainLayout = new QHBoxLayout();
    QHBoxLayout * topLayout = new QHBoxLayout();
    topLayout->setSpacing(0);
    QString style = QString("QPushButton:checked{background-color: yellow;} QPushButton:pressed {background-color: yellow;}");

    class CarteButton : public QPushButton
    {
    public:
        CarteButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(280, 70));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Arial", 13));
            setCheckable(true);
            setStyleSheet("QPushButton:checked{background-color: yellow;} QPushButton:pressed {background-color: yellow;}");
        }
        virtual ~CarteButton() {}
    };

    QButtonGroup * group = new QButtonGroup();
    group->setExclusive(true);
    QPushButton * entreesButton = new CarteButton("Entrees");
    group->addButton(entreesButton);
    QPushButton * platsButton = new CarteButton("Plats");
    group->addButton(platsButton);
    QPushButton * dessertsButton = new CarteButton("Desserts");
    group->addButton(dessertsButton);
    QPushButton * menusButton = new CarteButton("Menus");
    group->addButton(menusButton);
    QPushButton * boissonsButton = new CarteButton("Boissons");
    group->addButton(boissonsButton);

    QVBoxLayout * buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(menusButton);
    buttonLayout->addWidget(entreesButton);
    buttonLayout->addWidget(platsButton);
    buttonLayout->addWidget(dessertsButton);
    buttonLayout->addWidget(boissonsButton);
    buttonLayout->setSpacing(50);

    //Zone centrale
    centralLayout = new QHBoxLayout();
    centralWidget = new Menu(nullptr, model);
    centralWidget->setMinimumSize(QSize(300, 300));
    centralWidget->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    centralLayout->addWidget(centralWidget);



    mainLayout->addLayout(buttonLayout);
    mainLayout->addLayout(centralLayout);
    setLayout(mainLayout);

    connect(entreesButton, SIGNAL(clicked()), this, SLOT(displayEntrees()));
    connect(platsButton, SIGNAL(clicked()), this, SLOT(displayPlats()));
    connect(dessertsButton, SIGNAL(clicked()), this, SLOT(displayDesserts()));
    connect(menusButton, SIGNAL(clicked()), this, SLOT(displayMenus()));
    connect(boissonsButton, SIGNAL(clicked()), this, SLOT(displayBoissons()));
}

void Carte::displayEntrees() {
    std::cout << "## Show entree"  << std::endl;
    std::cout << "## Show entree " << std::to_string(model->getEntrees().size()) << std::endl;
    centralWidget->hide();
    centralLayout->removeWidget(centralWidget);
    std::cout << "## Show entree " << std::to_string(model->getEntrees().size()) << std::endl;
    setCentralWidget(new Catalogue(nullptr,model->getEntrees()));
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayPlats() {
    centralWidget->hide();
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue(nullptr,model->getPlats()));
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayDesserts() {
    centralWidget->hide();
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Catalogue(nullptr,model->getDesserts()));
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayMenus() {
    centralWidget->hide();
    centralLayout->removeWidget(centralWidget);
    setCentralWidget(new Menu(nullptr, model));
    centralLayout->addWidget(centralWidget);
    update();
}

void Carte::displayBoissons() {
//    centralWidget->hide();
//    centralLayout->removeWidget(centralWidget);
//    setCentralWidget(new Catalogue());
//    centralLayout->addWidget(centralWidget);
//    update();
}

void Carte::paintEvent(QPaintEvent *){
}
