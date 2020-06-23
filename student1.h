#ifndef STUDENT1_H
#define STUDENT1_H

#include <QDialog>

namespace Ui {
class student1;
}

class student1 : public QDialog
{
    Q_OBJECT

public:
    explicit student1(QWidget *parent = nullptr);
    ~student1();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::student1 *ui;
};

#endif // STUDENT1_H
