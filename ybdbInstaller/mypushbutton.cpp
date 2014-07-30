/******************************************************
* function:此类为绘制一个控制按钮的继承QPushButton类   *
* Author:  TobyYi                                                             *
* Date:    2013/10/10                                                        *
* SystemOS:Win 7/Win 8                                                 *
*******************************************************/
#include "mypushbutton.h"
#include <QPalette>
#include <QPixmap>

myPushButton::myPushButton(QWidget *parent) :
    QPushButton(parent)
{
}
myPushButton::myPushButton(QStringList iconStr, QWidget *parent):QPushButton(parent)
{
    iconStatus = iconStr;
    if(iconStatus.count() >= 2)
    {
        QPixmap pixmap(iconStatus.at(0));
        setIcon(QIcon(pixmap));
        setIconSize(pixmap.size());
        resize(pixmap.size());
        setBkPalette(0);//设置背景完全透明
        setFlat(true);
        setAutoFillBackground(true);
    }
}

myPushButton::myPushButton(QStringList iconStr, QString txtStr, QWidget *parent):QPushButton(parent)
{
    iconStatus = iconStr;
    if(iconStatus.count() >= 2)
    {
        QPixmap pixmap(iconStatus.at(0));
        setIcon(QIcon(pixmap));
        setIconSize(pixmap.size());
        resize(pixmap.size());
        setBkPalette(0);//设置背景完全透明
        setFlat(true);
        setAutoFillBackground(true);
        setText(txtStr);
    }
}

void myPushButton::setIconLst(QStringList lst)
{
    iconStatus = lst;
}
//AppleWebKit/538.1 &&AppleWebKit/534.34 http://twd2.me/index.php/archives/3873
void myPushButton::setBkPalette(int transparency)//设置背景透明度
{
   QPalette palette;
   palette.setBrush(QPalette::Button,QBrush(QColor(255,255,255,transparency)));
   setPalette(palette);
}
void myPushButton::enterEvent(QEvent *)
{
    //setBkPalette(120);
    QPixmap pixmap(iconStatus.at(1));
    setBkPalette(0.5);
    setIcon(QIcon(pixmap));

}
void myPushButton::leaveEvent(QEvent *)
{
    //setBkPalette(0);
    QPixmap pixmap(iconStatus.at(0));
    setIcon(QIcon(pixmap));
}
void myPushButton::mousePressEvent(QMouseEvent *e)
{
    //setBkPalette(150);
    QPixmap pixmap(iconStatus.at(2));
    setBkPalette(0.5);
    setIcon(QIcon(pixmap));
}
void myPushButton::mouseReleaseEvent(QMouseEvent *e)
{
    //setBkPalette(120);
    QPixmap pixmap(iconStatus.at(0));
    setIcon(QIcon(pixmap));
    emit clicked();//必须写上，否则不会发出clicked信号
}
void myPushButton::mouseMoveEvent(QMouseEvent *e)
{
    e->accept();
}
