#include "studentinfo.h"
#include "ui_studentinfo.h"
#include<student.h>

studentinfo::studentinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentinfo)
{
    ui->setupUi(this);
    QPixmap pix11(":/sw/sw/datainfo.jpg");
     int w= ui->label70->width();
     int l= ui->label70->height();
     ui->label70->setPixmap(pix11.scaled(w,l,Qt::KeepAspectRatio));
     //QString u=ui->username->text();
    // ui->nameinfo->setText(u);

}

studentinfo::~studentinfo()
{
    delete ui;
}


void studentinfo::on_nameinfo_linkActivated(const QString &link)
{

}
