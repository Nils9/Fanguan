/****************************************************************************
** Meta object code from reading C++ file 'template.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CodeFanguan/template.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'template.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Template_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Template_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Template_t qt_meta_stringdata_Template = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Template"
QT_MOC_LITERAL(1, 9, 12), // "displayCarte"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "displayEspaceAbo"
QT_MOC_LITERAL(4, 40, 16), // "displayRecherche"
QT_MOC_LITERAL(5, 57, 15), // "displayCommande"
QT_MOC_LITERAL(6, 73, 12), // "appelServeur"
QT_MOC_LITERAL(7, 86, 18), // "displayGererCompte"
QT_MOC_LITERAL(8, 105, 14) // "retourCommande"

    },
    "Template\0displayCarte\0\0displayEspaceAbo\0"
    "displayRecherche\0displayCommande\0"
    "appelServeur\0displayGererCompte\0"
    "retourCommande"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Template[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Template::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Template *_t = static_cast<Template *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayCarte(); break;
        case 1: _t->displayEspaceAbo(); break;
        case 2: _t->displayRecherche(); break;
        case 3: _t->displayCommande(); break;
        case 4: _t->appelServeur(); break;
        case 5: _t->displayGererCompte(); break;
        case 6: _t->retourCommande(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Template::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Template.data,
      qt_meta_data_Template,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Template::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Template::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Template.stringdata0))
        return static_cast<void*>(const_cast< Template*>(this));
    return QWidget::qt_metacast(_clname);
}

int Template::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
