#include "registernewacc.h"
#include "ui_registernewacc.h"
#include<QPixmap>
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<QString>
#include<QMessageBox>
#include<fstream>
using namespace std;
registernewacc::registernewacc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registernewacc)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/images.jpg");
    int w= ui->label1->width();
    int l= ui->label1->height();
    ui->label1->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

registernewacc::~registernewacc()
{
    delete ui;
}
int reg_new_account(string name,string password);
int login(string n,string p);
void registernewacc::on_pushButton_clicked()
{
    QString x=ui->lineEdit->text();
     QString y=ui->lineEdit_2->text();
     int d=login(x.toStdString(),y.toStdString());
     if(d==1)
     {
         QMessageBox::critical(this,"Register New Account","username or password is used please try again");
     }
     else
     {

        int f= reg_new_account(x.toStdString(),y.toStdString());
        if(f==1)
        {QMessageBox::information(this,"Register New Account","Account Created Successfully");}
       }
}
