//Margot
#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QScrollArea>
#include "catalogueitem.h"
#include "plat.h"

class Catalogue : public QScrollArea
{
    Q_OBJECT
public:
    explicit Catalogue(QWidget *parent = nullptr, std::vector<Plat *> listePlat = std::vector<Plat *>());

signals:

public slots:

private:

};

#endif // CATALOGUE_H
