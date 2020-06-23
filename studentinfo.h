#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <QDialog>

namespace Ui {
class studentinfo;
}

class studentinfo : public QDialog
{
    Q_OBJECT

public:
    explicit studentinfo(QWidget *parent = nullptr);
    ~studentinfo();

private slots:
    void on_nameinfo_linkActivated(const QString &link);

private:
    Ui::studentinfo *ui;
};

#endif // STUDENTINFO_H
