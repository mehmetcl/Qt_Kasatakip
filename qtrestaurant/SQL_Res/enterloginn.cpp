#include "enterloginn.h"
#include "ui_enterloginn.h"
//#include"stock.h"
#include"login.h"
#include"tablesales.h"
///#include "productsales.h"

/*"category_id    INTEGER  REFERENCES Categories (category_id) "*/
QT_BEGIN_NAMESPACE
void Enterloginn::addtables(QString table_id, QString table_name, QString table_stateFlag)
{
    Login conn;
    conn.connOpen();

    QSqlQuery qry2;

    qry2.prepare("Select table_id from Tables where category_name='"+table_name+"'");
    if(qry2.exec())
    {


        while(qry2.next())
        {
            table_id=qry2.value(0).toString();

        }
    }
    conn.connClose();
    conn.connOpen();
    QSqlQuery qry;
     qry.prepare("INSERT INTO Tables(table_id,table_name,table_stateFlag)"
                 "VALUES(:table_id,:table_name,:table_stateFlag)");
             qry.bindValue(":table_id",table_id);
             qry.bindValue(":table_name",table_name);
             qry.bindValue(":table_stateFlag",table_stateFlag);


                 bool res_insertion=qry.exec();
                     if(!res_insertion)
                       {
                         qDebug()<<"Add ERROR";
                             qDebug()<<qry.lastError();
                                 qDebug()<<qry.lastError().isValid();

                       }
                      else
                       {
                      qDebug()<<"Add OK!";
                       }
                     conn.connClose();
}

void Enterloginn::updatetables(QString table_id, QString table_name, QString table_stateFlag)
{

    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Tables");
    qry.prepare("UPDATE Tables SET table_name='"+table_name+"',table_stateFlag='"+table_stateFlag+"'WHERE id='"+table_id+"'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated product"));
       //ui->label_status_food->setText("UPDATE product");


       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Edit"),tr(" NOT Updated product"));
        //ui->label_status_food->setText("Not UPDATE product");
            qDebug()<<qry.lastError();

    }




    conn.connClose();
}





void Enterloginn::showTable()
{
   /* Login conn;
    QSqlQueryModel* modal1=new QSqlQueryModel();
    QSqlQueryModel* modal2=new QSqlQueryModel();

    conn.connOpen();

    modal1->setQuery("SELECT * FROM Tables");
    ui->tableView_tables->setModel(modal1);
    //ui->comboBox_select_table_food->setModel(modal1);


    modal2->setQuery("SELECT * FROM Sales ");
    ui->tableView_sales->setModel(modal2);
    //ui->comboBox_select_table_drink->setModel(modal2);
     conn.connClose();*/


    Login conn;


    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM Tables");
    int sayac=1;
    if(qry.exec())
    {
        while(qry.next())
        {


            if(sayac==1){

           if(qry.value(2)==1) ui->masa_1->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_1->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==2){

           if(qry.value(2)==1) ui->masa_2->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_2->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==3){

           if(qry.value(2)==1) ui->masa_3->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_3->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==4){

           if(qry.value(2)==1) ui->masa_4->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_4->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==5){

           if(qry.value(2)==1) ui->masa_5->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_5->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==6){

           if(qry.value(2)==1) ui->masa_6->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_6->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==7){

           if(qry.value(2)==1) ui->masa_7->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_7->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==8){

           if(qry.value(2)==1) ui->masa_8->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_8->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==9){

           if(qry.value(2)==1) ui->masa_9->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_9->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            if(sayac==10){

           if(qry.value(2)==1) ui->masa_10->setStyleSheet("Background-color:rgb(255,0,0)");
           else ui->masa_10->setStyleSheet("Background-color:rgb(0,255,0)");
            }
            sayac++;
        }




    }
    else
    {

        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
    conn.connClose();
}

Enterloginn::Enterloginn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enterloginn)
{
    ui->setupUi(this);
    QString query1= "CREATE TABLE Tables ("
                "table_id       INTEGER    PRIMARY KEY,"
                "table_name     VARCHAR (25) NOT NULL,"
                "table_stateFlag    INTEGER  NOT NULL"
                 ");";

    QSqlQuery qry1;
      if(!qry1.exec(query1))
      {
          qDebug()<<"Not Create Tables Table";
          qDebug()<<qry1.lastError();
      }
      else
      {
          qDebug()<<"Created Tables table OK!";
      }

      //----------------------------------TABLE Category------------------------------------------
          QString query2= "CREATE TABLE Sales ("
                      "sales_id       INTEGER    PRIMARY KEY,"
                      "table_id    INTEGER  ,"
                      "product_id    INTEGER ,"
                      "price    INTEGER  ,"
                      "piece    INTEGER "
                       ");";

          QSqlQuery qry2;
            if(!qry2.exec(query2))
            {
                qDebug()<<"Not Create Sales Table";
                qDebug()<<qry2.lastError();
            }
            else
            {
                qDebug()<<"Created Sales table OK!";
            }
//------------------------------------------------------------------------------------
            Login conn;
            showTable();
}


Enterloginn::~Enterloginn()
{
    delete ui;
}



void Enterloginn::on_masa_1_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("1");
    tblsl->show();
    hide();


}


void Enterloginn::on_masa_2_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("2");
    tblsl->show();
    hide();

}


void Enterloginn::on_masa_3_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("3");
    tblsl->show();
    hide();

}


void Enterloginn::on_masa_4_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("4");
    tblsl->show();
    hide();


}


void Enterloginn::on_masa_5_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
     tblsl->init("5");
    tblsl->show();
     hide();

}


void Enterloginn::on_masa_6_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
  tblsl->init("6");
    tblsl->show();
    hide();


}


void Enterloginn::on_masa_7_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
 tblsl->init("7");
    tblsl->show();
    hide();


}


void Enterloginn::on_masa_8_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
   tblsl->init("8");
    tblsl->show();
    hide();


}


void Enterloginn::on_masa_9_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("9");
    tblsl->show();
    hide();

}


void Enterloginn::on_masa_10_clicked()
{
    Tablesales *tblsl=new Tablesales(this);
    tblsl->init("10");
    tblsl->show();
    hide();




}
