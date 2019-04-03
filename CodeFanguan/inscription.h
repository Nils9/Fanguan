//Julien
#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QWidget>
#include <QLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QToolButton>
#include <QPushButton>
#include <QScrollArea>
#include <iostream>
  
class Inscription : public QWidget
{
    Q_OBJECT
private:
    QFormLayout * membresFormLayout;
    QScrollArea * scrollArea;
    std::vector<QLineEdit*> * membresVector;

public:
    explicit Inscription(QWidget *parent = nullptr);

signals:

public slots:
    void displayMembres(int n);
};

#endif // INSCRIPTION_H
