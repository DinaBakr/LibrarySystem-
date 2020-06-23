#ifndef GROUP34_H
#define GROUP34_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Group34; }
QT_END_NAMESPACE

class Group34 : public QMainWindow
{
    Q_OBJECT

public:
    Group34(QWidget *parent = nullptr);
    ~Group34();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Group34 *ui;
};
#endif // GROUP34_H
