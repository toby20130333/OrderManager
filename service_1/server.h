#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>
#include <QTextCodec>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QList>
//#include "tcpclientSocket.h"

namespace Ui {
    class server;
}

class server : public QMainWindow {
    Q_OBJECT
public:
    server(QWidget *parent = 0);
   // QList<TcpClientSocket *> tcpClientSocketList;

    ~server();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::server *ui;
    QTcpServer  *sev;
    QTcpSocket *clientsock;
    QSqlDatabase db;
    QSqlTableModel *model;
    QStringList info_list;
    QList <QTcpSocket*>clients;

private slots:
    //void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void timerEvent(QTimerEvent *);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void newClientCom();
    void readData();
    void widgets();
};

#endif // SERVER_H
