#include "espaceabo.h"

EspaceAbo::EspaceAbo(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout * layout = new QHBoxLayout(this);
    QVBoxLayout * leftVerticalLayout = new QVBoxLayout();
    leftVerticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
    QVBoxLayout * rightVerticalLayout = new QVBoxLayout();

    class EspaceAboLeftButton : public QPushButton
    {
    public:
        EspaceAboLeftButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(150, 15));
            setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
            setFont(QFont("Arial", 15));
            setStyleSheet("color : red; background-color : orange;");

        }
        virtual ~EspaceAboLeftButton() {}
    };

    class CatalogueItem : public QToolButton
    {

    public:
        CatalogueItem(QString label, QIcon icon, int id) : QToolButton(){
            setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            setMaximumSize(QSize(160,150));
            setIcon(icon);
            setIconSize(QSize(150, 150));
            setText(label);
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setStyleSheet("color : black; background-color : white;");
        }
        virtual ~CatalogueItem() {}
    };

    EspaceAboLeftButton * margotButton = new EspaceAboLeftButton("Margot");
    EspaceAboLeftButton * arthurButton = new EspaceAboLeftButton("Arthur");
    EspaceAboLeftButton * nilsButton = new EspaceAboLeftButton("Nils");
    EspaceAboLeftButton * julienButton = new EspaceAboLeftButton("Julien");
    EspaceAboLeftButton * gererCompteButton = new EspaceAboLeftButton("Gérer Compte");
    leftVerticalLayout->addWidget(margotButton);
    leftVerticalLayout->addWidget(arthurButton);
    leftVerticalLayout->addWidget(nilsButton);
    leftVerticalLayout->addWidget(julienButton);
    leftVerticalLayout->addWidget(gererCompteButton);

    QVBoxLayout * platsFavorisWithLabelLayout = new QVBoxLayout();
    QLabel * platsFavorisLabel = new QLabel("Mes plats favoris:");

    QWidget * platsFavorisContentWidget = new QWidget();
    QScrollArea * platsFavorisScrollArea = new QScrollArea;
    platsFavorisScrollArea->setAlignment(Qt::AlignCenter);
    platsFavorisScrollArea->setMaximumHeight(200);
    QHBoxLayout * platsFavorisLayout = new QHBoxLayout();
    platsFavorisLayout->setSpacing(50);
    CatalogueItem * nemsButton = new CatalogueItem("Nems",QIcon(":/nourriture.jpg"),1);
    CatalogueItem * samoussasButton = new CatalogueItem("Samoussas",QIcon(":/nourriture.jpg"),2);
    CatalogueItem * boeufGingembreButton = new CatalogueItem("Boeuf au gingembre",QIcon(":/nourriture.jpg"),3);
    CatalogueItem * phoButton = new CatalogueItem("Pho",QIcon(":/nourriture.jpg"),4);
    platsFavorisLayout->addWidget(nemsButton);
    platsFavorisLayout->addWidget(samoussasButton);
    platsFavorisLayout->addWidget(boeufGingembreButton);
    platsFavorisLayout->addWidget(phoButton);
    platsFavorisContentWidget->setLayout(platsFavorisLayout);
    platsFavorisScrollArea->setWidget(platsFavorisContentWidget);

    platsFavorisWithLabelLayout->addWidget(platsFavorisLabel);
    platsFavorisWithLabelLayout->addWidget(platsFavorisScrollArea);

    QVBoxLayout * recommandationsWithLabelLayout = new QVBoxLayout();
    QLabel * recommandationsLabel = new QLabel("Nos recommandations: ");

    QWidget * recommandationsContentWidget = new QWidget();
    QScrollArea * recommandationsScrollArea = new QScrollArea();
    recommandationsScrollArea->setAlignment(Qt::AlignCenter);
    recommandationsScrollArea->setMaximumHeight(200);
    QHBoxLayout * recommandationsLayout = new QHBoxLayout();
    recommandationsLayout->setSpacing(50);
    CatalogueItem * canardLaqueButton = new CatalogueItem("Canard laqué",QIcon(":/nourriture.jpg"),5);
    CatalogueItem * rouleauxPrintempsButton = new CatalogueItem("Rouleaux de printemps",QIcon(":/nourriture.jpg"),6);
    CatalogueItem * rizCantonnaisButton = new CatalogueItem("Riz cantonnais",QIcon(":/nourriture.jpg"),7);
    CatalogueItem * boBunButton = new CatalogueItem("Bò bún",QIcon(":/nourriture.jpg"),8);
    recommandationsLayout->addWidget(canardLaqueButton);
    recommandationsLayout->addWidget(rouleauxPrintempsButton);
    recommandationsLayout->addWidget(rizCantonnaisButton);
    recommandationsLayout->addWidget(boBunButton);
    recommandationsContentWidget->setLayout(recommandationsLayout);
    recommandationsScrollArea->setWidget(recommandationsContentWidget);

    recommandationsWithLabelLayout->addWidget(recommandationsLabel);
    recommandationsWithLabelLayout->addWidget(recommandationsScrollArea);

    QLabel * avantagesPersoLabel = new QLabel("Avantages personnels: ");
    QLabel * avantagePerso1 = new QLabel(" -5% sur les entrées");
    QLabel * avantagesFamilleLabel = new QLabel("Avantages famille: ");
    QLabel * avantageFamille1 = new QLabel(" Commande prioritaire");
    QLabel * avantageFamille2 = new QLabel(" Thé vert offert");
    QGridLayout * avantagesGridLayout = new QGridLayout();
    avantagesGridLayout->setAlignment(Qt::AlignCenter);
    avantagesGridLayout->addWidget(avantagesPersoLabel,1,1);
    avantagesGridLayout->addWidget(avantagePerso1,2,1);
    avantagesGridLayout->setHorizontalSpacing(100);
    avantagesGridLayout->addWidget(avantagesFamilleLabel,1,2);
    avantagesGridLayout->addWidget(avantageFamille1,2,2);
    avantagesGridLayout->addWidget(avantageFamille2,3,2);

    rightVerticalLayout->addLayout(platsFavorisWithLabelLayout);
    rightVerticalLayout->addSpacing(30);
    rightVerticalLayout->addLayout(recommandationsWithLabelLayout);
    rightVerticalLayout->addLayout(avantagesGridLayout);

    layout->addLayout(leftVerticalLayout);
    layout->addLayout(rightVerticalLayout);

}
