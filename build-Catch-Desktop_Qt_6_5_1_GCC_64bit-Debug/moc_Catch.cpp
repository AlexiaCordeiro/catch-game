/****************************************************************************
** Meta object code from reading C++ file 'Catch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Catch.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Catch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCatchENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCatchENDCLASS = QtMocHelpers::stringData(
    "Catch",
    "turnEnded",
    "",
    "play",
    "id",
    "switchPlayer",
    "reset",
    "showAbout",
    "updateSelectables",
    "over",
    "updateStatusBar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCatchENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[6];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[3];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[10];
    char stringdata8[18];
    char stringdata9[5];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCatchENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCatchENDCLASS_t qt_meta_stringdata_CLASSCatchENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Catch"
        QT_MOC_LITERAL(6, 9),  // "turnEnded"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 4),  // "play"
        QT_MOC_LITERAL(22, 2),  // "id"
        QT_MOC_LITERAL(25, 12),  // "switchPlayer"
        QT_MOC_LITERAL(38, 5),  // "reset"
        QT_MOC_LITERAL(44, 9),  // "showAbout"
        QT_MOC_LITERAL(54, 17),  // "updateSelectables"
        QT_MOC_LITERAL(72, 4),  // "over"
        QT_MOC_LITERAL(77, 15)   // "updateStatusBar"
    },
    "Catch",
    "turnEnded",
    "",
    "play",
    "id",
    "switchPlayer",
    "reset",
    "showAbout",
    "updateSelectables",
    "over",
    "updateStatusBar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCatchENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    1,   63,    2, 0x08,    7 /* Private */,
      10,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Catch::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSCatchENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCatchENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCatchENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Catch, std::true_type>,
        // method 'turnEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'switchPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAbout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSelectables'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateStatusBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Catch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Catch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->turnEnded(); break;
        case 1: _t->play((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->switchPlayer(); break;
        case 3: _t->reset(); break;
        case 4: _t->showAbout(); break;
        case 5: _t->updateSelectables((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->updateStatusBar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Catch::*)();
            if (_t _q_method = &Catch::turnEnded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Catch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Catch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCatchENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Catch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Catch::turnEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
