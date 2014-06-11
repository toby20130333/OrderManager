/********************************************************************************
** Form generated from reading UI file 'yyf.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YYF_H
#define UI_YYF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_yyf
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;

    void setupUi(QDialog *yyf)
    {
        if (yyf->objectName().isEmpty())
            yyf->setObjectName(QStringLiteral("yyf"));
        yyf->resize(317, 702);
        yyf->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/dddd.jpg);"));
        textEdit = new QTextEdit(yyf);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 130, 281, 391));
        textEdit->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        pushButton = new QPushButton(yyf);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 660, 121, 31));
        pushButton->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(11, 27, 255);"));
        label = new QLabel(yyf);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 161, 31));
        label->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(0, 170, 0);"));
        lineEdit = new QLineEdit(yyf);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 20, 91, 27));
        label_2 = new QLabel(yyf);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 20, 121, 31));
        label_2->setStyleSheet(QLatin1String("color: rgb(205, 55, 255);\n"
"font: oblique 13pt \"Helvetica\";"));
        pushButton_2 = new QPushButton(yyf);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 660, 121, 31));
        pushButton_2->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(255, 21, 103);"));
        pushButton_3 = new QPushButton(yyf);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 530, 121, 31));
        pushButton_3->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(24, 255, 43);"));
        spinBox = new QSpinBox(yyf);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 610, 61, 27));
        spinBox_2 = new QSpinBox(yyf);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(110, 610, 61, 27));
        spinBox_3 = new QSpinBox(yyf);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(200, 610, 61, 27));

        retranslateUi(yyf);

        QMetaObject::connectSlotsByName(yyf);
    } // setupUi

    void retranslateUi(QDialog *yyf)
    {
        yyf->setWindowTitle(QApplication::translate("yyf", "Dialog", 0));
        pushButton->setText(QApplication::translate("yyf", "\347\241\256\350\256\244\345\217\221\351\200\201", 0));
        label->setText(QApplication::translate("yyf", "     \346\202\250\346\211\200\347\202\271\347\232\204\350\217\234\345\246\202\344\270\213", 0));
        label_2->setText(QApplication::translate("yyf", "\346\202\250\347\232\204\346\241\214\345\217\267\346\230\257", 0));
        pushButton_2->setText(QApplication::translate("yyf", "\347\273\247\347\273\255\347\202\271\350\217\234", 0));
        pushButton_3->setText(QApplication::translate("yyf", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class yyf: public Ui_yyf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YYF_H
