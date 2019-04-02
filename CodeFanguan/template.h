#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <QHBoxLayout>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Template : public QWidget
{
    Q_OBJECT
public:
    enum Rubriques{CARTE = 0, ESPACEABO, RECHERCHE, SELECTION};
    explicit Template(QWidget *parent = nullptr, Rubriques rub = CARTE);
    QWidget * getCentralWidget();
    void setCentralWidget(QWidget * w) {
        centralWidget =  w;
    }
    void paintEvent(QPaintEvent *);

signals:

public slots:
    void displayCarte();
    void displayEspaceAbo();
    void displayRecherche();
    //void displaySelection();
    void displayCommande();
    void appelServeur();

private :
    QWidget * centralWidget = nullptr;
    QHBoxLayout * centralLayout = new QHBoxLayout() ;
    QVBoxLayout * mainLayout = nullptr;
};

#endif // TEMPLATE_H
