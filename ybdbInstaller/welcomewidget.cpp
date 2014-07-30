#include "welcomewidget.h"

WelComeWidget::WelComeWidget(QWidget *parent) :
    QWidget(parent)
{
    this->resize(396,176);
}

void WelComeWidget::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/background1.png").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}
