#include "group34.h"
#include <QApplication>
#include<iostream>
#include<QString>
#include<adminoptions.h>
#include<admin.h>
#include<string>
#include<fstream>
#include<sstream>
#include<stdio.h>
#include<string.h>
#include<QMessageBox>
#include<books.h>

using namespace std;

int returnbookfine(string n,string book_to_return,string date)
{
    fstream mk("C:/Users/win10/Desktop/memname.txt");
//	string n;
//	cout << "Enter member name ";
//	getline(cin, n);


ifstream res_bk;
     res_bk.open("C:/Users/win10/Desktop/res_bk.txt",ios::app);


    int flaag = 0;


    string Line;
    while (getline(mk, Line))
    {
        int t = Line.find(';');
        string name_in_file = Line.substr(0, t);
        if (name_in_file == n)
        {

            flaag = 1;


            break;
        }
    }

    if(flaag==1)
    {
        string book_name_in_file;
        //string book_to_return5;
        //string date5;
    //cout << "Enter name of a book you want to return:";
    //getline(cin, book_to_return);
    //cout<<"enter today's date";
    //getline(cin,date);
    ifstream rbk("C:/Users/win10/Desktop/res_bk.txt");
    int flag = 0;

    string Line;
    string date2;


    while (getline(rbk, Line))
    {
        int y = Line.find(';');

        if (y != string::npos)
        {


            string q = Line.substr(y + 1);
            int x = q.find(';');
            if (x != string::npos)
            {
                book_name_in_file = q.substr(0, x);
                string a=q.substr(x + 1);
                int w = a.find('^');
                if (w != string::npos)
                {
                    date2 = a.substr(0,w);


                }

            }


        }
        if(book_name_in_file==book_to_return)
        {



                 //cout<<"book returned"<<endl;

  string comp= n +";" +book_to_return +";"+date2+"^";

   fstream file;
    string line;
            fstream outfile;
            file.open("C:/Users/win10/Desktop/res_bk.txt",ios::in|ios::out);
            outfile.open("C:/Users/win10/Desktop/temp3.txt",ios::out);
            while(getline(file,line))
            {
                if(line!=comp)
                    outfile<<line<<endl;
            }
            rbk.close();
            res_bk.close();
            file.close();
            outfile.close();

            remove ("C:/Users/win10/Desktop/res_bk.txt");
       int value= rename ("C:/Users/win10/Desktop/temp3.txt","C:/Users/win10/Desktop/res_bk.txt");






string d1,d2,m1,m2,y1,y2;






int yy = date.find('/');

        if (yy != string::npos)
        {

            d1 = date.substr(0, yy);
            string qq = date.substr(yy + 1);
            int xx = qq.find('/');
            if (xx != string::npos)
            {
                m1 = qq.substr(0, xx);
                y1=qq.substr(xx + 1);


            }




        }

        int yyy = date2.find('/');

        if (yyy != string::npos)
        {

            d2 = date2.substr(0, yyy);
            string qqq = date2.substr(yyy + 1);
            int xxx = qqq.find('/');
            if (xxx != string::npos)
            {
                m2 = qqq.substr(0, xxx);
                y2=qqq.substr(xxx + 1);


            }




        }

        stringstream geekd1(d1);
        stringstream geekd2(d2);
        stringstream geekm1(m1);
        stringstream geekm2(m2);
        stringstream geeky1(y1);
        stringstream geeky2(y2);

        int dd1,dd2,mm1,mm2,yy1,yy2 = 0;
    geekd1 >> dd1;
    geekd2 >> dd2;
    geekm1 >> mm1;
    geekm2 >> mm2;
    geeky1 >> yy1;
    geeky2 >> yy2;
    int alldays1=0,alldays2=0;
    int c=0,cc=0;
    if(mm1==1)
    {
        c=0;
    }else if(mm1==3){c=59;}else if(mm1==2){c=31;}else if(mm1==4){c=90;}else if(mm1==5){c=120;}else if(mm1==6){c=151;}else if(mm1==7){c=181;}else if(mm1==8)
    { c=212;} else if(mm1==9){c=243;}else if(mm1==10){c=273;}else if(mm1==11){c=304;}else if(mm1==12){c=334;}


    alldays1=dd1+c+(yy1*365);

    if(mm2==1)
    {
        cc=0;
    }else if(mm2==3){cc=59;}else if(mm2==2){cc=31;}else if(mm2==4){cc=90;}else if(mm2==5){cc=120;}else if(mm2==6){cc=151;}else if(mm2==7){cc=181;}else if(mm2==8)
    { cc=212;} else if(mm2==9){cc=243;}else if(mm2==10){cc=273;}else if(mm2==11){cc=304;}else if(mm2==12){cc=334;}

    alldays2=dd2+cc+(yy2*365);



int diff =alldays1-alldays2;
if(diff<=10)
{
    //cout<<"no fine"<<endl;
    return 0;


}
else if(diff>10)
{
    //cout<<"fine is"<<diff-10<<endl;
    return diff-10;
}



}
    }
    }


    //obj.addbook();

}




