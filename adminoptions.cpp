#include "adminoptions.h"
#include "ui_adminoptions.h"
#include<addbook.h>
#include<registernewacc.h>
#include<reservebookadmin.h>
#include<returnbook.h>
#include<cancelmembership.h>
#include<books.h>
#include<admin.h>


adminoptions::adminoptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminoptions)
{
    ui->setupUi(this);

    QPixmap pix11(":/sw/sw/bg22.jpg");
     int w= ui->labe->width();
     int l= ui->labe->height();
     ui->labe->setPixmap(pix11.scaled(w,l,Qt::KeepAspectRatio));
}

adminoptions::~adminoptions()
{
    delete ui;
}

void adminoptions::on_pushButton_5_clicked()
{
    //hide();
    addbook secdia;
    secdia.exec();
}

void adminoptions::on_pushButton_clicked()
{// hide();
  registernewacc secdia;
  secdia.exec();
}

void adminoptions::on_pushButton_2_clicked()
{ //hide();
    books secdia;
    secdia.exec();

}

void adminoptions::on_pushButton_3_clicked()
{
   // hide();
       returnbook secdia;
       secdia.exec();
}

void adminoptions::on_pushButton_4_clicked()
{
   // hide();
       cancelmembership secdia;
       secdia.exec();
}

void adminoptions::on_pushButton_6_clicked()
{
    hide();
    Admin secdia;
    secdia.exec();


}
