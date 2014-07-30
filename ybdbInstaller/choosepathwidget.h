#ifndef CHOOSEPATHWIDGET_H
#define CHOOSEPATHWIDGET_H

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
#include <QLineEdit>
#include <QFileDialog>
#ifdef Q_OS_WIN
#include <windows.h>
#include <shlobj.h>
#endif

#include "mypushbutton.h"

class ChoosePathWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ChoosePathWidget(QWidget *parent = 0);
    ~ChoosePathWidget();

    QLabel* lb_logo;
    QLabel* lb_Text;
    QLabel* lb_Text1;

    myPushButton* lb_Min;
    myPushButton* lb_Close;

    myPushButton* lb_Space;
    myPushButton* lb_Choose;
    myPushButton* lb_InstallBtn;

    QLineEdit* ln_Choose;
    QLabel* lb_installTxt;
    QLabel* lb_ProgressTxt;
signals:
    void signalNextView();
    void signalUserOption(int);
protected:
    void paintEvent(QPaintEvent *);

public slots:
    void slotMinOption();
    void slotCloseOption();
    void slotChoosePath();
};

#endif // CHOOSEPATHWIDGET_H
