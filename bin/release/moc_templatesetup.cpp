/****************************************************************************
** Meta object code from reading C++ file 'templatesetup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../printtemplate/templatesetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatesetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TemplateSetUp_t {
    QByteArrayData data[14];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplateSetUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplateSetUp_t qt_meta_stringdata_TemplateSetUp = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TemplateSetUp"
QT_MOC_LITERAL(1, 14, 8), // "sendType"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "textChg"
QT_MOC_LITERAL(4, 32, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(5, 57, 24), // "on_pushButtonSub_clicked"
QT_MOC_LITERAL(6, 82, 28), // "on_listWidgetControl_clicked"
QT_MOC_LITERAL(7, 111, 5), // "index"
QT_MOC_LITERAL(8, 117, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(9, 143, 29), // "on_listWidgetTemplate_clicked"
QT_MOC_LITERAL(10, 173, 25), // "on_pushButtonSave_clicked"
QT_MOC_LITERAL(11, 199, 17), // "currentFontChange"
QT_MOC_LITERAL(12, 217, 10), // "textChange"
QT_MOC_LITERAL(13, 228, 10) // "sizeChange"

    },
    "TemplateSetUp\0sendType\0\0textChg\0"
    "on_pushButtonAdd_clicked\0"
    "on_pushButtonSub_clicked\0"
    "on_listWidgetControl_clicked\0index\0"
    "on_actionDelete_triggered\0"
    "on_listWidgetTemplate_clicked\0"
    "on_pushButtonSave_clicked\0currentFontChange\0"
    "textChange\0sizeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplateSetUp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    1,   75,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TemplateSetUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TemplateSetUp *_t = static_cast<TemplateSetUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->textChg(); break;
        case 2: _t->on_pushButtonAdd_clicked(); break;
        case 3: _t->on_pushButtonSub_clicked(); break;
        case 4: _t->on_listWidgetControl_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_actionDelete_triggered(); break;
        case 6: _t->on_listWidgetTemplate_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonSave_clicked(); break;
        case 8: _t->currentFontChange(); break;
        case 9: _t->textChange(); break;
        case 10: _t->sizeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TemplateSetUp::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TemplateSetUp::sendType)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TemplateSetUp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TemplateSetUp::textChg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TemplateSetUp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TemplateSetUp.data,
      qt_meta_data_TemplateSetUp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TemplateSetUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplateSetUp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TemplateSetUp.stringdata0))
        return static_cast<void*>(const_cast< TemplateSetUp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TemplateSetUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TemplateSetUp::sendType(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TemplateSetUp::textChg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
