#include "model.h"
#include <QtSql>

Model::Model(){
    //Création d'une famille
    Membre * margot = new Membre("Margot", 1);
    margot->setProgress(56);
    margot->addAvantage("Dessert à moitié prix");
    Membre * arthur = new Membre("Arthur", 2);
    arthur->setProgress(89);
    arthur->addAvantage("-10% sur les nems");
    Membre * julien = new Membre("Julien", 3);
    julien->setProgress(63);
    julien->addAvantage("Saqué offert");
    Membre * nils = new Membre("Nils", 4);
    nils->setProgress(58);
    nils->addAvantage("Riz à volonté");
    Famille * fanguan = new Famille("Fanguan", "password");
    fanguan->addMembre(margot);
    fanguan->addMembre(arthur);
    fanguan->addMembre(julien);
    fanguan->addMembre(nils);
    clients.push_back(fanguan);
    indiceFamilleCourante = 0;

    //Elaboration de la carte

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath().append("/bdd/fanguan_bdd.sqlite"));

    bool ok = db.open();

    //Entrées
    if (ok) {

        QString nom, fichierImage;
        int id;
        float prix;
        Plat * e1 = nullptr;

        //Entrées
        QSqlQuery query(db);
        //std::cout << "## chargement desserts" << std::endl;
        query.exec("SELECT id, nom, fichierImage, prix FROM PLATS WHERE categorie = 'entree' ");
        while (query.next()) {
            id = query.value(0).toInt();
            nom = query.value(1).toString();
            fichierImage = query.value(2).toString();
            prix = query.value(3).toFloat();
            //std::cout << nom.toStdString() << std::endl;
            e1 = new Plat(id);
            e1->setLabel(nom);
            e1->setImageFile(fichierImage);
            e1->setPrix(prix);
            addEntree(e1);
            carteEntiere.push_back(e1);
        }
        //std::cout << "## Entree List length " << std::to_string(carteEntrees.size()) << std::endl;

        //Plats
        //std::cout << "## chargement desserts" << std::endl;
        QSqlQuery query2(db);
        query2.exec("SELECT id, nom, fichierImage, prix FROM PLATS WHERE categorie = 'plat' ");
        while (query2.next()) {
            id = query2.value(0).toInt();
            nom = query2.value(1).toString();
            fichierImage = query2.value(2).toString();
            prix = query2.value(3).toFloat();
           // std::cout << nom.toStdString() << std::endl;
            e1 = new Plat(id);
            e1->setLabel(nom);
            e1->setImageFile(fichierImage);
            e1->setPrix(prix);
            addPlat(e1);
            carteEntiere.push_back(e1);
        }

        //Dessert
        //std::cout << "## chargement desserts" << std::endl;
        QSqlQuery query3(db);
        query3.exec("SELECT id, nom, fichierImage, prix FROM PLATS WHERE categorie = 'dessert' ");
        while (query3.next()) {
            id = query3.value(0).toInt();
            nom = query3.value(1).toString();
            fichierImage = query3.value(2).toString();
            prix = query3.value(3).toFloat();
           // std::cout << nom.toStdString() << std::endl;
            e1 = new Plat(id);
            e1->setLabel(nom);
            e1->setImageFile(fichierImage);
            e1->setPrix(prix);
            addDessert(e1);
            carteEntiere.push_back(e1);
        }

        //Dessert
        //std::cout << "## chargement boisson" << std::endl;
        QSqlQuery query4(db);
        query4.exec("SELECT id, nom, fichierImage, prix FROM PLATS WHERE categorie = 'boisson' ");
        while (query4.next()) {
            id = query4.value(0).toInt();
            nom = query4.value(1).toString();
            fichierImage = query4.value(2).toString();
            prix = query4.value(3).toFloat();
            std::cout << nom.toStdString() << std::endl;
            e1 = new Plat(id);
            e1->setLabel(nom);
            e1->setImageFile(fichierImage);
            e1->setPrix(prix);
            addBoisson(e1);

        }
    }

    else {
        std::cout << db.lastError().text().toStdString() << std::endl;
        std::cout << "fail" << std::endl;
    }

    //std::cout << "## Menus" << std::endl;

    //Menus
    MenuModel * m1 = new MenuModel("Cantonais");
    m1->addMenuEntree(carteEntrees[0]);
    m1->addMenuEntree(carteEntrees[3]);

    m1->addMenuPlat(cartePlats[3]);
    m1->addMenuDessert(carteDesserts[0]);
    m1->addMenuDessert(carteDesserts[1]);
    addMenu(m1);

    MenuModel * m2 = new MenuModel("Japonais");
    m2->addMenuEntree(carteEntrees[1]);
    m2->addMenuEntree(carteEntrees[2]);
    m2->addMenuPlat(cartePlats[1]);
    m2->addMenuPlat(cartePlats[2]);
    m2->addMenuDessert(carteDesserts[0]);
    m2->addMenuDessert(carteDesserts[1]);
    addMenu(m2);

   // std::cout << "## Model done" << std::endl;

    //Ajout plats favoris et recommandations à famille Fanguan
    for(unsigned int i = 0; i+3<carteEntiere.size(); i+=4){
        margot->addFavori(carteEntiere[i]);
        margot->addRecommendation(carteEntiere[i]);
        arthur->addFavori(carteEntiere[i+1]);
        arthur->addRecommendation(carteEntiere[i+1]);
        julien->addFavori(carteEntiere[i+2]);
        julien->addRecommendation(carteEntiere[i+2]);
        nils->addFavori(carteEntiere[i+3]);
        nils->addRecommendation(carteEntiere[i+3]);
    }
}

