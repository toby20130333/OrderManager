/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created: Sun Jun 1 00:57:09 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "login.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_login[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      34,    6,    6,    6, 0x08,
      60,    6,    6,    6, 0x08,
      86,    6,    6,    6, 0x08,
     112,    6,    6,    6, 0x08,
     138,    6,    6,    6, 0x08,
     164,    6,    6,    6, 0x08,
     190,    6,    6,    6, 0x08,
     216,    6,    6,    6, 0x08,
     242,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_login[] = {
    "login\0\0on_pushButton_10_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject login::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_login,
      qt_meta_data_login, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &login::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_login))
        return static_cast<void*>(const_cast< login*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_10_clicked(); break;
        case 1: on_pushButton_9_clicked(); break;
        case 2: on_pushButton_8_clicked(); break;
        case 3: on_pushButton_7_clicked(); break;
        case 4: on_pushButton_6_clicked(); break;
        case 5: on_pushButton_5_clicked(); break;
        case 6: on_pushButton_4_clicked(); break;
        case 7: on_pushButton_3_clicked(); break;
        case 8: on_pushButton_2_clicked(); break;
        case 9: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
