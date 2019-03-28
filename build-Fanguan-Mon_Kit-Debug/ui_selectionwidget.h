/********************************************************************************
** Form generated from reading UI file 'selectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONWIDGET_H
#define UI_SELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QLabel *label;

    void setupUi(QWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(1196, 450);
        label = new QLabel(Selection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 200, 111, 17));

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QWidget *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Form", nullptr));
        label->setText(QApplication::translate("Selection", "Selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONWIDGET_H
