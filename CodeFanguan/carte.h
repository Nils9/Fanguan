//Margot
#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "model.h"

class Carte : public QWidget
{
    Q_OBJECT
public:
    explicit Carte(QWidget *parent = nullptr, Model * m = nullptr);
    void setCentralWidget(QWidget * w) {
        centralWidget =  w;
    }
    void paintEvent(QPaintEvent *);

signals:

public slots:
    void displayEntrees();
    void displayPlats();
    void displayDesserts();
    void displayMenus();
    void displayBoissons();

private:
    Model * model = nullptr;
    QWidget * centralWidget = nullptr;
    QLayout * centralLayout = nullptr;
    QVBoxLayout * mainLayout;
};

#endif // CARTE_H
