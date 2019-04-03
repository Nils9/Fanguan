#include "recherche.h"

Recherche::Recherche(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout * mainLayout = new QHBoxLayout();

    //Création de la colonne recherche
    QVBoxLayout * vlayout = new QVBoxLayout();

    //Groupe fourchette de prix
    QGroupBox * priceGroupBox = new QGroupBox(tr("Prix"));
    QSlider * slider = new QSlider(Qt::Horizontal, this);
    QHBoxLayout * priceLayout = new QHBoxLayout();
    priceLayout->addWidget(slider);
    priceGroupBox->setLayout(priceLayout);

    //Groupe choix pays
    QGroupBox * countryGroupBox = new QGroupBox(tr("Pays"));
    QHBoxLayout * countryLayout = new QHBoxLayout();

    QToolButton * chButton = new QToolButton();
    chButton->setIcon(QIcon(":/images/chine.png"));
    countryLayout->addWidget(chButton);

    QToolButton * jpButton = new QToolButton();
    jpButton->setIcon(QIcon(":/images/japon.jpg"));
    countryLayout->addWidget(jpButton);

    QToolButton * thButton = new QToolButton();
    thButton->setIcon(QIcon(":/images/thailande.png"));
    countryLayout->addWidget(thButton);

    countryGroupBox->setLayout(countryLayout);

    //Groupe choix type
    QGroupBox * typeGroupBox = new QGroupBox(tr("Type"));
    QVBoxLayout * typeLayout = new QVBoxLayout();

    QHBoxLayout * dishLayout = new QHBoxLayout();
    QPushButton * starterButton = new QPushButton(tr("Entrees"));
    QPushButton * mealButton = new QPushButton(tr("Plats"));
    QPushButton * dessertsButton = new QPushButton(tr("Desserts"));
    dishLayout->addWidget(starterButton);
    dishLayout->addWidget(mealButton);
    dishLayout->addWidget(dessertsButton);

    QHBoxLayout * detailLayout = new QHBoxLayout();
    QPushButton * spicyButton = new QPushButton(tr("Epice"));
    QPushButton * vegButton = new QPushButton(tr("Vegetarien"));
    detailLayout->addWidget(spicyButton);
    detailLayout->addWidget(vegButton);

    typeLayout->addLayout(dishLayout);
    typeLayout->addLayout(detailLayout);
    typeGroupBox->setLayout(typeLayout);

    //Groupe choix ingrédient
    QGroupBox * ingGroupBox = new QGroupBox(tr("Ingredients"));
    QGridLayout * ingLayout = new QGridLayout();

    QToolButton * carotteButton = new QToolButton();
    carotteButton->setIcon(QIcon(":/images/carotte.png"));
    ingLayout->addWidget(carotteButton);

    QToolButton * tomateButton = new QToolButton();
    tomateButton->setIcon(QIcon(":/images/tomate.png"));
    ingLayout->addWidget(tomateButton);

    QToolButton * oignonButton = new QToolButton();
    oignonButton->setIcon(QIcon(":/images/piment.png"));
    ingLayout->addWidget(oignonButton);

    ingGroupBox->setLayout(ingLayout);


    vlayout->addWidget(priceGroupBox);
    vlayout->addWidget(countryGroupBox);
    vlayout->addWidget(typeGroupBox);
    vlayout->addWidget(ingGroupBox);

    //Zone centrale
    centralLayout = new QHBoxLayout();
    centralWidget = new Catalogue(this);
    centralWidget->setMinimumSize(QSize(300, 300));
    centralLayout->addWidget(centralWidget);
    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    mainLayout->addLayout(vlayout);
    mainLayout->addLayout(centralLayout);
    mainLayout->addStretch(5);
    setLayout(mainLayout);

    //hlayout->addLayout(vlayout);
}
