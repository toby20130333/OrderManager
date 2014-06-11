#ifndef YYF_H
#define YYF_H

#include <QDialog>
#include <QString>
#include <QStringList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QTcpSocket>
#include <QByteArray>
#include <QTextCodec>
#include <QString>
#include <QMessageBox>


namespace Ui {
    class yyf;
}

class yyf : public QDialog {
    Q_OBJECT
public:
    yyf(QWidget *parent = 0);
    ~yyf();
    void setValue();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::yyf *ui;
   //  QSqlDatabase db;
    QStringList info_list;
    QTcpSocket *tcpSocket;


private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void connected_slot();
    void readDate();
};

#endif // YYF_H
