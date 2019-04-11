//Nils
#ifndef COMMANDE_H
#define COMMANDE_H

#include <QDialog>
#include "model.h"
#include "commandemodel.h"
#include "plat.h"
#include <QGroupBox>
#include <QLayout>
#include "template.h"

class Commande : public QWidget
{
    Q_OBJECT
private:
    Template *parent;
    Model * m;
    QLabel * total;
    std::vector<QLabel*> sousTotaux= std::vector<QLabel*> ();
    QWidget * mainWidget = nullptr;
    QVBoxLayout * centralLayout =  new QVBoxLayout();
    QPushButton * sendButton;

public:
    explicit Commande(Template *parent = nullptr, Model * model = nullptr);
    QGroupBox * newColonne(Membre * membre); //ne sert que dans le cas connecté

signals:

public slots:

    void displayTotal();
    void refresh();
    void envoieCommande();
};

#endif // COMMANDE_H
