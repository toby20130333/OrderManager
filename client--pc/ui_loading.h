/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_loading
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QSpinBox *spinBox;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *loading)
    {
        if (loading->objectName().isEmpty())
            loading->setObjectName(QStringLiteral("loading"));
        loading->resize(336, 702);
        loading->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/dddd.jpg);"));
        pushButton = new QPushButton(loading);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 560, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        label = new QLabel(loading);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 480, 131, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Bitstream Charter"));
        font1.setPointSize(13);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(85, 0, 255);"));
        spinBox = new QSpinBox(loading);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 480, 111, 31));
        spinBox->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        tableView = new QTableView(loading);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 291, 421));
        tableView->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/123.jpg);\n"
"border-color: rgb(255, 85, 0);\n"
"font: 75 italic 16pt \"Bitstream Charter\";\n"
""));
        label_2 = new QLabel(loading);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 131, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Helvetica"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(9);
        label_2->setFont(font2);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QLatin1String("font: 75 oblique 16pt \"Helvetica\";\n"
"color: rgb(0, 0, 255);"));
        pushButton_2 = new QPushButton(loading);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 640, 121, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_3 = new QPushButton(loading);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 560, 121, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_4 = new QPushButton(loading);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 640, 121, 31));
        pushButton_4->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));

        retranslateUi(loading);

        QMetaObject::connectSlotsByName(loading);
    } // setupUi

    void retranslateUi(QDialog *loading)
    {
        loading->setWindowTitle(QApplication::translate("loading", "Dialog", 0));
        pushButton->setText(QApplication::translate("loading", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("loading", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\346\241\214\345\217\267", 0));
        label_2->setText(QApplication::translate("loading", "\346\241\214\345\255\220\344\275\277\347\224\250\346\203\205\345\206\265", 0));
        pushButton_2->setText(QApplication::translate("loading", "\345\210\267\346\226\260", 0));
        pushButton_3->setText(QApplication::translate("loading", "\345\274\200\345\247\213\347\202\271\350\217\234", 0));
        pushButton_4->setText(QApplication::translate("loading", "cancle", 0));
    } // retranslateUi

};

namespace Ui {
    class loading: public Ui_loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
