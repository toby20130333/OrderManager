#ifndef INSTALLWIDGET_H
#define INSTALLWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QLabel>
#include <QPainter>
#include <QTimer>
#include <QFontDatabase>
#include <QDebug>
#include "mypushbutton.h"
class InstallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InstallWidget(QWidget *parent = 0);
    QLabel* lb_Progress;
    QLabel* lb_Text;

    myPushButton* lb_Min;
    myPushButton* lb_Close;

    QTimer* m_timer;
    int indexPro;
    QString loadFontFamilyFromTTF();
signals:
   void signalFinished();
   void signalUserOption(int);
public slots:
    void slotMinOption();
    void slotCloseOption();
    void slotUpdate();
protected:
    void paintEvent(QPaintEvent *);
};

#endif // INSTALLWIDGET_H