void Model::addDessert(Plat *dessert){
    carteDesserts.push_back(dessert);
}

void Model::addPlat(Plat * plat){
    cartePlats.push_back(plat);
}

void Model::addEntree(Plat *entree){
    carteEntrees.push_back(entree);
}

void Model::addBoisson(Plat *boisson){
    carteBoissons.push_back(boisson);
}


void Model::addMenu(MenuModel *menu){
    carteMenus.push_back(menu);
}

std::vector<Plat*> Model::getEntrees(){
    return carteEntrees;
}

std::vector<Plat*> Model::getBoissons(){
    return carteBoissons;
}

std::vector<Plat*> Model::getPlats(){
    return cartePlats;
}

std::vector<Plat*> Model::getDesserts(){
    return carteDesserts;
}

std::vector<MenuModel*> Model::getMenus(){
    return carteMenus;
}

std::vector<Plat*>  Model::getCarteEntiere() {
    return carteEntiere;
}

QFont Model::getTitleFont(){
    return QFont("Helvetica", 30, QFont::Bold);
}

QFont Model::getAccueilButtonFont(){
    return QFont("Helvetica", 15, QFont::Bold);
}

QFont Model::getButtonFont(){
    return QFont("Helvetica", 20, QFont::Bold);
}

QFont Model::getTextFont(){
    return QFont("Helvetica", 15);
}

QFont Model::getPlatFont(){
    return QFont("Helvetica", 12);
}

std::vector<Famille*> Model::getClients(){
    return clients;
}

void Model::addFamille(Famille * famille){
    clients.push_back(famille);
}

int Model::getIndiceFamilleCourante(){
    return indiceFamilleCourante;
}

void Model::setIndiceFamilleCourante(int indice){
    indiceFamilleCourante = indice;
}

void Model::addCommande(CommandeModel * cm){
    listeCommandes.push_back(cm);
}

void Model::setTotal(float t){
    total = t;
}

void Model::calculateTotal(){
    total = 0;
    if(connected){
        Famille * famille = clients[indiceFamilleCourante];
        for(int i = 0; i < famille->getSize(); i++){
            Membre * membre = famille->getMembres()->at(i);
            total += membre->getSousTotal();
        }
    }
    else{
        for(int i = 0; i < listeCommandes.size(); i++){
            CommandeModel * cm = listeCommandes[i];
            int quantity = cm->getNbUnites();
            Plat * p = cm->getPlat();
            total += p->getPrix()*quantity;
        }
    }
}
