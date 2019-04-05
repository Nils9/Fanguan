//Julien
#ifndef ESPACEABO_H
#define ESPACEABO_H

#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextListFormat>
#include <QToolButton>
#include <QIcon>
#include <QScrollArea>

#include "gerercompte.h"
#include "model.h"

class EspaceAbo : public QWidget
{
    Q_OBJECT
public:
    explicit EspaceAbo(QWidget *parent = nullptr, Model * m = nullptr);
    Model * model;

signals:

public slots:

};

#endif // ESPACEABO_H
