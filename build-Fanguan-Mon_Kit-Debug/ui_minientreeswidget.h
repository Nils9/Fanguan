/********************************************************************************
** Form generated from reading UI file 'minientreeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIENTREESWIDGET_H
#define UI_MINIENTREESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniEntrees
{
public:
    QLabel *label;

    void setupUi(QWidget *MiniEntrees)
    {
        if (MiniEntrees->objectName().isEmpty())
            MiniEntrees->setObjectName(QString::fromUtf8("MiniEntrees"));
        MiniEntrees->resize(1196, 450);
        label = new QLabel(MiniEntrees);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 451, 101));

        retranslateUi(MiniEntrees);

        QMetaObject::connectSlotsByName(MiniEntrees);
    } // setupUi

    void retranslateUi(QWidget *MiniEntrees)
    {
        MiniEntrees->setWindowTitle(QApplication::translate("MiniEntrees", "Form", nullptr));
        label->setText(QApplication::translate("MiniEntrees", "Entr\303\251es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniEntrees: public Ui_MiniEntrees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIENTREESWIDGET_H
