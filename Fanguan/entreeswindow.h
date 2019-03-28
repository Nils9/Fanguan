#ifndef ENTREESWINDOW_H
#define ENTREESWINDOW_H

#include <QMainWindow>

/*namespace Ui {
class EntreesWindow;
}*/

class EntreesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EntreesWindow(QWidget *parent = nullptr);
    ~EntreesWindow();

private:
    EntreesWindow *ui;
};

#endif // ENTREESWINDOW_H
