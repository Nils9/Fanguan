//Nils
#ifndef COMMANDE_H
#define COMMANDE_H

#include <QDialog>

class Commande : public QDialog
{
    Q_OBJECT
public:
    explicit Commande(QDialog *parent = nullptr, int commandeId = 0);

signals:

public slots:
};

#endif // COMMANDE_H
