/****************************************************************************
** Meta object code from reading C++ file 'loading.h'
**
** Created: Wed Jun 4 23:45:22 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loading.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loading.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_loading[] = {

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
       9,    8,    8,    8, 0x08,
      35,    8,    8,    8, 0x08,
      61,    8,    8,    8, 0x08,
      87,    8,    8,    8, 0x08,
     111,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_loading[] = {
    "loading\0\0on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_spinBox_editingFinished()\0"
};

const QMetaObject loading::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_loading,
      qt_meta_data_loading, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &loading::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *loading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *loading::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_loading))
        return static_cast<void*>(const_cast< loading*>(this));
    return QDialog::qt_metacast(_clname);
}

int loading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_4_clicked(); break;
        case 1: on_pushButton_3_clicked(); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        case 4: on_spinBox_editingFinished(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
