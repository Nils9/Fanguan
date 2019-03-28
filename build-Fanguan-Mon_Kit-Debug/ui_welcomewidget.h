/********************************************************************************
** Form generated from reading UI file 'welcomewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *franceButton;
    QToolButton *toolButton_2;
    QToolButton *chinaButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *persoButton;
    QToolButton *cardButton;
    QToolButton *searchButton;
    QToolButton *selectionButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *waiterButton;
    QLabel *label;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1200, 675);
        horizontalLayoutWidget_3 = new QWidget(Form);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 301, 61));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        franceButton = new QToolButton(horizontalLayoutWidget_3);
        franceButton->setObjectName(QString::fromUtf8("franceButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("france.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        franceButton->setIcon(icon);
        franceButton->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(franceButton);

        toolButton_2 = new QToolButton(horizontalLayoutWidget_3);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("angleterre.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(toolButton_2);

        chinaButton = new QToolButton(horizontalLayoutWidget_3);
        chinaButton->setObjectName(QString::fromUtf8("chinaButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("chine.png"), QSize(), QIcon::Normal, QIcon::Off);
        chinaButton->setIcon(icon2);
        chinaButton->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(chinaButton);

        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 190, 1181, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        persoButton = new QToolButton(horizontalLayoutWidget);
        persoButton->setObjectName(QString::fromUtf8("persoButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Manjari"));
        font.setPointSize(15);
        persoButton->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("smileymaison.png"), QSize(), QIcon::Normal, QIcon::Off);
        persoButton->setIcon(icon3);
        persoButton->setIconSize(QSize(150, 130));
        persoButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(persoButton);

        cardButton = new QToolButton(horizontalLayoutWidget);
        cardButton->setObjectName(QString::fromUtf8("cardButton"));
        cardButton->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        cardButton->setIcon(icon4);
        cardButton->setIconSize(QSize(150, 130));
        cardButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(cardButton);

        searchButton = new QToolButton(horizontalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("loupe.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon5);
        searchButton->setIconSize(QSize(150, 130));
        searchButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(searchButton);

        selectionButton = new QToolButton(horizontalLayoutWidget);
        selectionButton->setObjectName(QString::fromUtf8("selectionButton"));
        selectionButton->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("toque.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectionButton->setIcon(icon6);
        selectionButton->setIconSize(QSize(150, 130));
        selectionButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(selectionButton);

        horizontalLayoutWidget_2 = new QWidget(Form);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 420, 1181, 191));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        waiterButton = new QToolButton(horizontalLayoutWidget_2);
        waiterButton->setObjectName(QString::fromUtf8("waiterButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Manjari"));
        waiterButton->setFont(font1);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("bell.png"), QSize(), QIcon::Normal, QIcon::Off);
        waiterButton->setIcon(icon7);
        waiterButton->setIconSize(QSize(150, 130));
        waiterButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(waiterButton);

        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 60, 1191, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Manjari"));
        font2.setPointSize(30);
        font2.setItalic(false);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        franceButton->setText(QApplication::translate("Form", "...", nullptr));
        toolButton_2->setText(QApplication::translate("Form", "...", nullptr));
        chinaButton->setText(QApplication::translate("Form", "...", nullptr));
        persoButton->setText(QApplication::translate("Form", "Espace Perso", nullptr));
        cardButton->setText(QApplication::translate("Form", "La Carte", nullptr));
        searchButton->setText(QApplication::translate("Form", "Recherche", nullptr));
        selectionButton->setText(QApplication::translate("Form", "S\303\251lection du chef", nullptr));
        waiterButton->setText(QApplication::translate("Form", "Appeler Serveur", nullptr));
        label->setText(QApplication::translate("Form", "Bienvenue chez Fanguan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
