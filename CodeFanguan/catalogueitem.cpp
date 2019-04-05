#include "catalogueitem.h"

CatalogueItem::CatalogueItem(Plat * plat) : QToolButton(){
    setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    setIcon(QIcon(plat->getImageFile()));
    setIconSize(QSize(150, 120));
    setText(QString("%1 - %2 euros").arg(plat->getLabel()).arg(plat->getPrix()));
    setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
    setStyleSheet("color : black; background-color : #FFECB3  ;");
}
