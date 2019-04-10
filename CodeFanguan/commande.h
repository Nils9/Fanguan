//Nils
#ifndef COMMANDE_H
#define COMMANDE_H

#include <QDialog>
#include "model.h"
#include "commandemodel.h"
#include "plat.h"
#include <QGroupBox>
#include <QLayout>

class Commande : public QWidget
{
    Q_OBJECT
private:
    Model * m;
    QLabel * total;
    std::vector<QLabel*> sousTotaux= std::vector<QLabel*> ();
public:
    explicit Commande(QWidget *parent = nullptr, Model * model = nullptr);
    QGroupBox * newColonne(Membre * membre, int nb); //ne sert que dans le cas connecté

signals:

public slots:
    void displayTotal();
};

#endif // COMMANDE_H
