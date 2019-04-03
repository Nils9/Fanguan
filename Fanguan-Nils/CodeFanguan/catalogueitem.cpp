#include "catalogueitem.h"

CatalogueItem::CatalogueItem(QString label, QIcon icon, int id) : QToolButton(){
    setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    setIcon(icon);
    setIconSize(QSize(150, 120));
    setText(label);
    setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
    setStyleSheet("color : black; background-color : white;");
}
