/****************************************************************************
** Meta object code from reading C++ file 'chuxungoupiaoxinxi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../train-tickets2/chuxungoupiaoxinxi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chuxungoupiaoxinxi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chuxungoupiaoxinxi_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chuxungoupiaoxinxi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chuxungoupiaoxinxi_t qt_meta_stringdata_chuxungoupiaoxinxi = {
    {
QT_MOC_LITERAL(0, 0, 18), // "chuxungoupiaoxinxi"
QT_MOC_LITERAL(1, 19, 10), // "Mysignal_3"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 53, 12) // "on_t_clicked"

    },
    "chuxungoupiaoxinxi\0Mysignal_3\0\0"
    "on_pushButton_clicked\0on_t_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chuxungoupiaoxinxi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chuxungoupiaoxinxi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chuxungoupiaoxinxi *_t = static_cast<chuxungoupiaoxinxi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mysignal_3(); break;
        case 2: _t->on_t_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (chuxungoupiaoxinxi::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chuxungoupiaoxinxi::Mysignal_3)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject chuxungoupiaoxinxi::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_chuxungoupiaoxinxi.data,
      qt_meta_data_chuxungoupiaoxinxi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *chuxungoupiaoxinxi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chuxungoupiaoxinxi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chuxungoupiaoxinxi.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int chuxungoupiaoxinxi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void chuxungoupiaoxinxi::Mysignal_3()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
