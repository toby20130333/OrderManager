#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QString>
#include <QSpinBox>
#include <QDebug>
extern QSqlDatabase db;
extern QString value;
namespace Ui {
    class login;
}

class login : public QMainWindow {
    Q_OBJECT
public:
    login(QWidget *parent = 0);
    ~login();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::login *ui;
   // QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *model1;
    QSqlTableModel *model2;
    QSqlTableModel *model3;
    QSqlTableModel *model4;
    QString str;

private slots:

    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // LOGIN_H
