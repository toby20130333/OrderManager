#include <QApplication>
#include <QTextCodec>
#include <QSplashScreen>
#include <QPixmap>
#include <QString>
#include <QDebug>
#include <QSqlDatabase>
#include "server.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#if QT_VERSION < 0x050000
    QTextCodec *tc=QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForTr(tc);
#endif
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("rsr");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    if(db.open()){
        qDebug()<<"main open OK ";
    }else{
        qDebug()<<"main open Error ";
    }
    server w;
    w.show();
    return a.exec();
}
