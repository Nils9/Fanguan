#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "model.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots :
    inline const Model * getModel() {return model;}
    void displayCarte();
    void displayEspaceAbo();
    void displayRecherche();
    void appelServeur();

private:
    Ui::MainWindow *ui;
    Model * model = nullptr;
};

#endif // MAINWINDOW_H
