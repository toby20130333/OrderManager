#include "illus.h"
#include "ui_illus.h"
#include "loading.h"

illus::illus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::illus)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::FramelessWindowHint);         //删除标题栏
    qDebug()<<"illus::illus--------------> ";
}

illus::~illus()
{
    delete ui;
}

void illus::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_clicked()
  Founction::跳转至主界面
  Return::void
  Parameter::void.

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void illus::on_pushButton_clicked()
{
    qDebug()<<"illus::on_pushButton_clicked--------------> ";
    loading *w = new loading();
    w->show();
    this->close();
}
