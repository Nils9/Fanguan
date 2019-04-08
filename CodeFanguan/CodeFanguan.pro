#-------------------------------------------------
#
# Project created by QtCreator 2019-03-29T15:42:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CodeFanguan
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    template.cpp \
    detail.cpp \
    commande.cpp \
    selection.cpp \
    carte.cpp \
    catalogue.cpp \
    menu.cpp \
    accueil.cpp \
    connexion.cpp \
    espaceabo.cpp \
    inscription.cpp \
    gerercompte.cpp \
    catalogueitem.cpp \
    famille.cpp \
    recherche.cpp \
    menumodel.cpp \
    plat.cpp \
    membre.cpp \
    model.cpp

HEADERS += \
        mainwindow.h \
    template.h \
    detail.h \
    commande.h \
    selection.h \
    carte.h \
    catalogue.h \
    menu.h \
    accueil.h \
    connexion.h \
    espaceabo.h \
    inscription.h \
    gerercompte.h \
    model.h \
    catalogueitem.h \
    famille.h \
    recherche.h \
    menumodel.h \
    plat.h \
    membre.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
