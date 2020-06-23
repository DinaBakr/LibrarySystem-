#include "returnbook.h"
#include "ui_returnbook.h"
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
#include<return1.h>

using namespace std;

returnbook::returnbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnbook)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/used-books-store-2.jpg");
     int w= ui->label40->width();
     int l= ui->label40->height();
     ui->label40->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

returnbook::~returnbook()
{
    delete ui;
}

int login(string n,string p);
void returnbook::on_pushButton_clicked()
{
        QString x=ui->username->text();
        QString f=ui->password->text();
        int g =login(x.toStdString(),f.toStdString());
        if(g==0)
        {
           QMessageBox ::critical(this,"Login","Sorry you are not a member");
        }
        else
        { return1 secdia;
            secdia.exec();

        }


}

