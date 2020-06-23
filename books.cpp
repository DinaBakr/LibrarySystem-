#include "books.h"
#include "ui_books.h"
#include<reservebookadmin.h>
#include<string>
#include<string.h>
#include<QString>
#include<iostream>
#include<QMessageBox>
#include<fstream>

using namespace std;

books::books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::books)
{
    ui->setupUi(this);
    QPixmap pix(":/sw/sw/oliver twist.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book1->setPixmap(pix.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix1(":/sw/sw/the fault.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book2->setPixmap(pix1.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix2(":/sw/sw/13reasons why.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book3->setPixmap(pix2.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix3(":/sw/sw/thehunger.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book4->setPixmap(pix3.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix4(":/sw/sw/all my sons.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book5->setPixmap(pix4.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix5(":/sw/sw/the alchemist.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book6->setPixmap(pix5.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix6(":/sw/sw/jane eyre.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book7->setPixmap(pix6.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix7(":/sw/sw/the prisoner of zenda.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book8->setPixmap(pix7.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix8(":/sw/sw/pygma.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book9->setPixmap(pix8.scaled(250,180,Qt::KeepAspectRatio));

    QPixmap pix9(":/sw/sw/romeo.jpg");
    //int w= ui->book1->width();
    //int l= ui->book1->height();
    ui->book10->setPixmap(pix9.scaled(250,180,Qt::KeepAspectRatio));
}



books::~books()
{
    delete ui;
}

void books::on_pushButton_11_clicked()
{
    //hide();
    reservebookadmin secdia;
    secdia.exec(); 
}
int searchbook(string n);
void books::on_pushButton_12_clicked()
{
    QString input = ui->search->text();
   int output = searchbook(input.toStdString());
   if(output==0)
   {QMessageBox ::critical(this,"search","Book is not found");
   }
   else
   {QMessageBox ::information(this,"search","Book is found");

   }
    //QString input = ui->search->text();
    //QMessageBox ::information(this,"hft",input);

}

