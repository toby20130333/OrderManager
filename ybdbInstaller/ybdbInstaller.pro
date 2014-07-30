#-------------------------------------------------
#
# Project created by QtCreator 2013-12-27T13:51:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ybdbInstaller
TEMPLATE = app

QMAKESPEC  += win32-msvc2010
SOURCES += main.cpp\
        widget.cpp \
    mypushbutton.cpp \
    welcomewidget.cpp \
    choosepathwidget.cpp \
    installwidget.cpp \
    installedwidget.cpp \
    cancelinstall.cpp

HEADERS  += widget.h \
    mypushbutton.h \
    welcomewidget.h \
    choosepathwidget.h \
    installwidget.h \
    installedwidget.h \
    cancelinstall.h
win32:{
RC_FILE += install.rc
}
RESOURCES += \
    installrc.qrc
#LIBS += Shell32.dll
