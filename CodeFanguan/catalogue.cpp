#include "catalogue.h"
#include "catalogueitem.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QToolButton>
#include <QLabel>
#include <QIcon>
#include <QPixmap>
#include <QtGui>
#include <iostream>

Catalogue::Catalogue(QWidget *parent, std::vector<Plat *> listePlat) : QScrollArea(parent)
{
    QWidget * centralWidget = new QWidget();
    centralWidget->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
    QGridLayout * mainLayout = new QGridLayout(centralWidget);
    std::cout << "## List length" << std::to_string(listePlat.size()) << std::endl;
    for (unsigned int i = 0; i < listePlat.size(); i++) {
        mainLayout->addWidget(new CatalogueItem(listePlat[i]), i%3, i/3);
    }


    setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    mainLayout->setSpacing(20);
    setWidget(centralWidget);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);



//    QToolButton * plat1Button = new CatalogueItem("nems: 7 euros",QIcon(":/images/nouilles.jpg"),1);
//    QToolButton * plat2Button = new CatalogueItem("riz: 5 euros",QIcon(":/images/nouilles.jpg"),2);
//    QToolButton * plat3Button = new CatalogueItem("poulet: 11 euros",QIcon(":/images/poulet.jpg"),3);
//    QToolButton * plat4Button = new CatalogueItem("nouilles: 11 euros",QIcon(":/images/poulet.jpg"),4);
//    QToolButton * plat5Button = new CatalogueItem("nouilles pou: 12 euros",QIcon(":/images/nouilles.jpg"),5);
//    QToolButton * plat6Button = new CatalogueItem("nouilles boeuf: 12 e",QIcon(":/images/nouilles.jpg"),6);
//    QToolButton * plat7Button = new CatalogueItem("nouilles cre: 13 euros",QIcon(":/images/poulet.jpg"),7);
//    QToolButton * plat8Button = new CatalogueItem("nouilles ette: 13 euros",QIcon(":/images/poulet.jpg"),8);
//    QToolButton * plat9Button = new CatalogueItem("nouilles atte: 13 euros",QIcon(":/images/poulet.jpg"),9);

}

