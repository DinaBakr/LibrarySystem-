#ifndef RETURN1_H
#define RETURN1_H

#include <QDialog>

namespace Ui {
class return1;
}

class return1 : public QDialog
{
    Q_OBJECT

public:
    explicit return1(QWidget *parent = nullptr);
    ~return1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::return1 *ui;
};

#endif // RETURN1_H
