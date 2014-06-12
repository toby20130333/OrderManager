#include "widget.h"
#include <QApplication>
#include "myquickview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyQuickView w;
    w.resize(300,600);
    w.show();

    return a.exec();
}
