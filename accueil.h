//Arthur
#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QWidget>
#include "model.h"

class Accueil : public QWidget
{
    Q_OBJECT
public:
    explicit Accueil(QWidget *parent = nullptr, Model * m = nullptr);
    Model * model= nullptr;

signals:

public slots:

private :
};

#endif // ACCUEIL_H
