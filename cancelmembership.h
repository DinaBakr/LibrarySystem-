#ifndef CANCELMEMBERSHIP_H
#define CANCELMEMBERSHIP_H

#include <QDialog>

namespace Ui {
class cancelmembership;
}

class cancelmembership : public QDialog
{
    Q_OBJECT

public:
    explicit cancelmembership(QWidget *parent = nullptr);
    ~cancelmembership();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cancelmembership *ui;
};

#endif // CANCELMEMBERSHIP_H
