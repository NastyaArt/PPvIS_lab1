/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "TextChanged1"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "str"
QT_MOC_LITERAL(4, 29, 11), // "PushButton1"
QT_MOC_LITERAL(5, 41, 12), // "TextChanged2"
QT_MOC_LITERAL(6, 54, 12), // "PushButton21"
QT_MOC_LITERAL(7, 67, 12), // "PushButton22"
QT_MOC_LITERAL(8, 80, 12), // "TextChanged3"
QT_MOC_LITERAL(9, 93, 11), // "PushButton3"
QT_MOC_LITERAL(10, 105, 12), // "TextChanged4"
QT_MOC_LITERAL(11, 118, 11), // "PushButton4"
QT_MOC_LITERAL(12, 130, 12), // "TextChanged5"
QT_MOC_LITERAL(13, 143, 12), // "PushButton51"
QT_MOC_LITERAL(14, 156, 12), // "PushButton52"
QT_MOC_LITERAL(15, 169, 12) // "PushButton53"

    },
    "MainWindow\0TextChanged1\0\0str\0PushButton1\0"
    "TextChanged2\0PushButton21\0PushButton22\0"
    "TextChanged3\0PushButton3\0TextChanged4\0"
    "PushButton4\0TextChanged5\0PushButton51\0"
    "PushButton52\0PushButton53"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    0,   86,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextChanged1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->PushButton1(); break;
        case 2: _t->TextChanged2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->PushButton21(); break;
        case 4: _t->PushButton22(); break;
        case 5: _t->TextChanged3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->PushButton3(); break;
        case 7: _t->TextChanged4((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->PushButton4(); break;
        case 9: _t->TextChanged5((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->PushButton51(); break;
        case 11: _t->PushButton52(); break;
        case 12: _t->PushButton53(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
