//Margot
#ifndef CARTE_H
#define CARTE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Carte : public QWidget
{
    Q_OBJECT
public:
    explicit Carte(QWidget *parent = nullptr);
    void setCentralWidget(QWidget * w) {
        centralWidget =  w;
    }
    void paintEvent(QPaintEvent *);

signals:

public slots:
    void displayEntrees();
    void displayPlats();
    void displayDesserts();
    void displayMenus();
    void displayBoissons();

private:
    QWidget * centralWidget;
    QLayout * centralLayout;
    QVBoxLayout * mainLayout;
};

#endif // CARTE_H
