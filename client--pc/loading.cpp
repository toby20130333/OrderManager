
#include "loading.h"
#include "ui_loading.h"

loading::loading(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loading)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);         //删除标题栏
    this->setWindowOpacity(0.9);
    ui->tableView->setEditTriggers(0);                    //设置tableview在外面不可以改变
    //ui->pushButton->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;"); //设置属性为圆角

    //构造函数中读取数据库桌子的信息,利用tableview控件显示
    model=new QSqlTableModel (ui->tableView,db);
    model->setTable("table_infor");
    model->select();
    ui->tableView->setModel(model);
    ui->spinBox->setRange(0,10);
    qDebug()<<" loading::loading";
    //设置spinbox的范围
}

loading::~loading()
{
    delete ui;
}

void loading::changeEvent(QEvent *e)
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


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

 Name::on_spinBox_editingFinished();
 Founction::从spinbox控件获取值
            并且转换为相应类型
 Return::void;
 Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void loading::on_spinBox_editingFinished()
{

    qDebug()<<" loading::on_spinBox_editingFinished ";
    m = ui->spinBox->value();                             //从spinbox获取顾客选择的桌号
    value = QString::number(m,10);                        //int类型以十进制的方式转换为QString类型

}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
 Name::on_pushButton_clicked();
 Founction::通过pushbutton的点击实现
            读取数据库中table_infor中
            的数据，显示在tableview中
 Return::void;
 Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void loading::on_pushButton_clicked()
{
    qDebug()<<" loading::on_pushButton_clicked ";
    QSqlQuery  query(db);                                 //定义QSqlQuery变量
    query.exec("select * from table_infor ");             //查询桌子信息
    while(query.next())
    {

        QString result = query.value(0).toString();        //读取第一个字段的值

        /*当在数据库中查询的第一个字段等于用户选择的桌号的时候，判断桌子是否有人*/
        if(result == value)
        {
            QString str = query.value(1).toString();
            int n = str.toInt();
            if(n == 0)                                     //如果顾客输入的桌号目前没有人，则跳转至点菜界面
            {
                    QString sqlstr="update table_infor set status = 1 where num =";
                    sqlstr+=value;
                    query.exec(sqlstr);                    //进入点菜界面之前，把相应桌子状态改变

            }
            else if(n == 1)                                //如果顾客输入的桌号有人，则跳出message提示
            {
                QMessageBox messageb(QMessageBox::NoIcon,"Warning","Sorry, this table has been used!");
                messageb.setIconPixmap(QPixmap(":/new/prefix1/3.png"));               //设置messagebox背景图片
                messageb.exec();

            }

        }

    }

}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_2_clicked();
  Founction::通过pushbutton点击事件,
             重新去数据库查找数据,实现
             刷新的功能.
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void loading::on_pushButton_2_clicked()
{
    qDebug()<<" loading::on_pushButton_2_clicked ";
    model=new QSqlTableModel (ui->tableView,db);
    model->setTable("table_infor");
    model->select();
    ui->tableView->setModel(model);
}

/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_3_clicked();
  Founction::加菜功能.直接跳转界面
  Return::void;
  Parameter::无;

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void loading::on_pushButton_3_clicked()
{
    qDebug()<<" loading::on_pushButton_3_clicked ";
    login *a = new login();               //界面跳转
    a->show();
    this->close();
}

void loading::on_pushButton_4_clicked()
{
    this->close();
}
