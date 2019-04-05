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
#include <iostream>

class GererCompte : public QWidget
{
    Q_OBJECT
private:
    QGridLayout * progressGridLayout;
    QToolButton * plusButton;
    QLineEdit * newMembreLineEdit = new QLineEdit();
    QPushButton * addMembreButton = new QPushButton("Ajouter");
    std::vector<QToolButton *> * deleteButtonsVector = new std::vector<QToolButton*>;
    std::vector <QLabel*> * labelsVector = new std::vector<QLabel*>;
    std::vector <QProgressBar*> * progressBarsVector = new std::vector<QProgressBar*>;

    QWidget * centralWidget;
    QLayout * centralLayout;
    QVBoxLayout * mainLayout;

public:
    explicit GererCompte(QWidget *parent = nullptr);
    void addDeleteButton(int row, int column);
    void addLabel(int row, int column, QString name);
    void addProgressBar(int row, int column, int progress);

signals:

public slots:
    void addMembreLineEdit();
    void addMembre();
    void deleteMembre();
};

#endif // GERERCOMPTE_H
