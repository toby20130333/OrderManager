#ifndef WELCOMEWIDGET_H
#define WELCOMEWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

class WelComeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WelComeWidget(QWidget *parent = 0);

signals:
protected:
    void paintEvent(QPaintEvent *);
public slots:

};

#endif // WELCOMEWIDGET_H
