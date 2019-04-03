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
    setCentralWidget(new Accueil(this));
    setMinimumSize(900, 600);
    setStyleSheet(" QMainWindow {background-color : red}; QPushButton {background-color : yellow;}");
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
