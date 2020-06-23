#include "addbook.h"
#include "ui_addbook.h"
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<QString>
#include<QMessageBox>
#include<fstream>
using namespace std;

addbook::addbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);
    QPixmap pix11(":/sw/sw/download (1).jpg");
     int w= ui->labeladd->width();
     int l= ui->labeladd->height();
     ui->labeladd->setPixmap(pix11.scaled(w,l,Qt::KeepAspectRatio));
}

addbook::~addbook()
{
    delete ui;
}

int addbookfunc(string x,string y);
void addbook::on_pushButton_clicked()
{
    QString x=ui->bookname->text();
    QString y=ui->author->text();
   int z=addbookfunc(x.toStdString(),y.toStdString());
   if(z==1){
       QMessageBox ::information(this,"Add Book","Book is added successfully");
   }
   else
   {
       QMessageBox ::critical(this,"Add Book","Book is not added ");
   }


}
