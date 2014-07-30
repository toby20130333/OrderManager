#include "choosepathwidget.h"
#include <QApplication>

ChoosePathWidget::ChoosePathWidget(QWidget *parent) :
    QWidget(parent)
{
    this->resize(486,386);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    setStyleSheet ("background-color:transparent");
    setStyleSheet ("venus--TitleBar {background-color:rgb(0,0,0);color: rgb(255,255,255);}");
    QFont font(tr("微软雅黑"));
    font.setBold(false);
    font.setPixelSize(12);

    QStringList spaceLst;
    spaceLst.clear();
    spaceLst.append(":/storage_d.png");
    spaceLst.append(":/storage_h.png");
    spaceLst.append(":/storage_p.png");
    lb_Space = new myPushButton(spaceLst,this);
    lb_Space->resize(360,30);
    lb_Space->move(42,180+42);

    lb_Text = new QLabel(this);
    lb_Text->resize(356,28);
    lb_Text->move(46,180+43);
    lb_Text->setText(QCoreApplication::applicationDirPath().replace("/","\\"));
    lb_Text->setFont(font);

    //设置颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,QColor("#9bd4f3"));
    lb_Text->setPalette(pa);


    ln_Choose = new QLineEdit(this);
    ln_Choose->resize(356,28);
    ln_Choose->move(29,180+31);
    //    lb_Choose->setFont(font);
    ln_Choose->setText(QCoreApplication::applicationDirPath());
    ln_Choose->hide();
    QStringList chooseLst;
    chooseLst.clear();
    chooseLst.append(":/cd_n.png");
    chooseLst.append(":/cd_h.png");
    chooseLst.append(":/cd_p.png");

    lb_Choose = new myPushButton(chooseLst,this);
    connect(lb_Choose,SIGNAL(clicked()),this,SLOT(slotChoosePath()));
    lb_Choose->resize(37,30);
    lb_Choose->move(this->width()-75,210+12);
    lb_Choose->show();

    lb_Text1 = new QLabel(this);
    lb_Text1->resize(this->width()-76,30);
    lb_Text1->move(34+12,180+12);
    lb_Text1->setText(QString::fromUtf8("所需空间 : 50MB             可用空间 : <font color='#ff5548'>1.2G</font>"));
    lb_Text1->setFont(font);
    //设置颜色
    QPalette pa1;
    pa1.setColor(QPalette::WindowText,QColor("#80b9d9"));
    lb_Text1->setPalette(pa1);

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

    QStringList installLst;
    installLst.clear();
    installLst.append(":/install_d.png");
    installLst.append(":/install_h.png");
    installLst.append(":/install_p.png");

    lb_InstallBtn = new myPushButton(installLst,this);
    connect(lb_InstallBtn,SIGNAL(clicked()),this,SIGNAL(signalNextView()));
    lb_InstallBtn->resize(90,30);
    lb_InstallBtn->move(this->width()-116-12,this->height()-58-12);
}

ChoosePathWidget::~ChoosePathWidget()
{

}

void ChoosePathWidget::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/background2.png").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);

//    QPainterPath path;
//    path.setFillRule(Qt::WindingFill);
//    path.addRect(10, 10, this->width()-20, this->height()-20);

////    QPainter painter(this);
//    painter.setRenderHint(QPainter::Antialiasing, true);
//    painter.fillPath(path, QBrush(Qt::white));

//    QColor color(0, 0, 0, 50);
//    for(int i=0; i<10; i++)
//    {
//        QPainterPath path;
//        path.setFillRule(Qt::WindingFill);
//        path.addRect(10-i, 10-i, this->width()-(10-i)*2, this->height()-(10-i)*2);
//        color.setAlpha(150 - qSqrt(i)*50);
//        painter.setPen(color);
//        painter.drawPath(path);
//    }

}

void ChoosePathWidget::slotMinOption()
{
    emit signalUserOption(0);
}

void ChoosePathWidget::slotCloseOption()
{
     emit signalUserOption(1);
}

void ChoosePathWidget::slotChoosePath()
{
    QString dirPath = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                        "./",
                                                        QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
    lb_Text->setText(dirPath.replace("/","\\"));

}
