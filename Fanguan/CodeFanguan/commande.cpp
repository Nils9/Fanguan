#include "commande.h"
#include "template.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <iostream>
#include <QSpinBox>
#include <QLineEdit>
#include <QLabel>
#include <QFrame>

Commande::Commande(QWidget *parent,  int commandeId) : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout(this);

    QFont font = QFont("Arial", 22);

    //top
    QHBoxLayout * topLayout = new QHBoxLayout();
    QLabel * title = new QLabel(tr("Commande"));
    title->setFont(font);
    title->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QPushButton * backButton = new QPushButton();
    backButton->setIcon(QIcon(":/images/back.png"));
    backButton->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);

    topLayout->addWidget(title);
    topLayout->addWidget(backButton);

    // middle left
    QGridLayout * grid = new QGridLayout();

    class CommandeItem : public QFrame
    {
    public:
        CommandeItem(int commandeId=0, int itemId=0): QFrame() {
            QVBoxLayout * layout = new QVBoxLayout(this);
            QPushButton * itemName = new QPushButton(QString("Carotte %1").arg(itemId));
            itemName->setIcon(QIcon(":/images/cross.png"));
            itemName->setFont(QFont("Arial", 12));
            QHBoxLayout * bottomLayout = new QHBoxLayout();
            float itemPrice =  15;
            int itemQuantity = 2;
            QSpinBox * quantity =  new QSpinBox();
            quantity->setValue(itemQuantity);
            quantity->setRange(1, 20);
            quantity->setSuffix(tr(" unite(s)"));
            QLabel * priceLabel =  new QLabel(QString("%1 euros").arg(itemPrice*itemQuantity));
            priceLabel->setFont(QFont("Arial", 12));
            bottomLayout->addWidget(quantity);
            bottomLayout->addStretch(5);
            bottomLayout->addWidget(priceLabel);
            QLineEdit * infos = new QLineEdit("infos");
            infos->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
            layout->addWidget(itemName);
            layout->addLayout(bottomLayout);
            layout->addWidget(infos);
            setLayout(layout);
            setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
            setLineWidth(2);
            setStyleSheet("background : orange");

        }

        virtual ~CommandeItem() {}
    };

    for (int i = 0; i < 11; i++) {
        grid->addWidget(new CommandeItem(0,i), i/3, i%3);
    }
    grid->setHorizontalSpacing(30);

    QHBoxLayout * bottomLayout = new QHBoxLayout();
    QPushButton * sendButton = new QPushButton("Envoyer en cuisine");
    sendButton->setFont(font);
    float totalPrice = 180;
    QLabel * total = new QLabel(QString("%1 euros").arg(totalPrice));
    total->setFont(font);
    bottomLayout->addWidget(total);
    bottomLayout->addStretch(10);
    bottomLayout->addWidget(sendButton);

    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(grid);
    mainLayout->addLayout(bottomLayout);

    connect(backButton, SIGNAL(clicked()), parent, SLOT(retourCommande()));
}
