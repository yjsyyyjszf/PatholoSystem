/****************************************************************************
** Meta object code from reading C++ file 'tabregister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tabregister/tabregister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabregister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TabRegister_t {
    QByteArrayData data[19];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabRegister_t qt_meta_stringdata_TabRegister = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TabRegister"
QT_MOC_LITERAL(1, 12, 10), // "sendNumber"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "updateMovie"
QT_MOC_LITERAL(4, 36, 10), // "selectData"
QT_MOC_LITERAL(5, 47, 4), // "type"
QT_MOC_LITERAL(6, 52, 28), // "on_actionNewNumber_triggered"
QT_MOC_LITERAL(7, 81, 32), // "on_actionNewMoreNumber_triggered"
QT_MOC_LITERAL(8, 114, 32), // "on_actionPrintTemplate_triggered"
QT_MOC_LITERAL(9, 147, 29), // "on_actionDeleteInfo_triggered"
QT_MOC_LITERAL(10, 177, 28), // "on_actionClearInfo_triggered"
QT_MOC_LITERAL(11, 206, 30), // "on_actionExtendExcel_triggered"
QT_MOC_LITERAL(12, 237, 28), // "on_pushButtonRefresh_clicked"
QT_MOC_LITERAL(13, 266, 25), // "on_pushButtonFind_clicked"
QT_MOC_LITERAL(14, 292, 22), // "on_tableWidget_clicked"
QT_MOC_LITERAL(15, 315, 5), // "index"
QT_MOC_LITERAL(16, 321, 28), // "on_tableWidget_doubleClicked"
QT_MOC_LITERAL(17, 350, 12), // "currentIndex"
QT_MOC_LITERAL(18, 363, 29) // "on_actionPrintLabel_triggered"

    },
    "TabRegister\0sendNumber\0\0updateMovie\0"
    "selectData\0type\0on_actionNewNumber_triggered\0"
    "on_actionNewMoreNumber_triggered\0"
    "on_actionPrintTemplate_triggered\0"
    "on_actionDeleteInfo_triggered\0"
    "on_actionClearInfo_triggered\0"
    "on_actionExtendExcel_triggered\0"
    "on_pushButtonRefresh_clicked\0"
    "on_pushButtonFind_clicked\0"
    "on_tableWidget_clicked\0index\0"
    "on_tableWidget_doubleClicked\0currentIndex\0"
    "on_actionPrintLabel_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabRegister[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   87,    2, 0x08 /* Private */,
       4,    1,   88,    2, 0x08 /* Private */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      16,    1,  102,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::QModelIndex,   17,
    QMetaType::Void,

       0        // eod
};

void TabRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabRegister *_t = static_cast<TabRegister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateMovie(); break;
        case 2: _t->selectData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_actionNewNumber_triggered(); break;
        case 4: _t->on_actionNewMoreNumber_triggered(); break;
        case 5: _t->on_actionPrintTemplate_triggered(); break;
        case 6: _t->on_actionDeleteInfo_triggered(); break;
        case 7: _t->on_actionClearInfo_triggered(); break;
        case 8: _t->on_actionExtendExcel_triggered(); break;
        case 9: _t->on_pushButtonRefresh_clicked(); break;
        case 10: _t->on_pushButtonFind_clicked(); break;
        case 11: _t->on_tableWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_tableWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->on_actionPrintLabel_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabRegister::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabRegister::sendNumber)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TabRegister::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TabRegister.data,
      qt_meta_data_TabRegister,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TabRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TabRegister.stringdata0))
        return static_cast<void*>(const_cast< TabRegister*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TabRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TabRegister::sendNumber(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
