#include "student.h"
#include "ui_student.h"
#include <books.h>
#include<student1.h>
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<QString>
#include<QMessageBox>
#include<fstream>

using namespace std;

Student::Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
   QPixmap pix(":/sw/sw/download.jpg");
    int w= ui->label_studentlogin->width();
    int l= ui->label_studentlogin->height();
    ui->label_studentlogin->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}

Student::~Student()
{
    delete ui;
}
int login(string n,string p);

void Student::on_pushButton_login_4_clicked()
{


    QString a=ui->username->text();
    QString b=ui->password->text();

    int h=login(a.toStdString(),b.toStdString());
    if(h==1)
    {    hide();
         student1 secdia;
         secdia.exec();
    }
    else {
        QMessageBox::critical(this,"Login","Invalid Username or Password Please Try Again!");
    }

}
