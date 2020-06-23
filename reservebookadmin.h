#ifndef RESERVEBOOKADMIN_H
#define RESERVEBOOKADMIN_H

#include <QDialog>

namespace Ui {
class reservebookadmin;
}

class reservebookadmin : public QDialog
{
    Q_OBJECT

public:
    explicit reservebookadmin(QWidget *parent = nullptr);
    ~reservebookadmin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::reservebookadmin *ui;
};

#endif // RESERVEBOOKADMIN_H
