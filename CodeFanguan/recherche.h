#ifndef RECHERCHE_H
#define RECHERCHE_H

#include <QWidget>
#include <QLayout>
#include <QToolButton>
#include <QGroupBox>
#include <QPushButton>
#include <QSlider>
#include <QGridLayout>
#include <QIcon>
#include "catalogue.h"
#include "model.h"
#include "template.h"

class Recherche : public QWidget
{
    Q_OBJECT
public:
    explicit Recherche(Template *parent = nullptr, Model * m = nullptr);

signals:

public slots:

private:
    QWidget * centralWidget = nullptr;
    QLayout * centralLayout = nullptr;
    QVBoxLayout * mainLayout = nullptr;
    Model * model = nullptr;
};

#endif // RECHERCHE_H
