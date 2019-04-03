//Nils
#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QLayout>
#include <QToolButton>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include "menumodel.h"
#include "catalogueitem.h"
#include "plat.h"

class Menu : public QWidget
{
    Q_OBJECT
public:
    explicit Menu(QWidget *parent = nullptr);


signals:

public slots:
};

#endif // MENU_H
