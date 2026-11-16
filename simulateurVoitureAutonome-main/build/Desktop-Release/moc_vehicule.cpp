/****************************************************************************
** Meta object code from reading C++ file 'vehicule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../vehicule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vehicule_t {
    QByteArrayData data[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vehicule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vehicule_t qt_meta_stringdata_Vehicule = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Vehicule"
QT_MOC_LITERAL(1, 9, 15), // "setIsCollisions"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "newIsCollisions"
QT_MOC_LITERAL(4, 42, 5), // "start"
QT_MOC_LITERAL(5, 48, 4), // "stop"
QT_MOC_LITERAL(6, 53, 4), // "move"
QT_MOC_LITERAL(7, 58, 7), // "sendTcp"
QT_MOC_LITERAL(8, 66, 6), // "getTcp"
QT_MOC_LITERAL(9, 73, 7), // "message"
QT_MOC_LITERAL(10, 81, 9), // "connected"
QT_MOC_LITERAL(11, 91, 12) // "disConnected"

    },
    "Vehicule\0setIsCollisions\0\0newIsCollisions\0"
    "start\0stop\0move\0sendTcp\0getTcp\0message\0"
    "connected\0disConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vehicule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Vehicule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vehicule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setIsCollisions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->move(); break;
        case 4: _t->sendTcp(); break;
        case 5: _t->getTcp((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->connected(); break;
        case 7: _t->disConnected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Vehicule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Vehicule.data,
    qt_meta_data_Vehicule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vehicule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vehicule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vehicule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Vehicule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
