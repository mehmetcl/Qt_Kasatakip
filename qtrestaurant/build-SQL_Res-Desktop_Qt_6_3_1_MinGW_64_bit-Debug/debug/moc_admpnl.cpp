/****************************************************************************
** Meta object code from reading C++ file 'admpnl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SQL_Res/admpnl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admpnl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admpnl_t {
    const uint offsetsAndSize[22];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Admpnl_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Admpnl_t qt_meta_stringdata_Admpnl = {
    {
QT_MOC_LITERAL(0, 6), // "Admpnl"
QT_MOC_LITERAL(7, 29), // "on_pushButton_stocktr_clicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 28), // "on_pushButton_select_clicked"
QT_MOC_LITERAL(67, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(94, 28), // "on_pushButton_update_clicked"
QT_MOC_LITERAL(123, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(152, 43), // "on_comboBox_table_select_curr..."
QT_MOC_LITERAL(196, 32), // "on_tableView_customers_activated"
QT_MOC_LITERAL(229, 11), // "QModelIndex"
QT_MOC_LITERAL(241, 5) // "index"

    },
    "Admpnl\0on_pushButton_stocktr_clicked\0"
    "\0on_pushButton_select_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_update_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_comboBox_table_select_currentTextChanged\0"
    "on_tableView_customers_activated\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admpnl[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    1,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Admpnl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Admpnl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_stocktr_clicked(); break;
        case 1: _t->on_pushButton_select_clicked(); break;
        case 2: _t->on_pushButton_save_clicked(); break;
        case 3: _t->on_pushButton_update_clicked(); break;
        case 4: _t->on_pushButton_delete_clicked(); break;
        case 5: _t->on_comboBox_table_select_currentTextChanged(); break;
        case 6: _t->on_tableView_customers_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Admpnl::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Admpnl.offsetsAndSize,
    qt_meta_data_Admpnl,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Admpnl_t
, QtPrivate::TypeAndForceComplete<Admpnl, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Admpnl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admpnl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admpnl.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Admpnl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
