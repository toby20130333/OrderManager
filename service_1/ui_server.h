/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName(QStringLiteral("server"));
        server->resize(850, 450);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        server->setFont(font);
        server->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/src/PaperMoney256.png"), QSize(), QIcon::Normal, QIcon::Off);
        server->setWindowIcon(icon);
        server->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/src/154433321.jpg);"));
        server->setAnimated(true);
        centralWidget = new QWidget(server);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 70, 211, 251));
        textEdit->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/src/20080519102858585.jpg);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 70, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Bitstream Charter"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/src/20087417153357_2.jpg);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/src/FilesFolder256.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 20, 171, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Bitstream Charter"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/src/\346\241\214\345\255\220.png);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(640, 70, 71, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 70, 61, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/src/\346\241\214\345\217\267.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 111, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Bitstream Charter"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/src/\345\216\250\346\210\277\344\277\241\346\201\257.png);"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(650, 120, 161, 41));
        textEdit_2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/src/20080519102858585.jpg);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(560, 130, 61, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Bitstream Charter"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/src/\351\207\221\351\242\235.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 350, 141, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/src/20087417153357_2.jpg);\n"
"border-image: url(:/new/prefix1/src/20087417153357_2.jpg);\n"
"border-top-color: rgb(255, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/src/Cholesterol (to eat).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(560, 250, 191, 61));
        textEdit_3->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/src/20080519102858585.jpg);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 190, 121, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Bitstream Charter"));
        pushButton_3->setFont(font5);
        pushButton_3->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/src/20087417153357_2.jpg);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/src/\351\207\221\350\236\215\351\207\221\351\222\261\347\261\273\345\233\276\346\240\207\344\270\213\350\275\2754.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(290, 70, 221, 241));
        listWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/src/20080519102858585.jpg);"));
        server->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(server);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 23));
        server->setMenuBar(menuBar);
        statusBar = new QStatusBar(server);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        server->setStatusBar(statusBar);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QApplication::translate("server", "server", 0));
        pushButton->setText(QApplication::translate("server", "\347\273\223\345\270\220", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("server", "\350\217\234\345\215\225\347\256\241\347\220\206", 0));
        pushButton_3->setText(QApplication::translate("server", "\344\273\212\346\227\245\346\200\273\344\272\244\346\230\223\351\242\235", 0));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
