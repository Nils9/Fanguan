#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <QToolButton>
#include "plat.h"

class CatalogueItem : public QToolButton
{
public:
    CatalogueItem(Plat * plat);

    virtual ~CatalogueItem() {}
};

#endif // CATALOGUEITEM_H
