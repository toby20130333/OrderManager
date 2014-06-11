/********************************************************************************
** Form generated from reading UI file 'dshow.ui'
**
** Created: Wed Mar 20 14:02:54 2013
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSHOW_H
#define UI_DSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dshow
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *Dshow)
    {
        if (Dshow->objectName().isEmpty())
            Dshow->setObjectName(QString::fromUtf8("Dshow"));
        Dshow->resize(240, 320);
        textEdit = new QTextEdit(Dshow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 30, 104, 84));

        retranslateUi(Dshow);

        QMetaObject::connectSlotsByName(Dshow);
    } // setupUi

    void retranslateUi(QDialog *Dshow)
    {
        Dshow->setWindowTitle(QApplication::translate("Dshow", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dshow: public Ui_Dshow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSHOW_H
