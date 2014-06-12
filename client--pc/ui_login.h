/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *ts;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QWidget *tab_2;
    QTableView *tableView_2;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab;
    QTableView *tableView_3;
    QLabel *label_4;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QTableView *tableView_4;
    QLabel *label_5;
    QSpinBox *spinBox_10;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_4;
    QTableView *tableView_5;
    QLabel *label_6;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox_15;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(325, 703);
        login->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/dddd.jpg);"));
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 321, 651));
        QFont font;
        font.setFamily(QStringLiteral("Bitstream Charter"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("font: 12pt \"Bitstream Charter\";\n"
""));
        ts = new QWidget();
        ts->setObjectName(QStringLiteral("ts"));
        tableView = new QTableView(ts);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 341, 371));
        tableView->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        label_2 = new QLabel(ts);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 380, 121, 31));
        label_2->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton = new QPushButton(ts);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 530, 121, 31));
        pushButton->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_2 = new QPushButton(ts);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 530, 121, 31));
        pushButton_2->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        spinBox = new QSpinBox(ts);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 440, 81, 31));
        spinBox_2 = new QSpinBox(ts);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(120, 440, 81, 31));
        spinBox_3 = new QSpinBox(ts);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(230, 440, 81, 31));
        tabWidget->addTab(ts, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 10, 341, 371));
        tableView_2->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        spinBox_4 = new QSpinBox(tab_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(30, 450, 61, 27));
        spinBox_4->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_5 = new QSpinBox(tab_2);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(150, 450, 61, 27));
        spinBox_5->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_6 = new QSpinBox(tab_2);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(250, 450, 61, 27));
        spinBox_6->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 390, 121, 31));
        label_3->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 530, 121, 31));
        pushButton_3->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 530, 121, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        pushButton_4->setFont(font1);
        pushButton_4->setMouseTracking(false);
        pushButton_4->setAcceptDrops(false);
        pushButton_4->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView_3 = new QTableView(tab);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 0, 311, 361));
        tableView_3->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 380, 121, 31));
        label_4->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        spinBox_7 = new QSpinBox(tab);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setGeometry(QRect(20, 440, 51, 27));
        spinBox_7->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_8 = new QSpinBox(tab);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setGeometry(QRect(120, 440, 51, 27));
        spinBox_8->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_9 = new QSpinBox(tab);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setGeometry(QRect(210, 440, 51, 27));
        spinBox_9->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 540, 121, 31));
        pushButton_5->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 540, 131, 31));
        pushButton_6->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_4 = new QTableView(tab_3);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(0, 0, 541, 231));
        tableView_4->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 260, 121, 31));
        label_5->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        spinBox_10 = new QSpinBox(tab_3);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setGeometry(QRect(190, 260, 61, 27));
        spinBox_10->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_11 = new QSpinBox(tab_3);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));
        spinBox_11->setGeometry(QRect(280, 260, 61, 27));
        spinBox_11->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_12 = new QSpinBox(tab_3);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));
        spinBox_12->setGeometry(QRect(370, 260, 61, 27));
        spinBox_12->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 320, 121, 31));
        pushButton_7->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 320, 121, 31));
        pushButton_8->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_5 = new QTableView(tab_4);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(0, 0, 541, 231));
        tableView_5->setStyleSheet(QStringLiteral("font: 75 oblique 11pt \"Helvetica\";"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 260, 121, 31));
        label_6->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        spinBox_13 = new QSpinBox(tab_4);
        spinBox_13->setObjectName(QStringLiteral("spinBox_13"));
        spinBox_13->setGeometry(QRect(190, 260, 61, 27));
        spinBox_13->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_14 = new QSpinBox(tab_4);
        spinBox_14->setObjectName(QStringLiteral("spinBox_14"));
        spinBox_14->setGeometry(QRect(280, 260, 61, 27));
        spinBox_14->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        spinBox_15 = new QSpinBox(tab_4);
        spinBox_15->setObjectName(QStringLiteral("spinBox_15"));
        spinBox_15->setGeometry(QRect(370, 260, 61, 27));
        spinBox_15->setStyleSheet(QStringLiteral("font: 75 10pt \"Bitstream Charter\";"));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 320, 121, 31));
        pushButton_9->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(210, 320, 121, 31));
        pushButton_10->setStyleSheet(QLatin1String("font: oblique 13pt \"Helvetica\";\n"
"color: rgb(85, 0, 255);"));
        tabWidget->addTab(tab_4, QString());
        login->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        login->setStatusBar(statusBar);

        retranslateUi(login);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        label_2->setText(QApplication::translate("login", "\351\200\211\346\213\251\350\217\234\347\232\204\347\274\226\345\217\267", 0));
        pushButton->setText(QApplication::translate("login", "confirm", 0));
        pushButton_2->setText(QApplication::translate("login", "\346\230\276\347\244\272\346\211\200\347\202\271\347\232\204\350\217\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(ts), QApplication::translate("login", "\344\270\273\345\216\250\346\216\250\350\215\220", 0));
        label_3->setText(QApplication::translate("login", "\351\200\211\346\213\251\350\217\234\347\232\204\347\274\226\345\217\267", 0));
        pushButton_3->setText(QApplication::translate("login", "confirm", 0));
        pushButton_4->setText(QApplication::translate("login", "\346\230\276\347\244\272\346\211\200\347\202\271\347\232\204\350\217\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("login", "\347\211\271\350\211\262\350\217\234", 0));
        label_4->setText(QApplication::translate("login", "\351\200\211\346\213\251\350\217\234\347\232\204\347\274\226\345\217\267", 0));
        pushButton_5->setText(QApplication::translate("login", "confirm", 0));
        pushButton_6->setText(QApplication::translate("login", "\346\230\276\347\244\272\346\211\200\347\202\271\347\232\204\350\217\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("login", "\347\264\240\350\217\234", 0));
        label_5->setText(QApplication::translate("login", "\351\200\211\346\213\251\350\217\234\347\232\204\347\274\226\345\217\267", 0));
        pushButton_7->setText(QApplication::translate("login", "confirm", 0));
        pushButton_8->setText(QApplication::translate("login", "\346\230\276\347\244\272\346\211\200\347\202\271\347\232\204\350\217\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("login", "\350\202\211\350\217\234", 0));
        label_6->setText(QApplication::translate("login", "\351\200\211\346\213\251\350\217\234\347\232\204\347\274\226\345\217\267", 0));
        pushButton_9->setText(QApplication::translate("login", "confirm", 0));
        pushButton_10->setText(QApplication::translate("login", "\346\230\276\347\244\272\346\211\200\351\200\211\347\232\204\350\217\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("login", "\346\261\244", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
