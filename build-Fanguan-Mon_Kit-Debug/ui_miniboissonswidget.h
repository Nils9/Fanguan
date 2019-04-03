/********************************************************************************
** Form generated from reading UI file 'miniboissonswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIBOISSONSWIDGET_H
#define UI_MINIBOISSONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniBoissons
{
public:
    QLabel *label;

    void setupUi(QWidget *MiniBoissons)
    {
        if (MiniBoissons->objectName().isEmpty())
            MiniBoissons->setObjectName(QString::fromUtf8("MiniBoissons"));
        MiniBoissons->resize(1196, 450);
        label = new QLabel(MiniBoissons);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 451, 101));

        retranslateUi(MiniBoissons);

        QMetaObject::connectSlotsByName(MiniBoissons);
    } // setupUi

    void retranslateUi(QWidget *MiniBoissons)
    {
        MiniBoissons->setWindowTitle(QApplication::translate("MiniBoissons", "Form", nullptr));
        label->setText(QApplication::translate("MiniBoissons", "Boissons", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniBoissons: public Ui_MiniBoissons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIBOISSONSWIDGET_H
