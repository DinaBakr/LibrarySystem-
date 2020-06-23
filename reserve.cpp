#include "reserve.h"
#include "ui_reserve.h"
#include<iostream>
#include<QString>
#include<adminoptions.h>
#include<admin.h>
#include<string>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<QMessageBox>
#include<books.h>

using namespace std;

reserve::reserve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserve)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/uiop.jpg");
     int w= ui->label80->width();
     int l= ui->label80->height();
     ui->label80->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

reserve::~reserve()
{
    delete ui;
}
int reserve_book(string n,string book_to_resrve,string date);
void reserve::on_pushButton_clicked()
{
    QString x=ui->username->text();
    QString y=ui->bookname->text();
    QString z=ui->reservedate->text();
    int f= reserve_book(x.toStdString(),y.toStdString(),z.toStdString());
    if(f==0)
    {QMessageBox::critical(this,"Reservation","Sorry! the book is not available right now");}
    else if(f==1)
    {QMessageBox::information(this,"Reservation","Book is reserved successfully");}
    else if(f==2)
    {QMessageBox::warning(this,"Reservation","You can not reserve more than 5 books");}


}
