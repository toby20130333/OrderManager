#include <QDebug>
#include <QSqlQuery>
#include <QDateTime>
#include <QTextCodec>
#include <QtCore>
#include <QListWidget>
#include <QHBoxLayout>
#include <QIcon>
#include <QWidget>

#include "caidan.h"
#include "QSqlError"
#include "ui_server.h"
#include "server.h"

float totalsum;

server::server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::server)
{
    ui->setupUi(this);
    startTimer(5000);
    sev =new QTcpServer(this);
    sev->listen(QHostAddress::Any,9999);
    QObject::connect(sev,SIGNAL(newConnection()),this ,SLOT(newClientCom()));
    ui->setupUi(this);   
    //model=new QSqlTableModel (ui->tableView,db);
   // ui->tableView->setModel(model);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(on_pushButton_3_clicked()));
    QObject::connect(ui->listWidget, SIGNAL(currentTextChanged(const QString &)), ui->lineEdit, SLOT(setText(const QString &)));

}

server::~server()
{
    delete ui;
}

void server::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void server::newClientCom()
{

    clientsock =sev->nextPendingConnection();
    clients.append(clientsock);
    ui->textEdit->append("new connection!");
    QObject::connect(clientsock,SIGNAL(readyRead()),this,SLOT(readData()));
}
void server::readData()
{
    int i=0;
    for (i=0;i!=clients.size();i++)
    {
        clientsock = clients.at(i);

        QDateTime time = QDateTime::currentDateTime();
        QString str2 = time.toString("hh:mm:ss");
        ui->textEdit ->append(str2);
        QSqlQuery  query(db);
        QByteArray recvData = clientsock ->readLine();
        QTextCodec *codec = QTextCodec ::codecForName("KOI8-R");
        QString string =codec->toUnicode (recvData);
        clientsock->write(recvData);
        query.exec("select * from infor ");
        info_list = string.split("/");
        ui->textEdit ->append("table number:");
        ui->textEdit ->append(info_list.at(0));
        ui->textEdit_2 ->append("menu:");
        ui->textEdit_2 ->append(info_list.at(1));
        float num = 0;
        QString str = info_list.at(0);

         for(int i=1;i<info_list.count();i++)
         {
             while(query.next())
             {
                if(query.value(0).toString() == info_list.at(i))
                 {

                        QString  result = query.value(1).toString();
                        ui->textEdit->append(result);
                        num += query.value(2).toFloat();
                        totalsum += num;
                        break;


                  }
             }

         }


          ui->textEdit_2 ->append("total sum:");
          QString result2 = QString("%1").arg(num);
          ui->textEdit_2->append(result2);
          num = 0;
     }

}

void server::timerEvent(QTimerEvent *t)
{
    Q_UNUSED(t)
    widgets();


}
void server::on_pushButton_clicked()
{

   QString str="update table_infor set status = 0 where num =";
   str += ui->lineEdit->text();
   QSqlQuery query(db);
   query.exec(str);
   widgets();
}

void server::on_pushButton_2_clicked()
{
    caidan *a = new caidan();
    a->show();
}


void server::on_pushButton_3_clicked()
{
    ui->textEdit_3->clear();
    QString result3 = QString("%1").arg(totalsum);
    ui->textEdit_3->append(result3);
}

/*void server::on_pushButton_4_clicked()
{
    totalsum =0;
}*/
void server::widgets()
{
    ui->listWidget->clear();
    QString sqlstr;
    QString str2;
    QSqlQuery  query(db);
    query.exec("select * from table_infor ");
    while(query.next())
    {

        QString result = query.value(0).toString();
        QString str = query.value(1).toString();
        int n = str.toInt();
        if(n == 1)
        {
            ui->listWidget->addItem(new QListWidgetItem(result));
        }
}
}
