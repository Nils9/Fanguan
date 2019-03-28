/********************************************************************************
** Form generated from reading UI file 'templatewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEWIDGET_H
#define UI_TEMPLATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Template
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *persoButton;
    QPushButton *cardButton;
    QPushButton *searchButton;
    QPushButton *selectionButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *serveurButton;
    QPushButton *commandButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *centralLayout;

    void setupUi(QWidget *Template)
    {
        if (Template->objectName().isEmpty())
            Template->setObjectName(QString::fromUtf8("Template"));
        Template->resize(1200, 675);
        horizontalLayoutWidget = new QWidget(Template);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1201, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        persoButton = new QPushButton(horizontalLayoutWidget);
        persoButton->setObjectName(QString::fromUtf8("persoButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(persoButton->sizePolicy().hasHeightForWidth());
        persoButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Manjari"));
        font.setPointSize(20);
        persoButton->setFont(font);

        horizontalLayout_2->addWidget(persoButton);

        cardButton = new QPushButton(horizontalLayoutWidget);
        cardButton->setObjectName(QString::fromUtf8("cardButton"));
        cardButton->setEnabled(true);
        sizePolicy.setHeightForWidth(cardButton->sizePolicy().hasHeightForWidth());
        cardButton->setSizePolicy(sizePolicy);
        cardButton->setFont(font);

        horizontalLayout_2->addWidget(cardButton);

        searchButton = new QPushButton(horizontalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        searchButton->setFont(font);

        horizontalLayout_2->addWidget(searchButton);

        selectionButton = new QPushButton(horizontalLayoutWidget);
        selectionButton->setObjectName(QString::fromUtf8("selectionButton"));
        sizePolicy.setHeightForWidth(selectionButton->sizePolicy().hasHeightForWidth());
        selectionButton->setSizePolicy(sizePolicy);
        selectionButton->setFont(font);

        horizontalLayout_2->addWidget(selectionButton);

        horizontalLayoutWidget_2 = new QWidget(Template);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 590, 1201, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        serveurButton = new QPushButton(horizontalLayoutWidget_2);
        serveurButton->setObjectName(QString::fromUtf8("serveurButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serveurButton->sizePolicy().hasHeightForWidth());
        serveurButton->setSizePolicy(sizePolicy1);
        serveurButton->setFont(font);
        serveurButton->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_3->addWidget(serveurButton);

        commandButton = new QPushButton(horizontalLayoutWidget_2);
        commandButton->setObjectName(QString::fromUtf8("commandButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(commandButton->sizePolicy().hasHeightForWidth());
        commandButton->setSizePolicy(sizePolicy2);
        commandButton->setFont(font);

        horizontalLayout_3->addWidget(commandButton);

        verticalLayoutWidget = new QWidget(Template);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, 80, 1211, 511));
        centralLayout = new QVBoxLayout(verticalLayoutWidget);
        centralLayout->setObjectName(QString::fromUtf8("centralLayout"));
        centralLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Template);

        QMetaObject::connectSlotsByName(Template);
    } // setupUi

    void retranslateUi(QWidget *Template)
    {
        Template->setWindowTitle(QApplication::translate("Template", "Form", nullptr));
        persoButton->setText(QApplication::translate("Template", "Espace Perso", nullptr));
        cardButton->setText(QApplication::translate("Template", "La Carte", nullptr));
        searchButton->setText(QApplication::translate("Template", "Recherche", nullptr));
        selectionButton->setText(QApplication::translate("Template", "S\303\251lection du chef", nullptr));
        serveurButton->setText(QApplication::translate("Template", "Appeler Serveur", nullptr));
        commandButton->setText(QApplication::translate("Template", "Votre Commande", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Template: public Ui_Template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEWIDGET_H
