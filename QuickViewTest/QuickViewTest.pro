#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T13:09:44
#
#-------------------------------------------------

QT       += core gui quick qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EightGame
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myquickview.cpp \
    fileio.cpp

HEADERS  += widget.h \
    myquickview.h \
    fileio.h

OTHER_FILES += \
    myquickimage.qml \
    GameRomView.qml \
    GameView.qml \
    GameGuide.qml \
    GameGuideMain.qml \
    gameMainUi.qml \
    EightGame.qml \
    GameNextUI.qml \
    GameThirdUI.qml \
    android/AndroidManifest.xml \
    GameTips.qml \
    GameErrorTxt.qml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

RESOURCES += \
    eightrc.qrc
