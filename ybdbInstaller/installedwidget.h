#ifndef INSTALLEDWIDGET_H
#define INSTALLEDWIDGET_H

#include <QWidget>
#include "mypushbutton.h"
#include <QLabel>
#include <QPainter>
class InstalledWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InstalledWidget(QWidget *parent = 0);
    ~InstalledWidget();
    myPushButton* lb_Min;
    myPushButton* lb_Close;

    QLabel* lb_img;
    QLabel* lb_run;
    myPushButton* lb_InstallBtn;
signals:
    void signalRunApp();
    void signalUserOption(int);
public slots:
    void slotMinOption();
    void slotCloseOption();
    void slotRunApp();
protected:
    void paintEvent(QPaintEvent *);
};

#endif // INSTALLEDWIDGET_H
