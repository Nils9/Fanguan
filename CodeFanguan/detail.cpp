#include "detail.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <iostream>
#include <QSpinBox>
#include <QLineEdit>
#include <QLabel>
#include <QFrame>
#include <QGroupBox>

Detail::Detail(QWidget *parent) : QWidget(parent)
{

    std::vector<QString> ingredientList;
    ingredientList.push_back(QString("Carotte"));
    ingredientList.push_back(QString("Soja"));
    ingredientList.push_back(QString("Feuille de riz"));
    ingredientList.push_back(QString("poulet"));
    QString itemName = "Nems";
    QString itemImage = ":/images/nourriture.jpg";
    QString itemDescription = "Specialte de la region de Canton. \n Croustillant et fondant a l'interieur. \n N'hesitez pas a le consommer avec sa sauce";

    //mainLayout début
    QVBoxLayout * mainLayout = new QVBoxLayout();

    //topLayout début
    QHBoxLayout * topLayout = new QHBoxLayout();
    QPushButton * quitButton = new QPushButton();
    quitButton->setIcon(QIcon(":/images/cross.png"));
    QLabel * name = new QLabel(itemName);
    name->setFont(QFont("Arial", 28));
    topLayout->addWidget(name);
    topLayout->addStretch(5);
    topLayout->addWidget(quitButton);
    //topLayout fin

    //middleLayout début
    QHBoxLayout * middleLayout = new QHBoxLayout();

    //leftLayout début
    QVBoxLayout * leftLayout =new  QVBoxLayout();

    //middleLeftLayout début
    QHBoxLayout * middleLeftLayout = new QHBoxLayout();
    QPixmap pix(itemImage);
    QLabel * image = new QLabel(this);
    image->setPixmap(pix.scaled(QSize(350, 350), Qt::IgnoreAspectRatio,
                                Qt::SmoothTransformation));
    image->setScaledContents(true);
    image->setMinimumSize(QSize(400,400));

    QGroupBox * ingredientBox = new QGroupBox(tr("Ingredients"));
    QGridLayout * ingredientGrid = new QGridLayout(ingredientBox);
    std::vector<QPushButton *> buttonList = std::vector<QPushButton *>();

    for (int i = 0; i < ingredientList.size(); i++) {
        QPushButton * button = new QPushButton(ingredientList[i]);
        buttonList.push_back(button);
        button ->setIcon(QIcon(":/images/cross.png"));
        ingredientGrid->addWidget(button, i/2, i%2);
    }

    QGroupBox * descriptionBox = new QGroupBox(tr("Description"));
    QVBoxLayout * descriptionLayout = new QVBoxLayout(descriptionBox);
    descriptionLayout->addWidget(new QLabel(itemDescription));

    QVBoxLayout * infosLayout = new  QVBoxLayout();

    infosLayout->addWidget(ingredientBox);
    infosLayout->addWidget(descriptionBox);

    middleLeftLayout->addWidget(image);
    middleLeftLayout->addLayout(infosLayout);
    //middleLeftLayout fin

    QLineEdit * infos = new QLineEdit(tr("Requete particuliere"));
    leftLayout->addLayout(middleLeftLayout);
    leftLayout->addWidget(infos);
    //leftLayout fin

    QFrame * rightFrame = new QFrame();
    QVBoxLayout * rightLayout =new  QVBoxLayout(rightFrame);
    QGroupBox * quantityBox = new QGroupBox(tr("Quantite"));
    QHBoxLayout * quantityLayout = new QHBoxLayout();
    QSpinBox * quantity =  new QSpinBox();
    quantity->setValue(1);
    quantity->setRange(1, 20);
    quantity->setSuffix(tr(" unite(s)"));
    quantityLayout->addWidget(quantity);
    quantityBox->setLayout(quantityLayout);
    rightLayout->addWidget(quantityBox);
    rightLayout->addStretch(5);

    middleLayout->addLayout(leftLayout);
    middleLayout->addWidget(rightFrame);
    //middleLayout fin

    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(middleLayout);
    setLayout(mainLayout);
    //mainLayout fin

}

