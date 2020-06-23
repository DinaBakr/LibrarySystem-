#include "student1.h"
#include "ui_student1.h"
#include<books.h>
#include<studentinfo.h>
#include<student.h>
#include<group34.h>

student1::student1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student1)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/welcome.jpg");
     int w= ui->label60->width();
     int l= ui->label60->height();
     ui->label60->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

student1::~student1()
{
    delete ui;
}

void student1::on_pushButton_2_clicked()
{
    //hide();
    books secdia;
    secdia.exec();
}

void student1::on_pushButton_clicked()
{
    studentinfo secdia;
    secdia.exec();
}

void student1::on_pushButton_3_clicked()
{
    Student secdia;
    secdia.exec();
}
