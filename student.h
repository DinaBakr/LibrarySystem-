#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>

namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = nullptr);
    ~Student();

private slots:
    void on_pushButton_login_4_clicked();

private:
    Ui::Student *ui;
};

#endif // STUDENT_H
