#include "espaceabo.h"
#include "template.h"

EspaceAbo::EspaceAbo(QWidget *parent, Model * m, int indiceMembreCourant) : QWidget(parent)
{
    model = m;
    Membre * membreCourant = model->getClients()[model->getIndiceFamilleCourante()]->getMembres()->at(indiceMembreCourant);
    int indice = m->getIndiceFamilleCourante();
    Famille * famille = model->getClients()[indice];
    std::vector<Membre*>* membres = famille->getMembres();
    QHBoxLayout * layout = new QHBoxLayout(this);
    QVBoxLayout * leftVerticalLayout = new QVBoxLayout();
    leftVerticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
    QVBoxLayout * rightVerticalLayout = new QVBoxLayout();
    class EspaceAboLeftButton : public QPushButton
    {
    public:
        EspaceAboLeftButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(280, 70));
            setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
            setFont(QFont("Arial", 15));
            setCheckable(true);
            //setStyleSheet("color : #ff5e4d; background-color : #FFCB60;");
            setStyleSheet("QPushButton:checked{background-color: yellow;} QPushButton:pressed {background-color: yellow;}");
        }
        virtual ~EspaceAboLeftButton() {}
    };
    QButtonGroup * membresButtonGroup = new QButtonGroup();
    membresButtonGroup->setExclusive(true);
    for(int i = 0; i<membres->size();i++){
        EspaceAboLeftButton * membreButton = new EspaceAboLeftButton(membres->at(i)->getName());
        leftVerticalLayout->addWidget(membreButton);
        membresButtonGroup->addButton(membreButton,i);
    }
    membresButtonGroup->button(indiceMembreCourant)->setChecked(true);
    EspaceAboLeftButton * gererCompteButton = new EspaceAboLeftButton("Gerer Compte");
    leftVerticalLayout->addWidget(gererCompteButton);

    QVBoxLayout * platsFavorisWithLabelLayout = new QVBoxLayout();
    QLabel * platsFavorisLabel = new QLabel("Mes plats favoris:");

    QWidget * platsFavorisContentWidget = new QWidget();
    QScrollArea * platsFavorisScrollArea = new QScrollArea;
    platsFavorisScrollArea->setAlignment(Qt::AlignCenter);
    platsFavorisScrollArea->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    platsFavorisScrollArea->setHorizontalScrollBarPolicy( Qt::ScrollBarAsNeeded);
    platsFavorisScrollArea->setMinimumHeight(185);
    platsFavorisScrollArea->setMaximumHeight(250);
    QHBoxLayout * platsFavorisLayout = new QHBoxLayout();
    platsFavorisLayout->setSpacing(10);
    std::vector<Plat*>* favoris = model->getClients()[model->getIndiceFamilleCourante()]->getMembres()->at(indiceMembreCourant)->getFavoris();
    for(int i = 0; i<favoris->size();i++){
        CatalogueItem * item = new CatalogueItem(favoris->at(i));
        platsFavorisLayout->addWidget(item);
    }
    platsFavorisContentWidget->setLayout(platsFavorisLayout);
    platsFavorisScrollArea->setWidget(platsFavorisContentWidget);

    platsFavorisWithLabelLayout->addWidget(platsFavorisLabel);
    platsFavorisWithLabelLayout->addWidget(platsFavorisScrollArea);

    QVBoxLayout * recommandationsWithLabelLayout = new QVBoxLayout();
    QLabel * recommandationsLabel = new QLabel("Nos recommandations: ");

    QWidget * recommandationsContentWidget = new QWidget();
    QScrollArea * recommandationsScrollArea = new QScrollArea();
    recommandationsScrollArea->setAlignment(Qt::AlignCenter);
    recommandationsScrollArea->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    recommandationsScrollArea->setHorizontalScrollBarPolicy( Qt::ScrollBarAsNeeded);
    recommandationsScrollArea->setMinimumHeight(185);
    recommandationsScrollArea->setMaximumHeight(250);
    QHBoxLayout * recommandationsLayout = new QHBoxLayout();
    recommandationsLayout->setSpacing(10);

    std::vector<Plat*>* recommandations = membreCourant->getRecommendations();
    for(int i = 0; i<recommandations->size();i++){
        CatalogueItem * item = new CatalogueItem(favoris->at(i));
        recommandationsLayout->addWidget(item);
    }
    recommandationsContentWidget->setLayout(recommandationsLayout);
    recommandationsScrollArea->setWidget(recommandationsContentWidget);

    recommandationsWithLabelLayout->addWidget(recommandationsLabel);
    recommandationsWithLabelLayout->addWidget(recommandationsScrollArea);

    QLabel * avantagesPersoLabel = new QLabel("Avantages personnels: ");
    QLabel * avantagesFamilleLabel = new QLabel("Avantages famille: ");
    QLabel * avantageFamille1 = new QLabel(" Commande prioritaire");
    QLabel * avantageFamille2 = new QLabel(" The vert offert");
    QGridLayout * avantagesGridLayout = new QGridLayout();
    avantagesGridLayout->setAlignment(Qt::AlignCenter);
    avantagesGridLayout->addWidget(avantagesPersoLabel,1,1);
    for(int i = 0; i<membreCourant->getAvantages()->size();i++){
        QLabel * avantage = new QLabel(membreCourant->getAvantages()->at(i));
        avantagesGridLayout->addWidget(avantage,i+2,1);
    }
    avantagesGridLayout->setHorizontalSpacing(200);
    avantagesGridLayout->addWidget(avantagesFamilleLabel,1,2);
    avantagesGridLayout->addWidget(avantageFamille1,2,2);
    avantagesGridLayout->addWidget(avantageFamille2,3,2);

    rightVerticalLayout->addLayout(platsFavorisWithLabelLayout);
    rightVerticalLayout->addSpacing(30);
    rightVerticalLayout->addLayout(recommandationsWithLabelLayout);
    rightVerticalLayout->addSpacing(30);
    rightVerticalLayout->addLayout(avantagesGridLayout);

    layout->addLayout(leftVerticalLayout);
    layout->addLayout(rightVerticalLayout);

    connect(gererCompteButton, SIGNAL(clicked()), parent, SLOT(displayGererCompte()));
    connect(membresButtonGroup,SIGNAL(buttonClicked(int)),parent,SLOT(displayEspaceAbo(int)));
}


