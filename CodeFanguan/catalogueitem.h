#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <QToolButton>
#include "plat.h"
#include "catalogue.h"

class CatalogueItem : public QToolButton
{
    Q_OBJECT
public:
    explicit CatalogueItem(Template * parent = nullptr, Plat * plat = nullptr);
    virtual ~CatalogueItem() {}
    const Plat * getPlat() {return plat;}

signals:
    void detailRequis(Plat * p);

public slots:
   void sendDetailSignal();

private:
    Plat* plat = nullptr;

};

#endif // CATALOGUEITEM_H
