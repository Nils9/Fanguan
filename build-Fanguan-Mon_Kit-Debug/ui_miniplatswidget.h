/********************************************************************************
** Form generated from reading UI file 'miniplatswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIPLATSWIDGET_H
#define UI_MINIPLATSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniPlats
{
public:
    QLabel *label;

    void setupUi(QWidget *MiniPlats)
    {
        if (MiniPlats->objectName().isEmpty())
            MiniPlats->setObjectName(QString::fromUtf8("MiniPlats"));
        MiniPlats->resize(1196, 450);
        label = new QLabel(MiniPlats);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 451, 101));

        retranslateUi(MiniPlats);

        QMetaObject::connectSlotsByName(MiniPlats);
    } // setupUi

    void retranslateUi(QWidget *MiniPlats)
    {
        MiniPlats->setWindowTitle(QApplication::translate("MiniPlats", "Form", nullptr));
        label->setText(QApplication::translate("MiniPlats", "Plats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniPlats: public Ui_MiniPlats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIPLATSWIDGET_H
