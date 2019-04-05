//Margot
#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "model.h"
#include "template.h"

class Carte : public QWidget
{
    Q_OBJECT
public:
    explicit Carte(Template *parent = nullptr, Model * m = nullptr);
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
    Template * temp;
};

#endif // CARTE_H
