/********************************************************************************
** Form generated from reading UI file 'minidessertswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIDESSERTSWIDGET_H
#define UI_MINIDESSERTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniDesserts
{
public:
    QLabel *label;

    void setupUi(QWidget *MiniDesserts)
    {
        if (MiniDesserts->objectName().isEmpty())
            MiniDesserts->setObjectName(QString::fromUtf8("MiniDesserts"));
        MiniDesserts->resize(1196, 450);
        label = new QLabel(MiniDesserts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 451, 101));

        retranslateUi(MiniDesserts);

        QMetaObject::connectSlotsByName(MiniDesserts);
    } // setupUi

    void retranslateUi(QWidget *MiniDesserts)
    {
        MiniDesserts->setWindowTitle(QApplication::translate("MiniDesserts", "Form", nullptr));
        label->setText(QApplication::translate("MiniDesserts", "Desserts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniDesserts: public Ui_MiniDesserts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIDESSERTSWIDGET_H
