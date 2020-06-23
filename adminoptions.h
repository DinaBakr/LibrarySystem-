#ifndef ADMINOPTIONS_H
#define ADMINOPTIONS_H

#include <QDialog>

namespace Ui {
class adminoptions;
}

class adminoptions : public QDialog
{
    Q_OBJECT

public:
    explicit adminoptions(QWidget *parent = nullptr);
    ~adminoptions();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::adminoptions *ui;
};

#endif // ADMINOPTIONS_H
