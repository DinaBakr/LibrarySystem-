#include "reservebookadmin.h"
#include "ui_reservebookadmin.h"
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<QString>
#include<QMessageBox>
#include<fstream>
#include<reserve.h>
using namespace std;


reservebookadmin::reservebookadmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reservebookadmin)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/uiop.jpg");
     int w= ui->label30->width();
     int l= ui->label30->height();
     ui->label30->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

reservebookadmin::~reservebookadmin()
{
    delete ui;
}
int login(string n,string p);
void reservebookadmin::on_pushButton_clicked()
{
    QString x=ui->name->text();
     QString y=ui->pass->text();
     int f= login(x.toStdString(),y.toStdString());
     if(f==0)
     {
         QMessageBox::critical(this,"Reserve","You are not a member");

     }
     else if(f==1)
     {
         reserve secdia;
         secdia.exec();
     }

}
