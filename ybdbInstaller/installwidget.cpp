#include "installwidget.h"
#include <QApplication>
InstallWidget::InstallWidget(QWidget *parent) :
    QWidget(parent),indexPro(0)
{
    this->resize(486,386);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    setStyleSheet ("background-color:transparent");
    setStyleSheet ("venus--TitleBar {background-color:rgb(0,0,0);color: rgb(255,255,255);}");
    QFont font(tr("微软雅黑"));
    font.setBold(false);
    font.setPixelSize(30);
    lb_Progress = new QLabel(this);
    lb_Progress->resize(185,90);
    lb_Progress->move((this->width()-210-12),this->height()-210-12);
    lb_Progress->setText(QString::fromUtf8("<font size='30'>0</font>%"));

    QString selfFont = loadFontFamilyFromTTF();
    QFont f(selfFont);
    f.setPixelSize(38);
    lb_Progress->setFont(f);
    //设置颜色
    QPalette pa1;
    pa1.setColor(QPalette::WindowText,QColor("#ffffff"));
    lb_Progress->setPalette(pa1);

    lb_Text = new QLabel(this);
    lb_Text->resize(80,30);
    lb_Text->move((this->width()-130),this->height()-76);
    lb_Text->setText(QString::fromUtf8("正在安装..."));
    font.setPixelSize(14);
    lb_Text->setFont(font);
    //设置颜色
    QPalette pa2;
    pa2.setColor(QPalette::WindowText,QColor("#80b9d9"));
    lb_Text->setPalette(pa2);

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

    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(slotUpdate()));
    m_timer->start(100);

}

void InstallWidget::slotMinOption()
{
  emit signalUserOption(0);
}

void InstallWidget::slotCloseOption()
{
    emit signalUserOption(1);
}

void InstallWidget::slotUpdate()
{
    indexPro += 2;
    if(indexPro >= 100)
    {
        indexPro = 100;
        emit signalFinished();
        lb_Text->setText(QString::fromUtf8("安装完成"));
        m_timer->stop();
    }
    QString str = QString("<font size='30'>")+QString::number(indexPro)+QString("</font>%");
    lb_Progress->setText((str));
    //qDebug()<<"indexPro:"<<indexPro<<str;
}

void InstallWidget::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/background2.png").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}
QString InstallWidget::loadFontFamilyFromTTF()
{
    static QString font;
    static bool loaded = false;
    if(!loaded)
    {
        loaded = true;
        int loadedFontID = QFontDatabase::addApplicationFont(":/HELVETICANEUELTPRO-THEX.OTF");
        QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
        if(!loadedFontFamilies.empty())
            font = loadedFontFamilies.at(0);
    }
    return font;
}
