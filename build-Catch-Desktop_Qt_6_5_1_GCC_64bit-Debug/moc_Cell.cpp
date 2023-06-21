/****************************************************************************
** Meta object code from reading C++ file 'Cell.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Cell.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cell.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCellENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCellENDCLASS = QtMocHelpers::stringData(
    "Cell",
    "mouseOver",
    "",
    "over",
    "stateChanged",
    "Cell::State",
    "state",
    "playerChanged",
    "Player*",
    "player",
    "reset",
    "updateCell",
    "row",
    "col",
    "empty",
    "selectable",
    "blocked",
    "captured",
    "State",
    "Empty",
    "Selectable",
    "Blocked",
    "Captured"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCellENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[14];
    char stringdata8[8];
    char stringdata9[7];
    char stringdata10[6];
    char stringdata11[11];
    char stringdata12[4];
    char stringdata13[4];
    char stringdata14[6];
    char stringdata15[11];
    char stringdata16[8];
    char stringdata17[9];
    char stringdata18[6];
    char stringdata19[6];
    char stringdata20[11];
    char stringdata21[8];
    char stringdata22[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCellENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCellENDCLASS_t qt_meta_stringdata_CLASSCellENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Cell"
        QT_MOC_LITERAL(5, 9),  // "mouseOver"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 4),  // "over"
        QT_MOC_LITERAL(21, 12),  // "stateChanged"
        QT_MOC_LITERAL(34, 11),  // "Cell::State"
        QT_MOC_LITERAL(46, 5),  // "state"
        QT_MOC_LITERAL(52, 13),  // "playerChanged"
        QT_MOC_LITERAL(66, 7),  // "Player*"
        QT_MOC_LITERAL(74, 6),  // "player"
        QT_MOC_LITERAL(81, 5),  // "reset"
        QT_MOC_LITERAL(87, 10),  // "updateCell"
        QT_MOC_LITERAL(98, 3),  // "row"
        QT_MOC_LITERAL(102, 3),  // "col"
        QT_MOC_LITERAL(106, 5),  // "empty"
        QT_MOC_LITERAL(112, 10),  // "selectable"
        QT_MOC_LITERAL(123, 7),  // "blocked"
        QT_MOC_LITERAL(131, 8),  // "captured"
        QT_MOC_LITERAL(140, 5),  // "State"
        QT_MOC_LITERAL(146, 5),  // "Empty"
        QT_MOC_LITERAL(152, 10),  // "Selectable"
        QT_MOC_LITERAL(163, 7),  // "Blocked"
        QT_MOC_LITERAL(171, 8)   // "Captured"
    },
    "Cell",
    "mouseOver",
    "",
    "over",
    "stateChanged",
    "Cell::State",
    "state",
    "playerChanged",
    "Player*",
    "player",
    "reset",
    "updateCell",
    "row",
    "col",
    "empty",
    "selectable",
    "blocked",
    "captured",
    "State",
    "Empty",
    "Selectable",
    "Blocked",
    "Captured"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCellENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   55, // properties
       1,   95, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    9 /* Public */,
       4,    1,   47,    2, 0x06,   11 /* Public */,
       7,    1,   50,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   53,    2, 0x0a,   15 /* Public */,
      11,    0,   54,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(-1), 0,
      13, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 5, 0x0001510b, uint(1), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(2), 0,
      14, QMetaType::Bool, 0x00015001, uint(-1), 0,
      15, QMetaType::Bool, 0x00015001, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(-1), 0,
      17, QMetaType::Bool, 0x00015001, uint(-1), 0,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    4,  100,

 // enum data: key, value
      19, uint(Cell::Empty),
      20, uint(Cell::Selectable),
      21, uint(Cell::Blocked),
      22, uint(Cell::Captured),

       0        // eod
};

Q_CONSTINIT const QMetaObject Cell::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSCellENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCellENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCellENDCLASS_t,
        // property 'row'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'col'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'state'
        QtPrivate::TypeAndForceComplete<Cell::State, std::true_type>,
        // property 'player'
        QtPrivate::TypeAndForceComplete<Player*, std::true_type>,
        // property 'empty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'blocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'captured'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Cell, std::true_type>,
        // method 'mouseOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Cell::State, std::false_type>,
        // method 'playerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cell *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseOver((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<Cell::State>>(_a[1]))); break;
        case 2: _t->playerChanged((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->updateCell(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cell::*)(bool );
            if (_t _q_method = &Cell::mouseOver; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cell::*)(Cell::State );
            if (_t _q_method = &Cell::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cell::*)(Player * );
            if (_t _q_method = &Cell::playerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Player* >(); break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Cell *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->col(); break;
        case 2: *reinterpret_cast< Cell::State*>(_v) = _t->state(); break;
        case 3: *reinterpret_cast< Player**>(_v) = _t->player(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSelectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isBlocked(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isCaptured(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Cell *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRow(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCol(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setState(*reinterpret_cast< Cell::State*>(_v)); break;
        case 3: _t->setPlayer(*reinterpret_cast< Player**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Cell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCellENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Cell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Cell::mouseOver(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cell::stateChanged(Cell::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cell::playerChanged(Player * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
