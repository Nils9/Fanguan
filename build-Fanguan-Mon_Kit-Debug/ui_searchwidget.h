/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QLabel *label;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(1196, 450);
        label = new QLabel(Search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 200, 111, 17));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Form", nullptr));
        label->setText(QApplication::translate("Search", "Recherche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
