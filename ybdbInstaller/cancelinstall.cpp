#include "cancelinstall.h"

CancelInstall::CancelInstall(QWidget *parent) :
    QWidget(parent)
{
    this->resize(486,386);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    setStyleSheet ("background-color:transparent");
    setStyleSheet ("venus--TitleBar {background-color:rgb(0,0,0);color: rgb(255,255,255);}");

    QFont font(tr("微软雅黑"));
    font.setBold(false);
    font.setPixelSize(18);

    QStringList minLst;
    minLst.clear();
    minLst.append(":/minimize_d.png");
    minLst.append(":/minimize_h.png");
    minLst.append(":/minimize_p.png");
    lb_Min = new myPushButton(minLst,this);
    connect(lb_Min,SIGNAL(clicked()),this,SLOT(slotMinOption()));
    lb_Min->resize(25,25);
    lb_Min->move(this->width()-65-12,22);

    QStringList closLst;
    closLst.clear();
    closLst.append(":/close_login_n.png");
    closLst.append(":/close_login_h.png");
    closLst.append(":/close_login_p.png");
    lb_Close = new myPushButton(closLst,this);
    connect(lb_Close,SIGNAL(clicked()),this,SLOT(slotCloseOption()));
    lb_Close->resize(25,25);
    lb_Close->move(this->width()-33-12,22);
    lb_Close->setEnabled(false);

    lb_text = new QLabel(this);
    lb_text->resize(160,33);
    lb_text->move((this->width()-lb_text->width())/2,(this->height()-lb_text->height())/2);
    lb_text->setText(QString::fromUtf8("真的要取消安装?"));
    lb_text->setFont(font);
    QPalette pa;
    pa.setColor(QPalette::WindowText,QColor("#ffffff"));
    lb_text->setPalette(pa);

    closLst.clear();
    closLst.append(":/yes_d.png");
    closLst.append(":/yes_h.png");
    closLst.append(":/yes_p.png");
    lb_Yes = new myPushButton(closLst,this);
    connect(lb_Yes,SIGNAL(clicked()),this,SLOT(slotCancelOption()));
    lb_Yes->resize(90,30);
    lb_Yes->move(this->width()-228,this->height()-70);

    closLst.clear();
    closLst.append(":/no_d.png");
    closLst.append(":/no_h.png");
    closLst.append(":/no_p.png");
    lb_No = new myPushButton(closLst,this);
    connect(lb_No,SIGNAL(clicked()),this,SLOT(slotContiueOption()));
    lb_No->resize(90,30);
    lb_No->move(this->width()-128,this->height()-70);
}

void CancelInstall::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/background2.png").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void CancelInstall::slotMinOption()
{
    emit signalUserOption(0);
}

void CancelInstall::slotCloseOption()
{
    emit signalUserOption(1);
}
void CancelInstall::slotCancelOption()
{
    emit signalUserOption(2);
}

void CancelInstall::slotContiueOption()
{
    emit signalUserOption(3);
}
