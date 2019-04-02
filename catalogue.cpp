#include "catalogue.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QToolButton>
#include <QLabel>
#include <QIcon>
#include <QPixmap>
#include <QtGui>

Catalogue::Catalogue(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();

    QHBoxLayout * topLayout = new QHBoxLayout();
    topLayout->setSpacing(0);

    class CatalogueItem : public QToolButton
    {
    public:
        CatalogueItem(QString label, QIcon icon, int id) : QToolButton(){
            setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            setIcon(icon);
            setIconSize(QSize(150, 120));
            setText(label);
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setStyleSheet("color : black; background-color : white;");
        }
        virtual ~CatalogueItem() {}
    };

    QToolButton * plat1Button = new CatalogueItem("nems: 7 euros",QIcon(":/toque.png"),1);
    QToolButton * plat2Button = new CatalogueItem("riz: 5 euros",QIcon(":/toque.png"),2);
    QToolButton * plat3Button = new CatalogueItem("poulet: 11 euros",QIcon(":/toque.png"),3);
    QToolButton * plat4Button = new CatalogueItem("nouilles: 11 euros",QIcon(":/toque.png"),4);
    QToolButton * plat5Button = new CatalogueItem("nouilles pou: 12 euros",QIcon(":/toque.png"),5);
    QToolButton * plat6Button = new CatalogueItem("nouilles boeuf: 12 e",QIcon(":/toque.png"),6);
    QToolButton * plat7Button = new CatalogueItem("nouilles cre: 13 euros",QIcon(":/toque.png"),7);
    QToolButton * plat8Button = new CatalogueItem("nouilles ette: 13 euros",QIcon(":/toque.png"),8);
    QToolButton * plat9Button = new CatalogueItem("nouilles atte: 13 euros",QIcon(":/toque.png"),9);

    QHBoxLayout * button1Layout = new QHBoxLayout();
    button1Layout->addWidget(plat1Button);
    button1Layout->addWidget(plat2Button);
    button1Layout->addWidget(plat3Button);
    QHBoxLayout * button2Layout = new QHBoxLayout();
    button2Layout->addWidget(plat4Button);
    button2Layout->addWidget(plat5Button);
    button2Layout->addWidget(plat6Button);
    QHBoxLayout * button3Layout = new QHBoxLayout();
    button3Layout->addWidget(plat7Button);
    button3Layout->addWidget(plat8Button);
    button3Layout->addWidget(plat9Button);

    mainLayout->addLayout(topLayout);
    mainLayout->addStretch(5);
    mainLayout->addLayout(button1Layout);
    mainLayout->addStretch(5);
    mainLayout->addLayout(button2Layout);
    mainLayout->addStretch(5);
    mainLayout->addLayout(button3Layout);
    mainLayout->addStretch(5);
    setLayout(mainLayout);
}

/*setMinimumSize(QSize(200, 200));
            setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum));
            setFont(QFont("Arial", 13));*/
