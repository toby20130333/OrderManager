#include "installedwidget.h"

InstalledWidget::InstalledWidget(QWidget *parent) :
    QWidget(parent)
{
    this->resize(486,386);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    setStyleSheet ("background-color:transparent");
    setStyleSheet ("venus--TitleBar {background-color:rgb(0,0,0);color: rgb(255,255,255);}");
    QFont font(tr("微软雅黑"));
    font.setBold(false);
    font.setPixelSize(30);

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


    lb_img = new QLabel(this);
    lb_img->resize(160,143);
    lb_img->move(this->width()-lb_img->width()-26,this->height()-243-12);
    QPixmap pix(":/computer.png");
    lb_img->setPixmap(pix);

    QStringList installLst;
    installLst.clear();
    installLst.append(":/run_d.png");
    installLst.append(":/run_h.png");
    installLst.append(":/run_p.png");

    lb_InstallBtn = new myPushButton(installLst,this);
    connect(lb_InstallBtn,SIGNAL(clicked()),this,SLOT(slotRunApp()));
    lb_InstallBtn->resize(90,30);
    lb_InstallBtn->move(this->width()-128,this->height()-70);
    lb_InstallBtn->show();
}

InstalledWidget::~InstalledWidget()
{

}
void InstalledWidget::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/background2.png").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}
void InstalledWidget::slotMinOption()
{
    emit signalUserOption(0);
}

void InstalledWidget::slotCloseOption()
{
    emit signalUserOption(1);
}

void InstalledWidget::slotRunApp()
{
    emit signalRunApp();
}
