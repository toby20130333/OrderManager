/********************************************************************************
** Form generated from reading UI file 'illus.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ILLUS_H
#define UI_ILLUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_illus
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *illus)
    {
        if (illus->objectName().isEmpty())
            illus->setObjectName(QStringLiteral("illus"));
        illus->resize(322, 703);
        illus->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/dddd.jpg);"));
        pushButton = new QPushButton(illus);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 600, 241, 51));
        pushButton->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Bitstream Charter\";\n"
"color: rgb(0, 0, 255);"));
        textEdit = new QTextEdit(illus);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 281, 521));
        textEdit->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/123.jpg);"));

        retranslateUi(illus);

        QMetaObject::connectSlotsByName(illus);
    } // setupUi

    void retranslateUi(QDialog *illus)
    {
        illus->setWindowTitle(QApplication::translate("illus", "Dialog", 0));
        pushButton->setText(QApplication::translate("illus", "\350\277\233\345\205\245\347\202\271\350\217\234\347\263\273\347\273\237", 0));
        textEdit->setHtml(QApplication::translate("illus", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:14pt; color:#ff0000;\">\344\275\277\347\224\250\350\257\264\346\230\216\344\271\246</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:14pt; color:#5500ff;\">\346\202\250\347\232\204\345\205\211"
                        "\344\270\264\346\230\257\346\210\221\344\273\254\347\273\247\347\273\255\345\267\245\344\275\234\347\232\204\345\212\250\345\212\233\357\274\201</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:11pt; color:#5500ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:11pt;\"> </span><span style=\" font-family:'Sans'; font-size:11pt; color:#aa00ff;\"> 1.\346\254\242\350\277\216\346\202\250\344\275\277\347\224\250\346\234\254\345\205\254\345\217\270\346\217\220\344\276\233\347\232\204\346\211\213\346\214\201\347\202\271\350\217\234\350\256\276\345\244\207.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-s"
                        "ize:11pt; color:#aa00ff;\">  2.\347\202\271\350\217\234\344\271\213\345\211\215\350\257\267\344\276\235\346\215\256\346\241\214\345\255\220\344\275\277\347\224\250\346\203\205\345\206\265\345\257\271\346\241\214\345\255\220\350\277\233\350\241\214\351\200\211\346\213\251,\345\246\202\346\202\250\351\234\200\350\246\201\345\212\240\350\217\234,\345\220\214\346\240\267\351\234\200\350\246\201\351\200\211\346\213\251\346\202\250\347\232\204\346\241\214\345\217\267.\351\200\211\346\213\251\350\217\234\345\223\201\350\257\267\346\214\211\351\241\272\345\272\217\351\200\232\350\277\207\350\275\254\345\212\250\346\241\206\350\276\223\345\205\245\350\217\234\347\232\204\347\274\226\345\217\267,\347\202\271\345\207\273NEXT,\351\200\211\346\213\251\344\270\213\344\270\200\351\201\223\350\217\234.\345\246\202\346\202\250\347\202\271\350\217\234\345\256\214\346\210\220,\347\202\271\345\207\273\346\230\276\347\244\272\350\217\234\345\215\225\346\237\245\347\234\213\345\267\262\347\273\217\347\202\271\347\232\204\350\217\234"
                        ",\345\234\250\350\277\231\344\270\252\347\225\214\351\235\242\345\217\257\344\273\245\346\217\220\344\272\244.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:11pt; color:#aa00ff;\"> 3.\345\246\202\346\202\250\350\246\201\351\200\200\350\217\234,\350\257\267\345\217\212\346\227\266\350\201\224\347\263\273\346\234\215\345\212\241\345\217\260,\346\210\221\344\273\254\344\274\232\346\240\271\346\215\256\345\256\236\351\231\205\346\203\205\345\206\265\344\272\210\344\273\245\345\244\204\347\220\206.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:11pt; color:#aa00ff;\"> 4.\346\234\200\345\220\216\345\206\215\346\254\241\346\254\242\350\277\216\346\202\250\347\232\204\345\205\211\344\270\264.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:11pt; color:#55ff00;\"><br /></p></td></tr></table></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class illus: public Ui_illus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ILLUS_H
