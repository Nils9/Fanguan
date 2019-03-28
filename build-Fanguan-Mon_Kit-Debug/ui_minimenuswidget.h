/********************************************************************************
** Form generated from reading UI file 'minimenuswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIMENUSWIDGET_H
#define UI_MINIMENUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniMenus
{
public:
    QLabel *label;

    void setupUi(QWidget *MiniMenus)
    {
        if (MiniMenus->objectName().isEmpty())
            MiniMenus->setObjectName(QString::fromUtf8("MiniMenus"));
        MiniMenus->resize(1196, 450);
        label = new QLabel(MiniMenus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 451, 101));

        retranslateUi(MiniMenus);

        QMetaObject::connectSlotsByName(MiniMenus);
    } // setupUi

    void retranslateUi(QWidget *MiniMenus)
    {
        MiniMenus->setWindowTitle(QApplication::translate("MiniMenus", "Form", nullptr));
        label->setText(QApplication::translate("MiniMenus", "Menus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniMenus: public Ui_MiniMenus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIMENUSWIDGET_H
