//Julien
#ifndef CONNEXION_H
#define CONNEXION_H

#include <QWidget>
#include <QLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QFormLayout>
#include <QSizePolicy>
#include "model.h"
#include "template.h"
  
class Connexion : public QWidget
{
    Q_OBJECT

private:
    Model * model;
    QLineEdit * familleLineEdit;
    QLineEdit * passwordLineEdit;
    QLabel * feedbackLabel;

public:
    explicit Connexion(QWidget *parent = nullptr, Model * model = nullptr);

signals:
    void identifiantsCorrects();

public slots:
    void verifierIdentifiants();
};

#endif // CONNEXION_H
