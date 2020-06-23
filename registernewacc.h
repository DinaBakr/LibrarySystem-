#ifndef REGISTERNEWACC_H
#define REGISTERNEWACC_H

#include <QDialog>

namespace Ui {
class registernewacc;
}

class registernewacc : public QDialog
{
    Q_OBJECT

public:
    explicit registernewacc(QWidget *parent = nullptr);
    ~registernewacc();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registernewacc *ui;
};

#endif // REGISTERNEWACC_H
