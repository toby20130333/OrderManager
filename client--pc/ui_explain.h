/********************************************************************************
** Form generated from reading UI file 'explain.ui'
**
** Created: Sun Mar 31 15:42:54 2013
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLAIN_H
#define UI_EXPLAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Explain
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Explain)
    {
        if (Explain->objectName().isEmpty())
            Explain->setObjectName(QString::fromUtf8("Explain"));
        Explain->resize(240, 320);
        textEdit = new QTextEdit(Explain);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 20, 131, 121));
        pushButton = new QPushButton(Explain);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 200, 88, 27));

        retranslateUi(Explain);

        QMetaObject::connectSlotsByName(Explain);
    } // setupUi

    void retranslateUi(QWidget *Explain)
    {
        Explain->setWindowTitle(QApplication::translate("Explain", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Explain", "jinru", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Explain: public Ui_Explain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLAIN_H
