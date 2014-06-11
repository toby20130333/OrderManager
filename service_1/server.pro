# -------------------------------------------------
# Project created by QtCreator 2013-03-20T08:50:35
# -------------------------------------------------
QT += network \
    sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app

SOURCES += main.cpp \
    server.cpp \
    caidan.cpp

HEADERS += server.h \
    caidan.h

FORMS += server.ui \
    caidan.ui

RESOURCES += src.qrc