int returnbookval(string n,string book_to_return,string date)
{
    fstream mk("C:/Users/win10/Desktop/memname.txt");
//	string n;
//	cout << "Enter member name ";
//	getline(cin, n);


ifstream res_bk;
     res_bk.open("C:/Users/win10/Desktop/res_bk.txt",ios::app);


    int flaag = 0;


    string Line;
    while (getline(mk, Line))
    {
        int t = Line.find(';');
        string name_in_file = Line.substr(0, t);
        if (name_in_file == n)
        {

            flaag = 1;


            break;
        }
    }

    if(flaag==1)
    {
        string book_name_in_file;
        //string book_to_return5;
        //string date5;
    //cout << "Enter name of a book you want to return:";
    //getline(cin, book_to_return);
    //cout<<"enter today's date";
    //getline(cin,date);
    ifstream rbk("C:/Users/win10/Desktop/res_bk.txt");
    int flag = 0;

    string Line;
    string date2;


    while (getline(rbk, Line))
    {
        int y = Line.find(';');

        if (y != string::npos)
        {


            string q = Line.substr(y + 1);
            int x = q.find(';');
            if (x != string::npos)
            {
                book_name_in_file = q.substr(0, x);
                string a=q.substr(x + 1);
                int w = a.find('^');
                if (w != string::npos)
                {
                    date2 = a.substr(0,w);


                }

            }


        }
        if(book_name_in_file==book_to_return)
        {



                 //cout<<"book returned"<<endl;

  string comp= n +";" +book_to_return +";"+date2+"^";

   fstream file;
    string line;
            fstream outfile;
            file.open("C:/Users/win10/Desktop/res_bk.txt",ios::in|ios::out);
            outfile.open("C:/Users/win10/Desktop/temp3.txt",ios::out);
            while(getline(file,line))
            {
                if(line!=comp)
                    outfile<<line<<endl;
            }
            rbk.close();
            res_bk.close();
            file.close();
            outfile.close();

            remove ("C:/Users/win10/Desktop/res_bk.txt");
       int value= rename ("C:/Users/win10/Desktop/temp3.txt","C:/Users/win10/Desktop/res_bk.txt");






string d1,d2,m1,m2,y1,y2;






int yy = date.find('/');

        if (yy != string::npos)
        {

            d1 = date.substr(0, yy);
            string qq = date.substr(yy + 1);
            int xx = qq.find('/');
            if (xx != string::npos)
            {
                m1 = qq.substr(0, xx);
                y1=qq.substr(xx + 1);


            }




        }

        int yyy = date2.find('/');

        if (yyy != string::npos)
        {

            d2 = date2.substr(0, yyy);
            string qqq = date2.substr(yyy + 1);
            int xxx = qqq.find('/');
            if (xxx != string::npos)
            {
                m2 = qqq.substr(0, xxx);
                y2=qqq.substr(xxx + 1);


            }




        }

        stringstream geekd1(d1);
        stringstream geekd2(d2);
        stringstream geekm1(m1);
        stringstream geekm2(m2);
        stringstream geeky1(y1);
        stringstream geeky2(y2);

        int dd1,dd2,mm1,mm2,yy1,yy2 = 0;
    geekd1 >> dd1;
    geekd2 >> dd2;
    geekm1 >> mm1;
    geekm2 >> mm2;
    geeky1 >> yy1;
    geeky2 >> yy2;
    int alldays1=0,alldays2=0;
    int c=0,cc=0;
    if(mm1==1)
    {
        c=0;
    }else if(mm1==3){c=59;}else if(mm1==2){c=31;}else if(mm1==4){c=90;}else if(mm1==5){c=120;}else if(mm1==6){c=151;}else if(mm1==7){c=181;}else if(mm1==8)
    { c=212;} else if(mm1==9){c=243;}else if(mm1==10){c=273;}else if(mm1==11){c=304;}else if(mm1==12){c=334;}


    alldays1=dd1+c+(yy1*365);

    if(mm2==1)
    {
        cc=0;
    }else if(mm2==3){cc=59;}else if(mm2==2){cc=31;}else if(mm2==4){cc=90;}else if(mm2==5){cc=120;}else if(mm2==6){cc=151;}else if(mm2==7){cc=181;}else if(mm2==8)
    { cc=212;} else if(mm2==9){cc=243;}else if(mm2==10){cc=273;}else if(mm2==11){cc=304;}else if(mm2==12){cc=334;}

    alldays2=dd2+cc+(yy2*365);



int diff =alldays1-alldays2;
if(diff<=10)
{
    //cout<<"no fine"<<endl;
    return 0;


}
else if(diff>10)
{
    //cout<<"fine is"<<diff-10<<endl;
    return 1;
}



}
    }
    }


    //obj.addbook();

}




