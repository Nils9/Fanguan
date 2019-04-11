//Arthur
#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QPixmap>
#include <QWidget>
#include "model.h"

class Accueil : public QWidget
{
    Q_OBJECT
public:
    explicit Accueil(QWidget *parent = nullptr, Model * m = nullptr);
    Model * model= nullptr;

signals:

public slots:
    void changeLangueFR();
    void changeLangueEN();
    void changeLangueCH();

private :
    QWidget * mainWidget = new QWidget();
    QLabel * welcomeSentence = new QLabel();
    QPixmap pix = QPixmap(":/images/titreFanguan.png" );
};

#endif // ACCUEIL_H
