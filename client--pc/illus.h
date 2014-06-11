#ifndef ILLUS_H
#define ILLUS_H

#include <QDialog>
#include <QDebug>
namespace Ui {
    class illus;
}

class illus : public QDialog {
    Q_OBJECT
public:
    illus(QWidget *parent = 0);
    ~illus();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::illus *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // ILLUS_H
