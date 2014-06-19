#include "myquickview.h"

MyQuickView::MyQuickView(QQuickView *parent) :
    QQuickView(parent),finishedhideAni(true),finishedshowAni(true)
{
    isHide = false;
    canmove = false;
    isHasMouseEvent = true;
    setSource(QUrl("gameMainUi.qml"));
    this->setFlags(Qt::FramelessWindowHint |Qt::WindowStaysOnTopHint);
    iHeight = this->height();
}

MyQuickView::~MyQuickView()
{

}

void MyQuickView::slotFinishedAnimation1()
{
    isHide =false;
    finishedshowAni = true;
    if(this->y() <=0)
    {
        this->setPosition(this->x(),0);
    }
    this->show();
    delete group2;
}

void MyQuickView::slotFinishedAnimation2()
{
    //qDebug()<<"slotFinishedAnimation2  "<<endl;
    isHide =true;
    finishedhideAni = true;
    delete group3;
    if(this->y() <=0)
    {
        this->setPosition(this->x(),0);
    }
    this->show();
}

void MyQuickView::mouseReleaseEvent(QMouseEvent *e)
{
    //qDebug()<<"mouseReleaseEvent  "<<endl;
    if(e->button() == Qt::LeftButton) {
        canmove = false;
    }
    QQuickView::mouseReleaseEvent(e);
}

void MyQuickView::mousePressEvent(QMouseEvent *e)
{
    qDebug()<<"MouseButtonPress  "<<endl;
    if( (e->pos().x()>= 20) && (e->pos().y()<=55) && (e->pos().x()<= this->width()-10))
    {
        //qDebug()<<"set moving status..........";
        canmove = true;
    }
    else
    {
        canmove = false;
        e->accept();
        QQuickView::mousePressEvent(e);
        return;
    }
    oldPos = e->pos();
    e->accept();
    QQuickView::mousePressEvent(e);
}

void MyQuickView::mouseMoveEvent(QMouseEvent *e)
{
    if(canmove)
    {
        //qDebug()<<"is moveing..........";
        setPosition(e->globalPos() - oldPos);
        QQuickView::mouseMoveEvent(e);
    }
    e->accept();
//    QQuickView::mouseMoveEvent(e);
}
bool MyQuickView::event(QEvent *e)
{
    //qDebug()<<"MyQuickView::event "<<e->type();
    //return QQuickView::event(e);
    switch (e->type()) {
    case QEvent::Enter:
    {
        //qDebug()<<"Enter  "<<isHide<<" "<<finishedshowAni;

        if(!isHasMouseEvent){
            e->ignore();
            return false;
        };
        if(isHide && finishedshowAni)
        {
            finishedshowAni = false;
            //qDebug()<<"QEvent::Enter in it  "<<this->width()<<"\n"<<this->height();
            group2 = new QParallelAnimationGroup;
            connect(group2,SIGNAL(finished()),this,SLOT(slotFinishedAnimation1()));
            QPropertyAnimation *animation = new QPropertyAnimation(this, "height");
            animation->setDuration(200);
            animation->setStartValue((10));
            animation->setEndValue(iHeight);

            QPropertyAnimation *animation3 = new QPropertyAnimation(this, "opacity");
            animation3->setDuration(500);
            animation3->setStartValue(0.8);
            animation3->setEndValue(1.0);

            group2->addAnimation(animation);
            group2->addAnimation(animation3);
            animation->setEasingCurve(QEasingCurve::InOutQuad);
            group2->start();
        }

    }break;
    case QEvent::Leave:
    {
        //qDebug()<<"Leave  "<<!isHide<<finishedhideAni;
        if(!isHasMouseEvent){e->ignore();return true;}
        if(this->position().y() <=0 && !isHide &&finishedhideAni)
        {
            finishedhideAni = false;
            group3 = new QParallelAnimationGroup;
            connect(group3,SIGNAL(finished()),this,SLOT(slotFinishedAnimation2()));
            QPropertyAnimation *animation = new QPropertyAnimation(this, "height");
            animation->setDuration(500);
            animation->setStartValue(iHeight);
            animation->setEndValue((10));

            QPropertyAnimation *animation3 = new QPropertyAnimation(this, "opacity");
            animation3->setDuration(500);
            animation3->setStartValue(1.0);
            animation3->setEndValue(0.8);

            group3->addAnimation(animation);
            group3->addAnimation(animation3);
            animation->setEasingCurve(QEasingCurve::InOutQuart);
            group3->start();
        }

    }break;
//    case QEvent::MouseMove:
//    {
//        //qDebug()<<"MouseMove  "<<endl;
//    }break;
//    case QEvent::MouseButtonPress:
//    {

//    }break;
//    case QEvent::MouseButtonRelease:
//    {
//        qDebug()<<"MouseButtonRelease  "<<endl;
//    }break;
//    case QEvent::Move:
//    {
//        qDebug()<<"Move  "<<endl;
//    }break;
    default:
        break;
    }
    return QQuickView::event(e);
}