int reserve_book(string n,string book_to_resrve,string date)
{


fstream mk("C:/Users/win10/Desktop/memname.txt");



ifstream res_bk;
     res_bk.open("C:/Users/win10/Desktop/res_bk.txt",ios::app);

    int cnt=0;





    int flaag = 0;

    string Line;
    while (getline(mk, Line))
    {
        int t = Line.find(';');
        string name_in_file = Line.substr(0, t);
        if (name_in_file == n)
        {

            flaag = 1; //you can reserve


            break;
        }
    }

    while (getline(res_bk, Line))
    {
        int t = Line.find(';');
        string name_in_file = Line.substr(0, t);
        if (name_in_file == n)
        {
           cnt=cnt+1;


           if(cnt>5|cnt==5)
           {
               flaag=2; //more than 5 books
               break;
           }




        }
    }






     if(flaag==1)
    {
        cout << "*****" << endl;
        cout << "you can reserve book" << endl;
        cout << "*****" << endl;



    ifstream bk("C:/Users/win10/Desktop/bk.txt");
    int flag = 0;

    string Line;
    string book_name_in_file;
    string author_name_in_file;
    string book_available;
    while (getline(bk, Line))
    {
        int y = Line.find(';');

        if (y != string::npos)
        {

            book_name_in_file = Line.substr(0, y);
            string q = Line.substr(y + 1);
            int x = q.find(';');
            if (x != string::npos)
            {
                author_name_in_file = q.substr(0, x);
                string a=q.substr(x + 1);
                int w = a.find('^');
                if (w != string::npos)
                {
                    book_available = a.substr(0,w);


                }

            }


        }


        if (book_name_in_file == book_to_resrve )
        {


            flag = 1;
            //cout << n << "\n";
            break;
        }
    }


    if (flag == 0)
    {
        cout << "Sorry book is not available now !" << endl;
        return 0;
    }
    else
    {

        //cout << "***************" << endl;
        //cout << "your book is reserved" << endl;
        //cout << "***************" << endl;



      fstream res_bk;
     res_bk.open("C:/Users/win10/Desktop/res_bk.txt",ios::app);
        res_bk << n << ";" << book_name_in_file <<";"<<date<<"^"<< endl;

                    string line;
      string cmp =book_name_in_file +";"+author_name_in_file +";";


            fstream file;
            fstream outfile;
            file.open("C:/Users/win10/Desktop/bk.txt",ios::in|ios::out);
            outfile.open("./newM.txt",ios::out);
            while(getline(file,line))
            {
                if(line!=cmp)
                    outfile<<line<<endl;
            }
            file.close();
            bk.close();
            outfile.close();

            remove ("C:/Users/win10/Desktop/bk.txt");
        rename ("./newM.txt","C:/Users/win10/Desktop/bk.txt");
        return 1;






    }

    }
    else if(flaag=2)
    {
       // cout<<"you reserved 5 books already";
         return 2;
    }



}





