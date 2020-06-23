#include "cancelmembership.h"
#include "ui_cancelmembership.h"
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<QString>
#include<QMessageBox>
#include<fstream>
using namespace std;




cancelmembership::cancelmembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cancelmembership)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/images.jpg");
     int w= ui->label50->width();
     int l= ui->label50->height();
     ui->label50->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

cancelmembership::~cancelmembership()
{
    delete ui;
}

int cancel_membership(string username,string password);
int login(string n,string p);
void cancelmembership::on_pushButton_clicked()
{QString x=ui->nametodele->text();
 QString y=ui->passtodele->text();
    int f= login(x.toStdString(),y.toStdString());
    if(f==0)
    {
        QMessageBox::critical(this,"Cancel","You are not a member");

    }
    else if(f==1)
    {int z= cancel_membership(x.toStdString(),y.toStdString());
        if(z==0){
             QMessageBox::critical(this,"Cancel","Problem Occured Please try again!");

        }
        else{
            QMessageBox::information(this,"Cancel","Your account has been removed");

        }

    }
}


