/****************************************************************************
** Meta object code from reading C++ file 'securitymenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GainLossCalculator/securitymenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'securitymenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecurityMenu_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecurityMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecurityMenu_t qt_meta_stringdata_SecurityMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SecurityMenu"
QT_MOC_LITERAL(1, 13, 21), // "securityToTransaction"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "linkTransaction"
QT_MOC_LITERAL(4, 52, 14), // "on_add_clicked"
QT_MOC_LITERAL(5, 67, 18) // "deleteSecurityNode"

    },
    "SecurityMenu\0securityToTransaction\0\0"
    "linkTransaction\0on_add_clicked\0"
    "deleteSecurityNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecurityMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x08 /* Private */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void SecurityMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecurityMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->securityToTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->linkTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->deleteSecurityNode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecurityMenu::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecurityMenu::securityToTransaction)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SecurityMenu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SecurityMenu.data,
    qt_meta_data_SecurityMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SecurityMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecurityMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecurityMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SecurityMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SecurityMenu::securityToTransaction(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
