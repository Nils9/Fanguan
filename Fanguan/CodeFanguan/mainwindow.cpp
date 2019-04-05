#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "accueil.h"
#include "template.h"
#include "carte.h"
#include "catalogue.h"
#include "gerercompte.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    model = new Model();
    setCentralWidget(new Accueil(this));
    setMinimumSize(900, 600);
    setStyleSheet(" QMainWindow {background-color : #ff5e4d}; QPushButton {color black; background-color :#FFCB60;;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayCarte() {
    setCentralWidget(new Template(this, model, Template::CARTE));
}

void MainWindow::displayRecherche() {
    setCentralWidget(new Template(this, model, Template::RECHERCHE));
}

void MainWindow::displayEspaceAbo() {
    setCentralWidget(new Template(this, model, Template::CONNEXION));
}

void MainWindow::appelServeur() {
     std::cout << "Serveur"<< std::endl;
}
