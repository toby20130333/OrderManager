/****************************************************************************
** Meta object code from reading C++ file 'caidan.h'
**
** Created: Thu Jun 5 00:00:23 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "caidan.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caidan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caidan[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      34,    7,    7,    7, 0x08,
      60,    7,    7,    7, 0x08,
      86,    7,    7,    7, 0x08,
     112,    7,    7,    7, 0x08,
     138,    7,    7,    7, 0x08,
     164,    7,    7,    7, 0x08,
     190,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_caidan[] = {
    "caidan\0\0on_pushButton_8_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject caidan::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_caidan,
      qt_meta_data_caidan, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caidan::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caidan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caidan::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caidan))
        return static_cast<void*>(const_cast< caidan*>(this));
    return QDialog::qt_metacast(_clname);
}

int caidan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_8_clicked(); break;
        case 1: on_pushButton_7_clicked(); break;
        case 2: on_pushButton_6_clicked(); break;
        case 3: on_pushButton_5_clicked(); break;
        case 4: on_pushButton_4_clicked(); break;
        case 5: on_pushButton_3_clicked(); break;
        case 6: on_pushButton_2_clicked(); break;
        case 7: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
