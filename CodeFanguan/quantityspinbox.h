#ifndef QUANTITYSPINBOX_H
#define QUANTITYSPINBOX_H

#include <QWidget>
#include "membre.h"
#include "model.h"
#include <QSpinBox>
#include "plat.h"
#include <QLineEdit>

class QuantitySpinBox : public QWidget
{
    Q_OBJECT
private:
    Membre * membre = nullptr;
    Model * model = nullptr;
    QSpinBox * quantity =nullptr;
    Plat * plat = nullptr;
    QLineEdit *infosLineEdit = nullptr;

public:
    QuantitySpinBox(Model * m, Membre * memb, Plat * p, QLineEdit* infosLineEdit = nullptr);
    virtual ~QuantitySpinBox() {}

signals:

public slots:
    void validateQuantity();
};

#endif // QUANTITYSPINBOX_H
