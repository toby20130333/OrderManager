/****************************************************************************
** Meta object code from reading C++ file 'yyf.h'
**
** Created: Sun Jun 1 00:57:12 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "yyf.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yyf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_yyf[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      31,    4,    4,    4, 0x08,
      57,    4,    4,    4, 0x08,
      81,    4,    4,    4, 0x08,
      98,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_yyf[] = {
    "yyf\0\0on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0connected_slot()\0"
    "readDate()\0"
};

const QMetaObject yyf::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_yyf,
      qt_meta_data_yyf, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &yyf::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *yyf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *yyf::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_yyf))
        return static_cast<void*>(const_cast< yyf*>(this));
    return QDialog::qt_metacast(_clname);
}

int yyf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_3_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_pushButton_clicked(); break;
        case 3: connected_slot(); break;
        case 4: readDate(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
