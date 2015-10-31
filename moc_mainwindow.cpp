/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon May 10 16:41:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   36,   11,   11, 0x08,
      77,   36,   11,   11, 0x08,
     114,   36,   11,   11, 0x08,
     151,   36,   11,   11, 0x08,
     188,   36,   11,   11, 0x08,
     225,   36,   11,   11, 0x08,
     260,   36,   11,   11, 0x08,
     297,   36,   11,   11, 0x08,
     334,   36,   11,   11, 0x08,
     371,   36,   11,   11, 0x08,
     408,   36,   11,   11, 0x08,
     445,   36,   11,   11, 0x08,
     482,   11,   11,   11, 0x08,
     509,   11,   11,   11, 0x08,
     536,   11,   11,   11, 0x08,
     559,  553,   11,   11, 0x08,
     586,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_clicked()\0"
    "index\0on_listBaraja_clicked(QModelIndex)\0"
    "on_listBaraja_2_clicked(QModelIndex)\0"
    "on_listBaraja_3_clicked(QModelIndex)\0"
    "on_listBaraja_4_clicked(QModelIndex)\0"
    "on_listBaraja_5_clicked(QModelIndex)\0"
    "on_listWidget_clicked(QModelIndex)\0"
    "on_listWidget_2_clicked(QModelIndex)\0"
    "on_listWidget_3_clicked(QModelIndex)\0"
    "on_listWidget_4_clicked(QModelIndex)\0"
    "on_listWidget_5_clicked(QModelIndex)\0"
    "on_listWidget_6_clicked(QModelIndex)\0"
    "on_listWidget_7_clicked(QModelIndex)\0"
    "on_actionNuevo_triggered()\0"
    "on_actionSalir_triggered()\0limitarVentana()\0"
    "lista\0hacerMovimientos(baraja*&)\0"
    "deseleccionarItems()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_listBaraja_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: on_listBaraja_2_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: on_listBaraja_3_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: on_listBaraja_4_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: on_listBaraja_5_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: on_listWidget_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: on_listWidget_2_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: on_listWidget_3_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 9: on_listWidget_4_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: on_listWidget_5_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: on_listWidget_6_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 12: on_listWidget_7_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: on_actionNuevo_triggered(); break;
        case 14: on_actionSalir_triggered(); break;
        case 15: limitarVentana(); break;
        case 16: hacerMovimientos((*reinterpret_cast< baraja*(*)>(_a[1]))); break;
        case 17: deseleccionarItems(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
