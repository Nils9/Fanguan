#include "quantityspinbox.h"
#include <QBoxLayout>
#include "commandemodel.h"

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
       quantity->setValue(1);
       quantity->setRange(0, 20);
       quantity->setSuffix(tr(" unite(s)"));
       layout->addWidget(quantity);

}

void QuantitySpinBox::validateQuantity() {
    CommandeModel * cm = new CommandeModel(plat, quantity->value());
    if (model->getConnected()) {
        membre->addCommande(cm);
    } else {
        model->addCommande(cm);
    }
}
