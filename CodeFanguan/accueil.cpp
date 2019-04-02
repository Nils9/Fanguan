#include "accueil.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

Accueil::Accueil(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();

    QHBoxLayout * topLayout = new QHBoxLayout();
    topLayout->setSpacing(0);

    QPushButton * frButton = new QPushButton("Fr");
    QPushButton * engButton = new QPushButton("Eng");
    QPushButton * chButton = new QPushButton("Ch");


    QSizePolicy langSizePolicy = QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    frButton->setSizePolicy(langSizePolicy);
    engButton->setSizePolicy(langSizePolicy);
    chButton->setSizePolicy(langSizePolicy);

    topLayout->addWidget(frButton);
    topLayout->addWidget(engButton);
    topLayout->addWidget(chButton);
    topLayout->addStretch();

    QLabel * welcomeSentence = new QLabel("Bienvenue chez Fanguan");
    welcomeSentence->setAlignment(Qt::AlignHCenter);
    welcomeSentence->setFont(QFont("Arial", 30));
    welcomeSentence->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum));


    class AccueilButton : public QPushButton
    {
    public:
        AccueilButton(QString label) : QPushButton(label){
            setMinimumSize(QSize(200, 150));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Arial", 18));
            setStyleSheet("color : yellow; background-color : orange;");

        }
        virtual ~AccueilButton() {}
    };

    QPushButton * carteButton = new AccueilButton("Carte");
    QPushButton * aboButton = new AccueilButton("Espace Habitue");
    QPushButton * rechercheButton = new AccueilButton("Recherche");
    QPushButton * selectionButton = new AccueilButton("Notre Selection");

    QHBoxLayout * buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(carteButton);
    buttonLayout->addWidget(aboButton);
    buttonLayout->addWidget(rechercheButton);
    buttonLayout->addWidget(selectionButton);
    buttonLayout->setSpacing(50);

    QHBoxLayout * serveurLayout = new QHBoxLayout();
    QPushButton * serveurButton = new AccueilButton("Serveur");
    serveurLayout->addStretch(5);
    serveurLayout->addWidget(serveurButton);
    serveurLayout->addStretch(5);

    mainLayout->addLayout(topLayout);
    mainLayout->addStretch(5);
    mainLayout->addWidget(welcomeSentence);
    mainLayout->addStretch(5);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addStretch(5);
    mainLayout->addLayout(serveurLayout);
    mainLayout->addStretch(5);
    setLayout(mainLayout);

    connect(aboButton, SIGNAL(clicked()), parent, SLOT(displayEspaceAbo()));
    connect(rechercheButton, SIGNAL(clicked()), parent, SLOT(displayRecherche()));
    connect(carteButton, SIGNAL(clicked()), parent, SLOT(displayCarte()));
    connect(serveurButton, SIGNAL(clicked()), parent, SLOT(appelServeur()));


}



