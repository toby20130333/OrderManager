#include "widget.h"
#include <QApplication>
#include "myquickview.h"
#include <QtQml>
#include "fileio.h"
#include <QQuickView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qmlRegisterType<FileIO, 1>("FileIO", 1, 0, "FileIO");
//    MyQuickView w;
//    w.resize(400,700);
//    w.show();

   QQuickView view;
   view.setSource(QUrl("qrc:/gameMainUi.qml"));
   view.setFlags(Qt::FramelessWindowHint |Qt::WindowStaysOnTopHint);

   view.showFullScreen();
    return a.exec();
}