int reg_new_account(string name,string password)
    {



        fstream myfile ;
        myfile.open("C:/Users/win10/Desktop/memname.txt",ios::app);
        myfile << name<<";"<<password<<";"<<endl;

        //cout<<"your account created successfully \n ";
        return 1;
        myfile.close();

    }

int cancel_membership(string username,string password)
{

    string cmp=username +";" + password +";";
    fstream file;
    string line;
            fstream outfile;
            file.open("C:/Users/win10/Desktop/memname.txt",ios::in|ios::out);
            outfile.open("C:/Users/win10/Desktop/temp2.txt",ios::out);
            while(getline(file,line))
            {
                if(line!=cmp)
                    outfile<<line<<endl;
            }
            file.close();

            outfile.close();

            remove ("C:/Users/win10/Desktop/memname.txt");
       int value= rename ("C:/Users/win10/Desktop/temp2.txt","C:/Users/win10/Desktop/memname.txt");

    if(!value)
    { return 1;
        //cout<<"name deleted ";
    }
    else{
        //cout<<"a ";
        return 0;
    }







}

int searchbook(string n)
{

ifstream bk("C:/Users/win10/Desktop/bk.txt");
//ifstream bk(":/sw/sw/bk.txt");

int flag = 0;

string Line;
while (getline(bk, Line))
{

    if (Line.find(n) != string::npos)
    {
        flag = 1;
        //cout << n << "\n";
        break;

    }
}


if (flag == 0)
{
  //QMessageBox ::  critical(,"Search","Book is not found");
    //ui->message->setText("Book is nit found");
    return flag;
}
else
{
//cout << "***************" << endl;
//cout << "Book Found" << endl;
//cout << "***************" << endl;
return flag;

}

}





int addbookfunc(string x,string y)
{
    //setdetails();
    fstream bk;
    bk.open("C:/Users/win10/Desktop/bk.txt",ios::app);
    bk << x<<";"<<y<<";"<<endl;
    int f= searchbook(x);
    if(f==1)
    {//cout << "Book added successfully"<<endl;
        return 1;

    }
    else{
        //cout<<"not added"<<endl;
        return 0;
    }
    bk.close();

}





int login(string n,string p)
{

    ifstream mk("C:/Users/win10/Desktop/memname.txt");



int flag = 0;

string Line;
string namef;
string passf;
while (getline(mk, Line))
{
    int y=Line.find(';');

    if(y!=string::npos)
    {
        namef=Line.substr(0,y);
        string q=Line.substr(y+1);
        int x=q.find(';');
        if(x!=string::npos)
        {
            passf=q.substr(0,x);
        }
    }
    if(namef==n && passf==p)
    {
        flag=1;
        break;
    }

}


if (flag == 0)
{
//cout << "Sorry your are not a member !" << endl;
return 0;
}
else
{
//cout << "***************" << endl;
//cout << "welcome to nadine's library" << endl;
//cout << "***************" << endl;
return 1;

}
}





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Group34 w;
    w.show();
    return a.exec();
}


