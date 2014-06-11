#ifndef CAIDAN_H
#define CAIDAN_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
    class caidan;
}

class caidan : public QDialog {
    Q_OBJECT
public:
    caidan(QWidget *parent = 0);
    ~caidan();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::caidan *ui;
    QSqlTableModel *model;


private slots:
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // CAIDAN_H
