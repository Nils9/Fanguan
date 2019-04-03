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

#include"catalogue.h"

class Recherche : public QWidget
{
    Q_OBJECT
public:
    explicit Recherche(QWidget *parent = nullptr);

signals:

public slots:

private:
    QWidget * centralWidget;
    QLayout * centralLayout;
    QVBoxLayout * mainLayout;
};

#endif // RECHERCHE_H
