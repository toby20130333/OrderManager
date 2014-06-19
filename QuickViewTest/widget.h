#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QImage>
#include <QLabel>
#include <QPainter>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    QLabel* imgLb;
    QImage createImageWithOverlay(const QImage& baseImage, const QImage& overlayImage);
};

#endif // WIDGET_H
