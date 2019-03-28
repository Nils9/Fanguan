/********************************************************************************
** Form generated from reading UI file 'persowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSOWIDGET_H
#define UI_PERSOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Perso
{
public:
    QLabel *label;

    void setupUi(QWidget *Perso)
    {
        if (Perso->objectName().isEmpty())
            Perso->setObjectName(QString::fromUtf8("Perso"));
        Perso->resize(1196, 450);
        label = new QLabel(Perso);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 200, 67, 17));

        retranslateUi(Perso);

        QMetaObject::connectSlotsByName(Perso);
    } // setupUi

    void retranslateUi(QWidget *Perso)
    {
        Perso->setWindowTitle(QApplication::translate("Perso", "Form", nullptr));
        label->setText(QApplication::translate("Perso", "Perso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Perso: public Ui_Perso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSOWIDGET_H
