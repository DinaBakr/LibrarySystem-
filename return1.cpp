#include "return1.h"
#include "ui_return1.h"
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

return1::return1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::return1)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/12sd.jpg");
     int w= ui->label90->width();
     int l= ui->label90->height();
     ui->label90->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

return1::~return1()
{
    delete ui;
}
int returnbookfine(string n,string book_to_return,string date);
int returnbookval(string n,string book_to_return,string date);
int addbookfunc(string x,string y);
void return1::on_pushButton_clicked()
{
    QString x=ui->username->text();
    QString y=ui->bookname->text();
    QString z=ui->returndate->text();

    QString a=ui->author->text();



     int f= returnbookfine(x.toStdString(),y.toStdString(),z.toStdString());

            if(f!=0)
            {
                //int xd=returnbookfine(x.toStdString(),y.toStdString(),z.toStdString());


             QMessageBox ::critical(this,"Return Book",
                                    QString("You have to pay %1 dollars").arg(f));

            }
            else if(f==0)
            {

                QMessageBox ::information(this,"Return Book","Thank you! We hope to serve you again");
                addbookfunc(y.toStdString(),a.toStdString());
            }

}
