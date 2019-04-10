//Arthur
#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QHBoxLayout>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QButtonGroup>

#include "model.h"

class Template : public QWidget
{
    Q_OBJECT
public:
    enum Rubriques{CARTE = 0, ESPACEABO, CONNEXION, INSCRIPTION, RECHERCHE, SELECTION, GERERCOMPTE};
    explicit Template(QWidget *parent = nullptr, Model *m =nullptr, Rubriques rub = CARTE);
    QWidget * getCentralWidget();
    void setCentralWidget(QWidget * w) {
        centralWidget =  w;
    }
    void paintEvent(QPaintEvent *);

signals:

public slots:
    void displayCarte();
    void displayEspaceAbo(int i=0);
    void displayInscription();
    void displayRecherche();
    void displaySelection();
    void displayCommande();
    void appelServeur();
    void displayGererCompte();
    void retourCommande();
    void displayDetail(Plat* p);

private :
    Rubriques previousWidget = CARTE;
    QWidget * centralWidget = nullptr;
    QHBoxLayout * centralLayout = new QHBoxLayout() ;
    QVBoxLayout * mainLayout = nullptr;
    Model *model = nullptr;
};

#endif // TEMPLATE_H
