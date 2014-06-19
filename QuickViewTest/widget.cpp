#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
        QImage baseImage("D:/TobyYi/yibansvn/github-project/OrderManager/QuickViewTest/logo_72.png");
        QImage overlayLogoff("D:/TobyYi/yibansvn/ReleaseVerYibanPC/YibanClient/image/skin/tab_btn_close_hover.png");
        imgLb = new QLabel(this);
        QImage logoffImage = createImageWithOverlay(baseImage, overlayLogoff);
        imgLb->setScaledContents(true);
        imgLb->setPixmap(QPixmap::fromImage(logoffImage));
        imgLb->show();
        logoffImage.save("xx.png");
}

Widget::~Widget()
{

}
QImage Widget::createImageWithOverlay(const QImage& baseImage, const QImage& overlayImage)
{
    QImage imageWithOverlay = QImage(baseImage.size(), QImage::Format_ARGB32_Premultiplied);
    QPainter painter(&imageWithOverlay);

    painter.setCompositionMode(QPainter::CompositionMode_Source);
    painter.fillRect(imageWithOverlay.rect(), Qt::transparent);

    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(0, 0, baseImage);

    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(baseImage.size().width()-overlayImage.size().width(),0, overlayImage);
//    QRect r(baseImage.size().width()-overlayImage.size().width(),0,10,10);
//    painter.drawText(r,"9");
    painter.end();

    return imageWithOverlay;
}
