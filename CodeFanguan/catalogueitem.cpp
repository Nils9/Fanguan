#include "catalogueitem.h"
#include <QVBoxLayout>


CatalogueItem::CatalogueItem(Template * temp, Plat *p) : QToolButton(){

    plat = p;
    setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    setIcon(QIcon(plat->getImageFile()));
    setIconSize(QSize(150, 120));
    setText(QString("%1 - %2 euros").arg(plat->getLabel()).arg(plat->getPrix()));
    setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
    setStyleSheet("color : black; background-color : #FFECB3  ;");

    connect(this, SIGNAL(clicked()), this, SLOT(sendDetailSignal()));
    connect(this, SIGNAL(detailRequis(Plat*)), temp, SLOT(displayDetail(Plat*)));

}



void CatalogueItem::sendDetailSignal() {
    emit detailRequis(plat);
}




