/****************************************************************************
** Meta object code from reading C++ file 'tablesales.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SQL_Res/tablesales.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablesales.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tablesales_t {
    const uint offsetsAndSize[22];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Tablesales_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Tablesales_t qt_meta_stringdata_Tablesales = {
    {
QT_MOC_LITERAL(0, 10), // "Tablesales"
QT_MOC_LITERAL(11, 28), // "on_pushButton_insert_clicked"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(70, 22), // "on_tableView_activated"
QT_MOC_LITERAL(93, 11), // "QModelIndex"
QT_MOC_LITERAL(105, 5), // "index"
QT_MOC_LITERAL(111, 22), // "on_Tablesales_finished"
QT_MOC_LITERAL(134, 6), // "result"
QT_MOC_LITERAL(141, 26), // "on_pushButtonHesap_clicked"
QT_MOC_LITERAL(168, 22) // "on_Tablesales_rejected"

    },
    "Tablesales\0on_pushButton_insert_clicked\0"
    "\0on_pushButton_delete_clicked\0"
    "on_tableView_activated\0QModelIndex\0"
    "index\0on_Tablesales_finished\0result\0"
    "on_pushButtonHesap_clicked\0"
    "on_Tablesales_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tablesales[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       7,    1,   55,    2, 0x08,    5 /* Private */,
       9,    0,   58,    2, 0x08,    7 /* Private */,
      10,    0,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tablesales::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tablesales *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_insert_clicked(); break;
        case 1: _t->on_pushButton_delete_clicked(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->on_Tablesales_finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_pushButtonHesap_clicked(); break;
        case 5: _t->on_Tablesales_rejected(); break;
        default: ;
        }
    }
}

const QMetaObject Tablesales::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Tablesales.offsetsAndSize,
    qt_meta_data_Tablesales,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Tablesales_t
, QtPrivate::TypeAndForceComplete<Tablesales, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Tablesales::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tablesales::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tablesales.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Tablesales::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
