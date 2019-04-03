#include <QApplication>
#include "carte.h"
#include "template.h"
#include "detail.h"
#include "connexion.h"
#include "mainwindow.h"
#include "connexion.h"
#include "inscription.h"
#include "espaceabo.h"
#include "accueil.h"
#include "gerercompte.h"
#include "catalogue.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
//    QSqlDatabase db = QSqlDatabase::addDatabase("SQLITE");
//    db.setDatabaseName(":/bdd/fanguan_bdd.sqlite");
//    bool ok = db.open();

//    if (ok) {
//        QSqlQuery query;
//        query.exec("SELECT name FROM PLATS WHERE categorie = entree");
//        while (query.next()) {
//            QString name = query.value(0).toString();
//            std::cout << name.toStdString() << std::endl;
//        }
//    }


}
