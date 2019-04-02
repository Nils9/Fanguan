#include "mainwindow.h"
#include "connexion.h"
#include "inscription.h"
#include "espaceabo.h"
#include "accueil.h"
#include "gerercompte.h"
#include "catalogue.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //Connexion * test = new Connexion();
    //Inscription * test = new Inscription();
    //EspaceAbo * test = new EspaceAbo();
    GererCompte * test = new GererCompte();
    //Accueil * test = new Accueil();
    //Catalogue * test = new Catalogue();
    w.setCentralWidget(test);
    w.show();
    return a.exec();
}
