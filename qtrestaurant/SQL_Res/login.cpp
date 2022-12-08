#include "login.h"
#include "ui_login.h"
#include<QPixmap>
#include<QMovie>
#include<QLabel>
#include<QPalette>
#include"calculator.h"
#include"singin.h"
#include"enterloginn.h"
#include"admlogin.h"

void Login::connClose()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}


bool Login::connOpen()
{

    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("SqlCustomerData.sqlite");
    if(!mydb.open())
    {
        qDebug()<<"Database was not opened";
        ui->label_lgn_status->setText("Disconnected");
        return false;
    }
    else
    {
        qDebug()<<"Created Database";
        ui->label_lgn_status->setText("Connecting...");
        return true;
    }
}

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap pxmp(":user_black.png");
    QPixmap pix4=pxmp.scaled(500,500,Qt::KeepAspectRatio);
    ui->label_login_gift->setPixmap(pxmp);
    QSqlDatabase mydb;
    connOpen();
    QString query= "CREATE TABLE customertbl ("
                "customer_id    INTEGER    PRIMARY KEY,"
                "user_name      VARCHAR (25) NOT NULL ,"
                "first_name    VARCHAR (25) NOT NULL,"
                "last_name     VARCHAR (25) NOT NULL,"
                "password      VARCHAR (25) NOT NULL,"
                "phone_number  VARCHAR (25) NOT NULL,"
                "address       VARCHAR (25) NOT NULL,"
                "age           VARCHAR (25) NOT NULL,"
                "gender        VARCHAR (25) NOT NULL,"
                "job           VARCHAR (25) NOT NULL"
                ");";
    QSqlQuery qry;
      if(!qry.exec(query))
      {
          qDebug()<<"Not Create Table";
                  qDebug()<<qry.lastError();


      }
      else
      {

          qDebug()<<"Created table OK!";
      }

       connClose();
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_login_clicked()
{
    Login conn;
    conn.connOpen();
    QSqlQuery qry;
        qry.prepare( "SELECT * FROM customertbl WHERE user_name = :username and password = :password" );
        qry.bindValue(":username",ui->lineEdit_lgn_username->text());
        qry.bindValue(":password",ui->lineEdit_lgn_password->text());
        qry.exec();

   if (qry.next())
         {
         qDebug()<<"Giris yapildi";
         Enterloginn *entlgn = new Enterloginn(this);
             entlgn->show();
         }
    else
        {
       QMessageBox msgBox;
       msgBox.setWindowTitle("Warning");
       msgBox.setText("Please try again!.");
       msgBox.setStandardButtons(QMessageBox::Ok);
       msgBox.exec();
        }

   conn.connClose();
}


void Login::on_pushButton_singin_clicked()
{
    Singin *sngin=new Singin(this);
    sngin->show();
}


void Login::on_pushButton_adm_clicked()
{
    Admlogin *admlgn=new Admlogin(this);
    admlgn->show();
}


void Login::on_pushButton_calculator_clicked()
{
    Calculator *calculate =new Calculator(this);
    calculate->show();
}

