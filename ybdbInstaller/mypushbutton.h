#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QStringList>
#include <QMoveEvent>
class myPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit myPushButton(QWidget *parent = 0);
    explicit myPushButton(QStringList iconStr,QWidget *parent=0);
    explicit myPushButton(QStringList iconStr,QString txtStr,QWidget *parent=0);

    QStringList iconStatus;
    void setIconLst(QStringList);
signals:
    
public slots:

private:
    void setBkPalette(int transparency);//设置透明度
protected:
    void enterEvent(QEvent *);//鼠标进入事件
    void leaveEvent(QEvent *);//离开
    void mousePressEvent(QMouseEvent *e);//点击
    void mouseReleaseEvent(QMouseEvent *e);//释放
    void mouseMoveEvent(QMouseEvent *e);
};

#endif // MYPUSHBUTTON_H
