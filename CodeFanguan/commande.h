//Nils
#ifndef COMMANDE_H
#define COMMANDE_H

#include <QDialog>

class Commande : public QWidget
{
    Q_OBJECT
public:
    explicit Commande(QWidget *parent = nullptr, int commandeId = 0);

signals:

public slots:
};

#endif // COMMANDE_H
