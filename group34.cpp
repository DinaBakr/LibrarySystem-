#include "group34.h"
#include "ui_group34.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <admin.h>
#include <student.h>
#include <books.h>
#include <student1.h>
#include<adminoptions.h>

Group34::Group34(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Group34)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/adminlogin.jpg");
   // int w= ui->label_bg->width();
    //int l= ui->label_bg->height();
    ui->label_bg->setPixmap(pix.scaled(870,600,Qt::KeepAspectRatio));
}

Group34::~Group34()
{
    delete ui;
}


void Group34::on_pushButton_3_clicked()
{
    hide();
    Admin secdia;
    secdia.exec();
}

void Group34::on_pushButton_4_clicked()
{
    hide();
    Student secdia;
    secdia.exec();
}
