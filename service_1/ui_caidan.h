/********************************************************************************
** Form generated from reading UI file 'caidan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIDAN_H
#define UI_CAIDAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_caidan
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *caidan)
    {
        if (caidan->objectName().isEmpty())
            caidan->setObjectName(QStringLiteral("caidan"));
        caidan->resize(622, 385);
        tableView = new QTableView(caidan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 441, 261));
        pushButton = new QPushButton(caidan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 40, 75, 23));
        pushButton_2 = new QPushButton(caidan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 80, 75, 23));
        pushButton_3 = new QPushButton(caidan);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 120, 75, 23));
        pushButton_4 = new QPushButton(caidan);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 160, 75, 23));
        pushButton_5 = new QPushButton(caidan);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(500, 220, 81, 23));
        pushButton_6 = new QPushButton(caidan);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 270, 81, 23));
        pushButton_7 = new QPushButton(caidan);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 310, 75, 23));
        pushButton_8 = new QPushButton(caidan);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 340, 75, 23));
        lineEdit = new QLineEdit(caidan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 310, 113, 20));
        label = new QLabel(caidan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 310, 60, 17));

        retranslateUi(caidan);

        QMetaObject::connectSlotsByName(caidan);
    } // setupUi

    void retranslateUi(QDialog *caidan)
    {
        caidan->setWindowTitle(QApplication::translate("caidan", "Dialog", 0));
        pushButton->setText(QApplication::translate("caidan", "\346\217\220\344\272\244\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("caidan", "\346\222\244\351\224\200\344\277\256\346\224\271", 0));
        pushButton_3->setText(QApplication::translate("caidan", "\346\267\273\345\212\240\350\256\260\345\275\225", 0));
        pushButton_4->setText(QApplication::translate("caidan", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0));
        pushButton_5->setText(QApplication::translate("caidan", "\345\215\207\345\272\217\346\216\222\345\210\227", 0));
        pushButton_6->setText(QApplication::translate("caidan", "\351\231\215\345\272\217\346\216\222\345\210\227", 0));
        pushButton_7->setText(QApplication::translate("caidan", "\346\237\245\350\257\242", 0));
        pushButton_8->setText(QApplication::translate("caidan", "\350\277\224\345\233\236\345\205\250\350\241\250", 0));
        label->setText(QApplication::translate("caidan", "\350\276\223\345\205\245\350\217\234\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class caidan: public Ui_caidan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIDAN_H
