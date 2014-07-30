#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <math.h>
#include <qmath.h>
#include <QLabel>
#include <QFontDatabase>
#include <QProgressBar>
#include <QDebug>
#include <QStackedWidget>
#include <QLineEdit>
#include <QTimer>
#include <QMessageBox>
#ifdef Q_OS_WIN
#include <windows.h>
#include <shlobj.h>
#include <winerror.h>
#endif

#include "mypushbutton.h"
#include "choosepathwidget.h"
#include "welcomewidget.h"
#include "installwidget.h"
#include "installedwidget.h"
#include "cancelinstall.h"
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    bool canmove;
    QStackedWidget* m_stack;
    QTimer* m_ShowInstall;

    ChoosePathWidget* m_ChooseWid;
    WelComeWidget* m_WelCome;
    InstallWidget* m_install;
    InstalledWidget* m_installed;
    CancelInstall* m_cancel;
    QPoint oldPos;
    QString loadFontFamilyFromTTF();

    bool ReplaceICO(LPCTSTR lpszApp, LPCTSTR lpszICO);
    void appendFile();

    void setValueChanged();

    bool CreateFileShortcut(LPCSTR lpszFileName,
                            LPCSTR lpszLnkFileDir, LPCSTR lpszLnkFileName,
                            LPCSTR lpszWorkDir, WORD wHotkey,
                            LPCTSTR lpszDescription, int iShowCmd = SW_SHOWNORMAL);
    void modifyReg(int flag);
    QString getWinrarPath();
    void userWinrar(QString m_name,QString WinRARPath);
    void addZijieyaData();
    void selfJieya();

public slots:
    void slotMinOption();
    void slotCloseOption();
    void slotShowChooseWid();
    void slotShowInstalling();
    void slotShowInstalled();
    void slotRunApp();

    void slotUserOption(int);
    void slotUserOption2(int);
    void slotUserOption3(int);
    void slotUserOption4(int);
protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
};

#endif // WIDGET_H
