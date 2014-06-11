#include "caidan.h"
#include "ui_caidan.h"
#include <QMessageBox>
#include <QSqlError>
#include "QDebug"
#include <QTextCodec>
#include <QtCore>
caidan::caidan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caidan)
{
    ui->setupUi(this);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("rsr");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    if(db.open()){
        qDebug()<<"caidan open OK ";
        model=new QSqlTableModel (ui->tableView,db);
        model->setTable("infor");
        //  model->setFilter("status > 0");
        model->select();
        ui->tableView->setModel(model);
    }else{
        qDebug()<<"caidan open Error ";
    }

}

caidan::~caidan()
{
    delete ui;

}

void caidan::changeEvent(QEvent *e)
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

void caidan::on_pushButton_clicked()
{
    if (model->submitAll()) {
        model->database().commit();
    } else {
        model->database().rollback();
        QMessageBox::warning(this, tr("tableModel"),tr("数据库错误:%1").arg(model->lastError().text()));
    }
}

void caidan::on_pushButton_2_clicked()
{
    model->revertAll();
}

void caidan::on_pushButton_3_clicked()
{
    int rowNum = model->rowCount();
    model->insertRow(rowNum);

}

void caidan::on_pushButton_4_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行么？"),
                                  QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        model->revertAll();
    }
    else model->submitAll();
}

void caidan::on_pushButton_5_clicked()
{
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}

void caidan::on_pushButton_6_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}

void caidan::on_pushButton_7_clicked()
{
    QString name = ui->lineEdit->text();
    model->setFilter(QObject::tr("num = '%1'").arg(name));
    model->select();
}

void caidan::on_pushButton_8_clicked()
{
    model->setTable("infor");
    model->select();

}
