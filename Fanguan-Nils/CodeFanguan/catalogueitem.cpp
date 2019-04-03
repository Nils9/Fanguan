#include "catalogueitem.h"

CatalogueItem::CatalogueItem(Plat * plat) : QToolButton(){
    setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    setIcon(QIcon(plat->getImageFile()));
    setIconSize(QSize(150, 120));
    setText(plat->getLabel());
    setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
    setStyleSheet("color : black; background-color : white;");
}
