#ifndef BOOKS_H
#define BOOKS_H

#include <QDialog>

namespace Ui {
class books;
}

class books : public QDialog
{
    Q_OBJECT

public:
    explicit books(QWidget *parent = nullptr);
    ~books();

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::books *ui;
};

#endif // BOOKS_H
