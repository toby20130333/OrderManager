#ifndef MYQUICKVIEW_H
#define MYQUICKVIEW_H

#include <QQuickView>
#include <QMouseEvent>
#include <QFocusEvent>
#include <QDebug>
#include <QParallelAnimationGroup>
#include <QPropertyAnimation>

class MyQuickView : public QQuickView
{
    Q_OBJECT
public:
    explicit MyQuickView(QQuickView *parent = 0);
    ~MyQuickView();
    bool canmove;
    QPoint oldPos;
    bool isHasMouseEvent;
    bool finishedhideAni;
    bool isHide;

    bool finishedshowAni;
    int iHeight;
    QParallelAnimationGroup* group;
    QParallelAnimationGroup* group2;
    QParallelAnimationGroup* group3;
    QParallelAnimationGroup* group4;
signals:

public slots:
    void slotFinishedAnimation1();
    void slotFinishedAnimation2();
protected:
    void mouseReleaseEvent(QMouseEvent *);
//    void focusInEvent(QEvent *);
//    void focusOutEvent(QEvent *);

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

    void changeEvent(QEvent *);
    bool event(QEvent *);
};

#endif // MYQUICKVIEW_H
