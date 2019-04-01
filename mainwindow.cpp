#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "accueil.h"
#include "template.h"
#include "carte.h"
#include "catalogue.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    setCentralWidget(new Template(this));
    setMinimumSize(900, 600);
    setStyleSheet("Accueil {background-color: red}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayCarte() {
    setCentralWidget(new Template(this, Template::CARTE));
}

void MainWindow::displayRecherche() {
    setCentralWidget(new Template(this, Template::ESPACEABO));
}

void MainWindow::displayEspaceAbo() {
    setCentralWidget(new Template(this, Template::RECHERCHE));
}

void MainWindow::appelServeur() {
     std::cout << "Serveur"<< std::endl;
}
