#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget mainWidget;
    QStackedWidget * globalStackedWidget;
    QStackedWidget * centerStackedWidget;
    QStackedWidget * cardStackedWidget;
    bool connected = true;

public slots:
    void goToPerso();
    void goToCard();
    void goToSearch();
    void goToSelection();
    void goToEntrees();
    void goToPlats();
    void goToDesserts();
    void goToMenus();
    void goToBoissons();

};

#endif // MAINWINDOW_H
