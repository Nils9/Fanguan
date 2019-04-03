/********************************************************************************
** Form generated from reading UI file 'cardtemplatewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDTEMPLATEWIDGET_H
#define UI_CARDTEMPLATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardTemplate
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *entreesButton;
    QPushButton *platsButton;
    QPushButton *dessertsButton;
    QPushButton *menusButton;
    QPushButton *boissonsButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *rightLayout;

    void setupUi(QWidget *CardTemplate)
    {
        if (CardTemplate->objectName().isEmpty())
            CardTemplate->setObjectName(QString::fromUtf8("CardTemplate"));
        CardTemplate->resize(1196, 450);
        verticalLayoutWidget_2 = new QWidget(CardTemplate);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 301, 451));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        entreesButton = new QPushButton(verticalLayoutWidget_2);
        entreesButton->setObjectName(QString::fromUtf8("entreesButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(entreesButton->sizePolicy().hasHeightForWidth());
        entreesButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Manjari"));
        font.setPointSize(15);
        entreesButton->setFont(font);

        verticalLayout_3->addWidget(entreesButton);

        platsButton = new QPushButton(verticalLayoutWidget_2);
        platsButton->setObjectName(QString::fromUtf8("platsButton"));
        platsButton->setFont(font);

        verticalLayout_3->addWidget(platsButton);

        dessertsButton = new QPushButton(verticalLayoutWidget_2);
        dessertsButton->setObjectName(QString::fromUtf8("dessertsButton"));
        dessertsButton->setFont(font);

        verticalLayout_3->addWidget(dessertsButton);

        menusButton = new QPushButton(verticalLayoutWidget_2);
        menusButton->setObjectName(QString::fromUtf8("menusButton"));
        menusButton->setFont(font);

        verticalLayout_3->addWidget(menusButton);

        boissonsButton = new QPushButton(verticalLayoutWidget_2);
        boissonsButton->setObjectName(QString::fromUtf8("boissonsButton"));
        boissonsButton->setFont(font);

        verticalLayout_3->addWidget(boissonsButton);

        verticalLayoutWidget = new QWidget(CardTemplate);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 0, 901, 451));
        rightLayout = new QVBoxLayout(verticalLayoutWidget);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(CardTemplate);

        QMetaObject::connectSlotsByName(CardTemplate);
    } // setupUi

    void retranslateUi(QWidget *CardTemplate)
    {
        CardTemplate->setWindowTitle(QApplication::translate("CardTemplate", "Form", nullptr));
        entreesButton->setText(QApplication::translate("CardTemplate", "Entr\303\251es", nullptr));
        platsButton->setText(QApplication::translate("CardTemplate", "Plats", nullptr));
        dessertsButton->setText(QApplication::translate("CardTemplate", "Desserts", nullptr));
        menusButton->setText(QApplication::translate("CardTemplate", "Menus", nullptr));
        boissonsButton->setText(QApplication::translate("CardTemplate", "Boissons", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardTemplate: public Ui_CardTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDTEMPLATEWIDGET_H
