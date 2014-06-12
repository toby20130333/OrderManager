#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T13:09:44
#
#-------------------------------------------------

QT       += core gui quick qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuickViewTest
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myquickview.cpp

HEADERS  += widget.h \
    myquickview.h

OTHER_FILES += \
    myquickimage.qml
