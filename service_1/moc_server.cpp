/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created: Thu Jun 5 00:00:21 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_server[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      34,    7,    7,    7, 0x08,
      59,    7,    7,    7, 0x08,
      85,    7,    7,    7, 0x08,
     109,    7,    7,    7, 0x08,
     124,    7,    7,    7, 0x08,
     135,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_server[] = {
    "server\0\0on_pushButton_3_clicked()\0"
    "timerEvent(QTimerEvent*)\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0newClientCom()\0"
    "readData()\0widgets()\0"
};

const QMetaObject server::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_server,
      qt_meta_data_server, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &server::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_server))
        return static_cast<void*>(const_cast< server*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_3_clicked(); break;
        case 1: timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        case 4: newClientCom(); break;
        case 5: readData(); break;
        case 6: widgets(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
