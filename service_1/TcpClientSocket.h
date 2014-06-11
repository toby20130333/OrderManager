#ifndef TCPCLIENTSOCKET_H
#define TCPCLIENTSOCKET_H
#include <QtGui>
#include <QtNetwork>
class TcpClientSocket:public QTcpSocket{
    Q_OBJECT
public:
    TcpClientSocket(QObject *parent=0);
signals:
    void updateClient(QString,int);
    void disconnected(int);
public slots:
    void dataReceived();
    void slotDisconnected();
};

#endif // TCPCLIENTSOCKET_H
