#ifndef CANCELINSTALL_H
#define CANCELINSTALL_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QLabel>
#include "mypushbutton.h"
class CancelInstall : public QWidget
{
    Q_OBJECT
public:
    explicit CancelInstall(QWidget *parent = 0);
    myPushButton* lb_Min;
    myPushButton* lb_Close;

    myPushButton* lb_Yes;
    myPushButton* lb_No;

    QLabel* lb_text;
signals:
    void signalUserOption(int);
protected:
    void paintEvent(QPaintEvent *);

public slots:
    void slotMinOption();
    void slotCloseOption();
    void slotCancelOption();
    void slotContiueOption();
};

#endif // CANCELINSTALL_H
