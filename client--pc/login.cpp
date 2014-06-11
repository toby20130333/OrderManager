#include "login.h"
#include "ui_login.h"
#include "QDebug"
#include "yyf.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);                   //删除标题栏

    /* 按条件在数据库中进行查询 */
    //编号小于'050'的菜品显示在tableview中
    //与mysql数据库的连接
    model=new QSqlTableModel (ui->tableView,db);
    model->setTable("infor");
    model->setFilter("num <='050'");                                   //设置查询条件
    model->select();
    ui->tableView->setModel(model);

    //编号大于'050'和小于'100'的菜品显示在tableview_2中
    model1=new QSqlTableModel (ui->tableView_2,db);
    model1->setTable("infor");
    model1->setFilter("'050'< num && num <'100'");
    model1->select();
    ui->tableView_2->setModel(model1);

    //编号大于'100'和小于'200'的菜品显示在tableview_3中
    model2=new QSqlTableModel (ui->tableView_3,db);
    model2->setTable("infor");
    model2->setFilter("'100'<= num && num <='200'");
    model2->select();
    ui->tableView_3->setModel(model2);

    //编号大于'200'和小于'300'的菜品显示在tableview_4中
    model3=new QSqlTableModel (ui->tableView_4,db);
    model3->setTable("infor");
    model3->setFilter("'200'< num && num <='300'");
    model3->select();
    ui->tableView_4->setModel(model3);

    //编号大于'300'的菜品显示在tableview_5中
    model4=new QSqlTableModel (ui->tableView_5,db);
    model4->setTable("infor");
    model4->setFilter("num > '300'");
    model4->select();
    ui->tableView_5->setModel(model4);


    /*设置spinbox的范围*/
    ui->spinBox->setRange(0,9);
    ui->spinBox_2->setRange(0,9);
    ui->spinBox_3->setRange(0,9);
    ui->spinBox_4->setRange(0,9);
    ui->spinBox_5->setRange(0,9);
    ui->spinBox_6->setRange(0,9);
    ui->spinBox_7->setRange(0,9);
    ui->spinBox_8->setRange(0,9);
    ui->spinBox_9->setRange(0,9);
    ui->spinBox_10->setRange(0,9);
    ui->spinBox_11->setRange(0,9);
    ui->spinBox_12->setRange(0,9);
    ui->spinBox_13->setRange(0,9);
    ui->spinBox_14->setRange(0,9);
    ui->spinBox_15->setRange(0,9);

}

login::~login()
{
    delete ui;
    db.close();
}

void login::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type())
    {
        case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
        default:
        break;
    }
}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*

  Name:: on_pushButton_clicked();
  Founction::按顺序获取3个spinbox的
             值(组合即为相应菜品的编号),
             把编号在与value(即桌号),组
             合成一条新的报文，存放在value中.
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_clicked()
{
    //获取第一个spinbox的值
    qDebug()<<"on_pushButton_clicked";
    int a = ui->spinBox->value();
    str = QString::number(a,10);
    int b = ui->spinBox_2->value();
    QString tmp = QString::number(b,10);
    str += tmp;                                     //组合spinbox获取的值

    int c = ui->spinBox_3->value();
    QString dst = QString::number(c,10);
    str +=dst;                                      //组合spinbox获取的值
    qDebug()<<"str"<<str;
    /*spinbox获取的值与value的值以'/'的方式组合在一起*/
    value = value + '/';
    value += str;
    qDebug()<<"value"<<value;
    //spinbox清空
    ui->spinBox->clear();
    ui->spinBox_2->clear();
    ui->spinBox_3->clear();
}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_2_clicked();
  Founction::界面跳转至yyf.ui
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_2_clicked()
{
    qDebug()<<"login::on_pushButton_2_clicked"<<value;
    yyf *a = new yyf();                //定义一个新的变量
    a->setValue();
    a->show();
    this->close();
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name:: on_pushButton_3_clicked();
  Founction::按顺序获取3个spinbox的
             值(组合即为相应菜品的编号),
             把编号在与value(即桌号),组
             合成一条新的报文，存放在value中.
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_3_clicked()
{

     int a = ui->spinBox_4->value();
     str = QString::number(a,10);

     int b = ui->spinBox_5->value();
     QString tmp = QString::number(b,10);
     str += tmp;

     int c = ui->spinBox_6->value();
     QString dst = QString::number(c,10);
     str +=dst;
     value = value + '/';
     value += str;
     ui->spinBox_4->clear();
     ui->spinBox_5->clear();
     ui->spinBox_6->clear();
}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_4_clicked();
  Founction::界面跳转至yyf.ui
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_4_clicked()
{
    yyf *a = new yyf();
    a->show();
    this->close();

}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name:: on_pushButton_5_clicked();
  Founction::按顺序获取3个spinbox的
             值(组合即为相应菜品的编号),
             把编号在与value(即桌号),组
             合成一条新的报文，存放在value中.
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_5_clicked()
{
    int a = ui->spinBox_7->value();
    str = QString::number(a,10);

    int b = ui->spinBox_8->value();
    QString tmp = QString::number(b,10);
    str += tmp;

    int c = ui->spinBox_9->value();
    QString dst = QString::number(c,10);
    str +=dst;
    value = value + '/';
    value += str;

    //qDebug()<<"aaaa"<<str;
    ui->spinBox_7->clear();
    ui->spinBox_8->clear();
    ui->spinBox_9->clear();
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*

  Name::on_pushButton_6_clicked();
  Founction::界面跳转至yyf.ui
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_6_clicked()
{
        yyf *a = new yyf();
        a->show();
        this->close();
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*

  Name:: on_pushButton_7_clicked();
  Founction::按顺序获取3个spinbox的
             值(组合即为相应菜品的编号),
             把编号在与value(即桌号),组
             合成一条新的报文，存放在value中.
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_7_clicked()
{
    int a = ui->spinBox_10->value();
    str = QString::number(a,10);

    int b = ui->spinBox_11->value();
    QString tmp = QString::number(b,10);
    str += tmp;

    int c = ui->spinBox_12->value();
    QString dst = QString::number(c,10);
    str +=dst;
    value = value + '/';
    value += str;

    //qDebug()<<"aaaa"<<str;
    ui->spinBox_10->clear();
    ui->spinBox_11->clear();
    ui->spinBox_12->clear();
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_8_clicked();
  Founction::界面跳转至yyf.ui;
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_8_clicked()
{
    yyf *a = new yyf();
    a->show();
    this->close();
}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*

  Name:: on_pushButton_9_clicked();
  Founction::按顺序获取3个spinbox的
             值(组合即为相应菜品的编号),
             把编号在与value(即桌号),组
             合成一条新的报文，存放在value中.
  Return::void;
  Parameter::无;

*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_9_clicked()
{
    int a = ui->spinBox_13->value();
    str = QString::number(a,10);

    int b = ui->spinBox_14->value();
    QString tmp = QString::number(b,10);
    str += tmp;

    int c = ui->spinBox_15->value();
    QString dst = QString::number(c,10);
    str +=dst;
    value = value + '/';
    value += str;

    qDebug()<<"aaaa"<<str;
    ui->spinBox_13->clear();
    ui->spinBox_14->clear();
    ui->spinBox_15->clear();
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*

  Name::on_pushButton_10_clicked();
  Founction::界面跳转至yyf.ui;
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void login::on_pushButton_10_clicked()
{
    yyf *a = new yyf();
    a->show();
    this->close();
}
