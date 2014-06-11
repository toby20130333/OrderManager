#ifndef LOADING_H
#define LOADING_H


#include <QDialog>
#include <login.h>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

extern QSqlDatabase db;
extern QString value;

namespace Ui {
    class loading;
}

class loading : public QDialog {
    Q_OBJECT
public:
    loading(QWidget *parent = 0);
    ~loading();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::loading *ui;
   // QSqlDatabase db;
    QSqlTableModel *model;
    int m;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_spinBox_editingFinished();
};

#endif // LOADING_H
