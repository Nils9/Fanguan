#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>
namespace Ui {
class WelcomePage;
}


class WelcomePage : public QWidget
{
public:
    Ui::WelcomePage *ui;
    WelcomePage(QWidget *parent = nullptr);
    ~WelcomePage();
};

#endif // WELCOMEPAGE_H
