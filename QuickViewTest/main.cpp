#include "widget.h"
#include <QApplication>
#include "myquickview.h"
#include <QtQml>
#include "fileio.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qmlRegisterType<FileIO, 1>("FileIO", 1, 0, "FileIO");
    MyQuickView w;
    w.resize(300,600);
    w.show();

//    MyLine ww;
//    ww.show();
    return a.exec();
}
