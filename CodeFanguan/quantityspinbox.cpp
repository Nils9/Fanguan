#include "quantityspinbox.h"
#include <QBoxLayout>
#include "commandemodel.h"
#include <iostream>

QuantitySpinBox::QuantitySpinBox(Model * m, Membre * memb, Plat * p) : QWidget()
{
       model = m;
       membre = memb;
       plat = p;
       QHBoxLayout * layout = new QHBoxLayout(this);
       if (model->getConnected()) {
           QLabel * name = new QLabel(membre->getName());
           layout->addWidget(name);
       }
       quantity =  new QSpinBox();
       quantity->setValue(0);
       quantity->setRange(0, 20);
       quantity->setSuffix(tr(" unite(s)"));
       layout->addWidget(quantity);

}

void QuantitySpinBox::validateQuantity() {
    int nbUnite = quantity->value();
    if (nbUnite > 0) {
        CommandeModel * cm = new CommandeModel(plat, nbUnite);
        if (model->getConnected()) {
            membre->addCommande(cm);
            std::cout << membre->getName().toStdString() << "-" <<plat->getLabel().toStdString()<< "-" << std::to_string(quantity->value()) << std::endl;
        } else {
            model->addCommande(cm);
            std::cout <<"Not connected-" <<plat->getLabel().toStdString()<< "-" << std::to_string(quantity->value()) << std::endl;
        }
    }
}