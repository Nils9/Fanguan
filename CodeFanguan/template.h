//Arthur
#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <QHBoxLayout>
#include <QWidget>

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
};

#endif // TEMPLATE_H
