/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *persoButton;
    QToolButton *menuButton;
    QToolButton *searchButton;
    QToolButton *selectionButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *waiterButton;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *franceButton;
    QToolButton *toolButton_2;
    QToolButton *chinaButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 675);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 200, 1181, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        persoButton = new QToolButton(horizontalLayoutWidget);
        persoButton->setObjectName(QString::fromUtf8("persoButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Manjari"));
        font1.setPointSize(15);
        persoButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("smileymaison.png"), QSize(), QIcon::Normal, QIcon::Off);
        persoButton->setIcon(icon);
        persoButton->setIconSize(QSize(150, 130));
        persoButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(persoButton);

        menuButton = new QToolButton(horizontalLayoutWidget);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuButton->setIcon(icon1);
        menuButton->setIconSize(QSize(150, 130));
        menuButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(menuButton);

        searchButton = new QToolButton(horizontalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("loupe.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon2);
        searchButton->setIconSize(QSize(150, 130));
        searchButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(searchButton);

        selectionButton = new QToolButton(horizontalLayoutWidget);
        selectionButton->setObjectName(QString::fromUtf8("selectionButton"));
        selectionButton->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("toque.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectionButton->setIcon(icon3);
        selectionButton->setIconSize(QSize(150, 130));
        selectionButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(selectionButton);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 430, 1181, 191));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        waiterButton = new QToolButton(horizontalLayoutWidget_2);
        waiterButton->setObjectName(QString::fromUtf8("waiterButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Manjari"));
        waiterButton->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("bell.png"), QSize(), QIcon::Normal, QIcon::Off);
        waiterButton->setIcon(icon4);
        waiterButton->setIconSize(QSize(150, 130));
        waiterButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(waiterButton);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 70, 1191, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Manjari"));
        font3.setPointSize(30);
        font3.setItalic(false);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 10, 301, 61));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        franceButton = new QToolButton(horizontalLayoutWidget_3);
        franceButton->setObjectName(QString::fromUtf8("franceButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("france.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        franceButton->setIcon(icon5);
        franceButton->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(franceButton);

        toolButton_2 = new QToolButton(horizontalLayoutWidget_3);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("angleterre.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon6);
        toolButton_2->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(toolButton_2);

        chinaButton = new QToolButton(horizontalLayoutWidget_3);
        chinaButton->setObjectName(QString::fromUtf8("chinaButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("chine.png"), QSize(), QIcon::Normal, QIcon::Off);
        chinaButton->setIcon(icon7);
        chinaButton->setIconSize(QSize(45, 30));

        horizontalLayout_6->addWidget(chinaButton);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        persoButton->setText(QApplication::translate("MainWindow", "Espace Perso", nullptr));
        menuButton->setText(QApplication::translate("MainWindow", "La Carte", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "Recherche", nullptr));
        selectionButton->setText(QApplication::translate("MainWindow", "S\303\251lection du chef", nullptr));
        waiterButton->setText(QApplication::translate("MainWindow", "Appeler Serveur", nullptr));
        label->setText(QApplication::translate("MainWindow", "Bienvenue chez Fanguan", nullptr));
        franceButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", nullptr));
        chinaButton->setText(QApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
