/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HeiBaiQi/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GAME_t {
    QByteArrayData data[12];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GAME_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GAME_t qt_meta_stringdata_GAME = {
    {
QT_MOC_LITERAL(0, 0, 4), // "GAME"
QT_MOC_LITERAL(1, 5, 8), // "blacknum"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "newblacknum"
QT_MOC_LITERAL(4, 27, 8), // "whitenum"
QT_MOC_LITERAL(5, 36, 11), // "newwhitenum"
QT_MOC_LITERAL(6, 48, 11), // "restartGame"
QT_MOC_LITERAL(7, 60, 4), // "skip"
QT_MOC_LITERAL(8, 65, 10), // "playwithpc"
QT_MOC_LITERAL(9, 76, 4), // "back"
QT_MOC_LITERAL(10, 81, 6), // "replay"
QT_MOC_LITERAL(11, 88, 4) // "next"

    },
    "GAME\0blacknum\0\0newblacknum\0whitenum\0"
    "newwhitenum\0restartGame\0skip\0playwithpc\0"
    "back\0replay\0next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GAME[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GAME::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GAME *_t = static_cast<GAME *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blacknum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->whitenum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->restartGame(); break;
        case 3: _t->skip(); break;
        case 4: _t->playwithpc(); break;
        case 5: _t->back(); break;
        case 6: _t->replay(); break;
        case 7: _t->next(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GAME::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GAME::blacknum)) {
                *result = 0;
            }
        }
        {
            typedef void (GAME::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GAME::whitenum)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GAME::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GAME.data,
      qt_meta_data_GAME,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GAME::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GAME::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GAME.stringdata0))
        return static_cast<void*>(const_cast< GAME*>(this));
    return QWidget::qt_metacast(_clname);
}

int GAME::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GAME::blacknum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GAME::whitenum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
