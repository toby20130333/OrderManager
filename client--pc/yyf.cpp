#include "yyf.h"
#include "ui_yyf.h"
#include "login.h"
#include "loading.h"
#include "illus.h"
extern QString value;                                          //声明全局变量
extern QSqlDatabase db;

yyf::yyf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yyf)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);            //删除标题栏
    ui->spinBox->setRange(0,9);
    ui->spinBox_2->setRange(0,9);
    ui->spinBox_3->setRange(0,9);

    tcpSocket = new QTcpSocket(this);                   //定义新的连接描述符
    tcpSocket->connectToHost("localhost",9999);     //与指定IP和端口进行连接
    QObject::connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_slot()));  //建立连接与槽函数的连接

}

yyf::~yyf()
{
    delete ui;
}

void yyf::setValue()
{
    QSqlQuery  query(db);
    query.exec("select * from infor ");

    /* 以'/'形式拆分value字符串,存放在QStringList链表中 */
    qDebug()<<" yyf::yyf "<<value;
    if(value != ""){
        info_list = value.split("/");
        qDebug()<<" yyf::info_list "<<info_list;
        QString str = info_list.at(0);    //第一个节点为桌号
        ui->lineEdit->setText(str);

        /*　循环链表所有节点 */
        for(int i=1;i<=info_list.count();i++)
        {
            qDebug()<<" yyf::while "<<value;
            while(query.next())                   //循环查找数据库中数据
            {
                /*如果数据库中某条数据的第一个字段的值与链表节点的值相等　查找出这条数据所有字段的值*/
                qDebug()<<" yyf::next "<<query.value(0).toString()<<" "<<info_list.at(i);
                if(query.value(0).toString() == info_list.at(i))
                {
                    QString result = query.value(0).toString();
                    result +="   ";
                    result += query.value(1).toString();
                    result +="   ";
                    result += query.value(2).toString();
                    result +="   ";
                    result += query.value(3).toString();
                    result +="\n";
                    qDebug()<<" yyf::query "<<result;
                    ui->textEdit->append(result);
                    continue;
                }
            }
        }
        qDebug()<<" yyf::end ";
    }
}

void yyf::changeEvent(QEvent *e)
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

void yyf::connected_slot()
{
    qDebug()<<"yyf::connected_slot()  "<<endl;
    QObject::connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readDate()));

}
/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::readDate().
  Founction::接收服务端发回的信息,如果
             服务端发回的字符是"yes",
             则表示数据报发送成功.
  Return::void.
  Parameter::无

 *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void yyf::readDate()
{

    /*字符类型的转换*/
    QByteArray recvData = tcpSocket ->readLine();
    QTextCodec *codec = QTextCodec ::codecForName("KOI8-R");
    QString string =codec->toUnicode(recvData);
    QString dst("yes");

    /*如果接收到的数据为"yes",则提示发送成功*/
    if(string == dst)
    {
        QMessageBox::StandardButton rb = QMessageBox::information(NULL, "Message", "success to send!", QMessageBox::Yes, QMessageBox::Yes);
        //QMessageBox::standardButton rb = QMessageBox::messageb(QMessageBox::NoIcon,"Warning","Failed to send!");
        // QMessageBox messageb(QMessageBox::NoIcon,"Warning","success to send!");
        //mess/ ageb.setIconPixmap(QPixmap("64.png"));
        //messageb.exec();
        if(rb == QMessageBox::Yes)                 //判断QMessageBox的返回值,如果点击yes则实现界面跳转
        {
            illus *m = new illus();
            //loading *m = new loading();
            m->show();

            this->close();

        }


    }
}


/*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#

  Name::on_pushButton_clicked()
  Founction::发送报文给服务端
  Return::void
  Parameter::无

  *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*/
void yyf::on_pushButton_clicked()
{
    QByteArray message;
    message =value.toUtf8();      //QString类型数据转化为QByteArray

    if(tcpSocket->write(message)== -1)      //发送数据给服务端,如果失败给出错误提示(message)
    {
        QMessageBox messageb(QMessageBox::NoIcon,"Warning","Failed to send!");
        messageb.setIconPixmap(QPixmap(":/new/prefix1/64.png"));         //设置messagebox提示框的背景图片
        messageb.exec();
    }
}

void yyf::on_pushButton_2_clicked()
{
    qDebug()<<"yyf::on_pushButton_2_clicked ";
    login *a = new login();
    a->show();
    this->close();
}

void yyf::on_pushButton_3_clicked()
{


    int a = ui->spinBox->value();
    QString aa = QString::number(a,10);

    int b = ui->spinBox_2->value();
    QString tmp = QString::number(b,10);
    aa += tmp;                                     //组合spinbox获取的值

    int c = ui->spinBox_3->value();
    QString dst = QString::number(c,10);
    aa +=dst;

    QSqlQuery  query(db);

    for(int i=1;i<info_list.count();i++)
    {
        if(info_list.at(i) == aa)
        {
            ui->textEdit->clear();                  //清空textEdit内数据
            info_list.removeAt(i);                  //删除要修改的菜单的编号的节点
            value = info_list.join("/");            //重新组合链表,存放在全局变量value中
            break;
        }
    }

    ui->textEdit->clear();
    query.exec("select * from infor ");

    for(int i=1;i<info_list.count();i++)
    {
        while(query.next())                   //循环查找数据库中数据
        {
            //如果数据库中某条数据的第一个字段的值与链表节点的值相等　查找出这条数据所有字段的值
            if(query.value(0).toString() == info_list.at(i))
            {

                QString result = query.value(0).toString();
                result +="   ";
                result += query.value(1).toString();
                result +="   ";
                result += query.value(2).toString();
                result +="   ";
                result += query.value(3).toString();
                result +="\n";


                ui->textEdit->append(result);                   //追加方式写入textEdit中
                break;
            }
        }
    }
    /*清空spinbox的值*/
    ui->spinBox->clear();
    ui->spinBox_2->clear();
    ui->spinBox_3->clear();
}
