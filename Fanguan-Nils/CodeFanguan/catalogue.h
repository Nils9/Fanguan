//Margot
#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QWidget>
#include "catalogueitem.h"
#include "model.h"

class Catalogue : public QWidget
{
    Q_OBJECT
public:
    explicit Catalogue(QWidget *parent = nullptr, Model * model = nullptr);

signals:

public slots:

private:
    Model * model;
};

#endif // CATALOGUE_H
