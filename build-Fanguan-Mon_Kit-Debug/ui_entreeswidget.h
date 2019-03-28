/********************************************************************************
** Form generated from reading UI file 'entreeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTREESWIDGET_H
#define UI_ENTREESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entrees
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton_10;
    QToolButton *toolButton_18;
    QToolButton *toolButton_17;
    QToolButton *toolButton_14;
    QToolButton *toolButton_12;
    QToolButton *toolButton_16;
    QToolButton *toolButton_13;
    QToolButton *toolButton_15;
    QToolButton *toolButton_11;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QLabel *label;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QFrame *line;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Entrees)
    {
        if (Entrees->objectName().isEmpty())
            Entrees->setObjectName(QString::fromUtf8("Entrees"));
        Entrees->resize(1200, 675);
        gridLayoutWidget = new QWidget(Entrees);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(390, 130, 721, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_10 = new QToolButton(gridLayoutWidget);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Manjari"));
        font.setPointSize(10);
        toolButton_10->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("nourriture.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon);
        toolButton_10->setIconSize(QSize(140, 90));
        toolButton_10->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_10, 0, 0, 1, 1);

        toolButton_18 = new QToolButton(gridLayoutWidget);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        sizePolicy.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy);
        toolButton_18->setFont(font);
        toolButton_18->setIcon(icon);
        toolButton_18->setIconSize(QSize(140, 90));
        toolButton_18->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_18, 2, 4, 1, 1);

        toolButton_17 = new QToolButton(gridLayoutWidget);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        sizePolicy.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy);
        toolButton_17->setFont(font);
        toolButton_17->setIcon(icon);
        toolButton_17->setIconSize(QSize(140, 90));
        toolButton_17->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_17, 2, 1, 1, 1);

        toolButton_14 = new QToolButton(gridLayoutWidget);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        sizePolicy.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy);
        toolButton_14->setFont(font);
        toolButton_14->setIcon(icon);
        toolButton_14->setIconSize(QSize(140, 90));
        toolButton_14->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_14, 1, 1, 1, 1);

        toolButton_12 = new QToolButton(gridLayoutWidget);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        sizePolicy.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy);
        toolButton_12->setFont(font);
        toolButton_12->setIcon(icon);
        toolButton_12->setIconSize(QSize(140, 90));
        toolButton_12->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_12, 0, 4, 1, 1);

        toolButton_16 = new QToolButton(gridLayoutWidget);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        sizePolicy.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy);
        toolButton_16->setFont(font);
        toolButton_16->setIcon(icon);
        toolButton_16->setIconSize(QSize(140, 90));
        toolButton_16->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_16, 2, 0, 1, 1);

        toolButton_13 = new QToolButton(gridLayoutWidget);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        sizePolicy.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy);
        toolButton_13->setFont(font);
        toolButton_13->setIcon(icon);
        toolButton_13->setIconSize(QSize(140, 90));
        toolButton_13->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_13, 1, 0, 1, 1);

        toolButton_15 = new QToolButton(gridLayoutWidget);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        sizePolicy.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy);
        toolButton_15->setFont(font);
        toolButton_15->setIcon(icon);
        toolButton_15->setIconSize(QSize(140, 90));
        toolButton_15->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_15, 1, 4, 1, 1);

        toolButton_11 = new QToolButton(gridLayoutWidget);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        sizePolicy.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy);
        toolButton_11->setFont(font);
        toolButton_11->setIcon(icon);
        toolButton_11->setIconSize(QSize(140, 90));
        toolButton_11->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton_11, 0, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(Entrees);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1201, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Manjari"));
        font1.setPointSize(20);
        pushButton_4->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(Entrees);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 80, 301, 481));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(verticalLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Manjari"));
        font2.setPointSize(15);
        pushButton_8->setFont(font2);

        verticalLayout_3->addWidget(pushButton_8);

        pushButton_11 = new QPushButton(verticalLayoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setFont(font2);

        verticalLayout_3->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setFont(font2);

        verticalLayout_3->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(verticalLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font2);

        verticalLayout_3->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(verticalLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font2);

        verticalLayout_3->addWidget(pushButton_7);

        label = new QLabel(Entrees);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 86, 891, 41));
        label->setAlignment(Qt::AlignCenter);
        toolButton_2 = new QToolButton(Entrees);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(320, 250, 61, 151));
        toolButton_2->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("fleche2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(200, 200));
        toolButton = new QToolButton(Entrees);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(1120, 250, 61, 151));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("fleche.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(200, 200));
        line = new QFrame(Entrees);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(289, 80, 31, 481));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(Entrees);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 560, 1191, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy3);
        pushButton_5->setFont(font1);
        pushButton_5->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy4);
        pushButton_6->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_6);


        retranslateUi(Entrees);

        QMetaObject::connectSlotsByName(Entrees);
    } // setupUi

    void retranslateUi(QWidget *Entrees)
    {
        Entrees->setWindowTitle(QApplication::translate("Entrees", "Form", nullptr));
        toolButton_10->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_18->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_17->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_14->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_12->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_16->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_13->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_15->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        toolButton_11->setText(QApplication::translate("Entrees", "Nems Hong Kong  5.50\342\202\254", nullptr));
        pushButton_4->setText(QApplication::translate("Entrees", "Espace Perso", nullptr));
        pushButton_3->setText(QApplication::translate("Entrees", "La Carte", nullptr));
        pushButton_2->setText(QApplication::translate("Entrees", "Recherche", nullptr));
        pushButton->setText(QApplication::translate("Entrees", "S\303\251lection du chef", nullptr));
        pushButton_8->setText(QApplication::translate("Entrees", "Entr\303\251es", nullptr));
        pushButton_11->setText(QApplication::translate("Entrees", "Plats", nullptr));
        pushButton_10->setText(QApplication::translate("Entrees", "Desserts", nullptr));
        pushButton_9->setText(QApplication::translate("Entrees", "Menus", nullptr));
        pushButton_7->setText(QApplication::translate("Entrees", "Boissons", nullptr));
        label->setText(QApplication::translate("Entrees", "Entr\303\251es", nullptr));
        toolButton_2->setText(QApplication::translate("Entrees", "...", nullptr));
        toolButton->setText(QApplication::translate("Entrees", "...", nullptr));
        pushButton_5->setText(QApplication::translate("Entrees", "Appeler Serveur", nullptr));
        pushButton_6->setText(QApplication::translate("Entrees", "Votre Commande", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Entrees: public Ui_Entrees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTREESWIDGET_H
