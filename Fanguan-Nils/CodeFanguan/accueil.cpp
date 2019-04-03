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
    frButton->setIcon(QIcon(":/images/france.jpg"));
    frButton->setMinimumSize(QSize(50, 40));
    QPushButton * engButton = new QPushButton("Eng");
    engButton->setIcon(QIcon(":/images/angleterre.jpg"));
    engButton->setMinimumSize(QSize(50, 40));
    QPushButton * chButton = new QPushButton("Ch");
    chButton->setIcon(QIcon(":/images/chine.png"));
    chButton->setMinimumSize(QSize(50, 40));

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
        AccueilButton(QString label, QString imageFile) : QPushButton() {
            setMinimumSize(QSize(200, 150));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Arial", 18));
            setStyleSheet("color : #ff5e4d; background-color : #FFCB60;");
            QVBoxLayout * layout = new QVBoxLayout(this);
            QLabel * image = new QLabel();
            image->setAlignment(Qt::AlignHCenter);
            QPixmap pix(imageFile);
            image->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            image->setPixmap(pix.scaled(QSize(150, 100), Qt::IgnoreAspectRatio,
                                        Qt::SmoothTransformation));
            layout->addWidget(image);

            QLabel* title = new QLabel(label);
            title->setAlignment(Qt::AlignHCenter);
            title->setFont(QFont("Arial", 18));
            layout->addWidget(title);
        }
        virtual ~AccueilButton() {}
    };
    QPushButton * carteButton = new AccueilButton("Carte",":/images/menu.png");
    QPushButton * aboButton = new AccueilButton("Espace Habitue", ":/images/smileymaison.png");
    QPushButton * rechercheButton = new AccueilButton("Recherche",":/images/loupe.png");
    QPushButton * selectionButton = new AccueilButton("Notre Selection",":/images/toque.png");

    QHBoxLayout * buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(carteButton);
    buttonLayout->addWidget(aboButton);
    buttonLayout->addWidget(rechercheButton);
    buttonLayout->addWidget(selectionButton);
    buttonLayout->setSpacing(50);

    QHBoxLayout * serveurLayout = new QHBoxLayout();
    QPushButton * serveurButton = new AccueilButton("Serveur", ":/images/bell.png");
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

