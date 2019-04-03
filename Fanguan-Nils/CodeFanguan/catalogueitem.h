#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <QToolButton>

class CatalogueItem : public QToolButton
{
public:
    CatalogueItem(QString label, QIcon icon, int id);
    virtual ~CatalogueItem() {}
};

#endif // CATALOGUEITEM_H
