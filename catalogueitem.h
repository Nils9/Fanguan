#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <QToolButton>
#include "plat.h"
#include "model.h"

class CatalogueItem : public QToolButton
{
public:
    CatalogueItem(Plat * plat);

    virtual ~CatalogueItem() {}

    Model * model = nullptr;
};

#endif // CATALOGUEITEM_H
