#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <adminoptions.h>
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
   QPixmap pix(":/sw/sw/bg.jpg");
    int w= ui->label_adminlogin->width();
    int l= ui->label_adminlogin->height();
    ui->label_adminlogin->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));



}

Admin::~Admin()
{
    delete ui;

}

void Admin::on_pushButton_login_clicked()
{


       QString adusername = ui->lineEdit_name->text();
       QString adpass = ui->lineEdit_password->text();
       if(adusername=="admin" && adpass=="admin")
       {
           hide();
           adminoptions secdia;
           secdia.exec();
       }
       else
       {

           QMessageBox ::  critical(this,"Login","Data entered is invalid");
       }







}
