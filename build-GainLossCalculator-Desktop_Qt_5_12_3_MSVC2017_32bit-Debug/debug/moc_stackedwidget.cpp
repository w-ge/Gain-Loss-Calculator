/****************************************************************************
** Meta object code from reading C++ file 'stackedwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GainLossCalculator/stackedwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stackedwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StackedWidget_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StackedWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StackedWidget_t qt_meta_stringdata_StackedWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StackedWidget"
QT_MOC_LITERAL(1, 14, 15), // "goToTransaction"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "goToEdit"
QT_MOC_LITERAL(4, 40, 21), // "securityToTransaction"
QT_MOC_LITERAL(5, 62, 8), // "goToMenu"
QT_MOC_LITERAL(6, 71, 10), // "goToMerged"
QT_MOC_LITERAL(7, 82, 16), // "mergedToSecurity"
QT_MOC_LITERAL(8, 99, 22) // "goToAllFromTransaction"

    },
    "StackedWidget\0goToTransaction\0\0goToEdit\0"
    "securityToTransaction\0goToMenu\0"
    "goToMerged\0mergedToSecurity\0"
    "goToAllFromTransaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StackedWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StackedWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->goToEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->securityToTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->goToMenu(); break;
        case 4: _t->goToMerged(); break;
        case 5: _t->mergedToSecurity(); break;
        case 6: _t->goToAllFromTransaction(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StackedWidget::staticMetaObject = { {
    &QStackedWidget::staticMetaObject,
    qt_meta_stringdata_StackedWidget.data,
    qt_meta_data_StackedWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StackedWidget.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int StackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
