#include <QApplication>
#include "login.h"
#include "loading.h"
#include <QTextCodec>
#include <QSplashScreen>
#include <QPixmap>
#include <QString>
#include <QSqlDatabase>
#include <QSql>
#include <QSqlQuery>
#include <QTextEdit>
#include <QtTest/QTest>
#include <illus.h>
#include <QDebug>
QSqlDatabase db;
QString  value;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTextCodec *tc=QTextCodec::codecForName("utf-8");           //设置字符集,支持中文
    //QTextCodec::setCodecForTr(tc);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/new/prefix1/succ1.jpg"));       //加载启动画面,图片必须是资源文件
    splash->setDisabled(true);                                   //禁止用户输入响应
    splash->show();


    Qt::Alignment topRight = Qt::AlignCenter;
    splash->showMessage(QObject::tr("数据库加载中，请稍等..."), topRight, Qt::red);   //启动界面设置文字
//    sleep(5);

    QTextEdit *textEdit = new QTextEdit;
    splash->showMessage(QObject::tr("正在启动主窗口..."),topRight,Qt::blue);
    textEdit->close();


    //与mysql数据库的连接
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("rsr");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.open();
    qDebug()<<QSqlDatabase::drivers();

    //sleep(4);
    illus g;
    splash->finish(&g);                               //直到主窗口加载完成，关闭启动界面
    delete splash;
    g.show();
    return a.exec();
}
