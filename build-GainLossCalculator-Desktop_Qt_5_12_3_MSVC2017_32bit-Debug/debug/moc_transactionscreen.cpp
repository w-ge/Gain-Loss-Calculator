/****************************************************************************
** Meta object code from reading C++ file 'transactionscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GainLossCalculator/TransactionScreen/transactionscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionScreen_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionScreen_t qt_meta_stringdata_TransactionScreen = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TransactionScreen"
QT_MOC_LITERAL(1, 18, 8), // "goToEdit"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "goToMenu"
QT_MOC_LITERAL(4, 37, 22), // "goToAllFromTransaction"
QT_MOC_LITERAL(5, 60, 15), // "on_edit_clicked"
QT_MOC_LITERAL(6, 76, 15), // "on_back_clicked"
QT_MOC_LITERAL(7, 92, 18) // "on_viewAll_clicked"

    },
    "TransactionScreen\0goToEdit\0\0goToMenu\0"
    "goToAllFromTransaction\0on_edit_clicked\0"
    "on_back_clicked\0on_viewAll_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransactionScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransactionScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->goToMenu(); break;
        case 2: _t->goToAllFromTransaction(); break;
        case 3: _t->on_edit_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        case 5: _t->on_viewAll_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransactionScreen::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionScreen::goToEdit)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransactionScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionScreen::goToMenu)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransactionScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionScreen::goToAllFromTransaction)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionScreen::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TransactionScreen.data,
    qt_meta_data_TransactionScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransactionScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransactionScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TransactionScreen::goToEdit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionScreen::goToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TransactionScreen::goToAllFromTransaction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
