//Julien
#ifndef ESPACEABO_H
#define ESPACEABO_H

#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextListFormat>
#include <QToolButton>
#include <QButtonGroup>
#include <QIcon>
#include <QScrollArea>
#include "catalogueitem.h"
#include "gerercompte.h"

class EspaceAbo : public QWidget
{
    Q_OBJECT
private:
    Model * model;

public:
    explicit EspaceAbo(QWidget *parent = nullptr, Model * m = nullptr, int indiceMembreCourant = 0);

signals:
    void membreChanged();

public slots:

};

#endif // ESPACEABO_H
