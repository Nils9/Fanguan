//Gérer Compte
#ifndef GERERCOMPTE_H
#define GERERCOMPTE_H

#include <QWidget>
#include <QLayout>
#include <QProgressBar>
#include <QLabel>
#include <QLineEdit>
#include <QIcon>
#include <QToolButton>
#include <QPushButton>
#include <QIcon>

class GererCompte : public QWidget
{
    Q_OBJECT
private:
    QGridLayout * progressGridLayout;
    QToolButton * plusButton;
    QLineEdit * newMembreLineEdit = new QLineEdit();
    QPushButton * addMembreButton = new QPushButton("Ajouter");

public:
    explicit GererCompte(QWidget *parent = nullptr);

signals:

public slots:
    void addMembreLineEdit();
    void addMembre();
};

#endif // GERERCOMPTE_H
