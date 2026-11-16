/****************************************************************************
** Meta object code from reading C++ file 'circuitwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../circuitwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'circuitwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CircuitWidget_t {
    QByteArrayData data[20];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CircuitWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CircuitWidget_t qt_meta_stringdata_CircuitWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CircuitWidget"
QT_MOC_LITERAL(1, 14, 14), // "newTimeVoiture"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "voiture"
QT_MOC_LITERAL(4, 38, 4), // "time"
QT_MOC_LITERAL(5, 43, 18), // "newBestTimeVoiture"
QT_MOC_LITERAL(6, 62, 9), // "newNbTour"
QT_MOC_LITERAL(7, 72, 3), // "maj"
QT_MOC_LITERAL(8, 76, 11), // "enableLidar"
QT_MOC_LITERAL(9, 88, 5), // "state"
QT_MOC_LITERAL(10, 94, 12), // "loadCircuit1"
QT_MOC_LITERAL(11, 107, 12), // "loadCircuit2"
QT_MOC_LITERAL(12, 120, 12), // "loadCircuit3"
QT_MOC_LITERAL(13, 133, 12), // "loadCircuit4"
QT_MOC_LITERAL(14, 146, 8), // "zoomPlus"
QT_MOC_LITERAL(15, 155, 9), // "zoomMoins"
QT_MOC_LITERAL(16, 165, 8), // "moveHaut"
QT_MOC_LITERAL(17, 174, 7), // "moveBas"
QT_MOC_LITERAL(18, 182, 9), // "moveDroit"
QT_MOC_LITERAL(19, 192, 10) // "moveGauche"

    },
    "CircuitWidget\0newTimeVoiture\0\0voiture\0"
    "time\0newBestTimeVoiture\0newNbTour\0maj\0"
    "enableLidar\0state\0loadCircuit1\0"
    "loadCircuit2\0loadCircuit3\0loadCircuit4\0"
    "zoomPlus\0zoomMoins\0moveHaut\0moveBas\0"
    "moveDroit\0moveGauche"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CircuitWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       6,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x0a /* Public */,
      10,    0,  108,    2, 0x0a /* Public */,
      11,    0,  109,    2, 0x0a /* Public */,
      12,    0,  110,    2, 0x0a /* Public */,
      13,    0,  111,    2, 0x0a /* Public */,
      14,    0,  112,    2, 0x0a /* Public */,
      15,    0,  113,    2, 0x0a /* Public */,
      16,    0,  114,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x0a /* Public */,
      18,    0,  116,    2, 0x0a /* Public */,
      19,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CircuitWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CircuitWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newTimeVoiture((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->newBestTimeVoiture((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->newNbTour((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->maj(); break;
        case 4: _t->enableLidar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->loadCircuit1(); break;
        case 6: _t->loadCircuit2(); break;
        case 7: _t->loadCircuit3(); break;
        case 8: _t->loadCircuit4(); break;
        case 9: _t->zoomPlus(); break;
        case 10: _t->zoomMoins(); break;
        case 11: _t->moveHaut(); break;
        case 12: _t->moveBas(); break;
        case 13: _t->moveDroit(); break;
        case 14: _t->moveGauche(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CircuitWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircuitWidget::newTimeVoiture)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CircuitWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircuitWidget::newBestTimeVoiture)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CircuitWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircuitWidget::newNbTour)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CircuitWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CircuitWidget.data,
    qt_meta_data_CircuitWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CircuitWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CircuitWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CircuitWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CircuitWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CircuitWidget::newTimeVoiture(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CircuitWidget::newBestTimeVoiture(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CircuitWidget::newNbTour(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
