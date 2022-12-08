#include "tablesales.h"
#include "ui_tablesales.h"
#include"login.h"
#include "productsales.h"
#include "enterloginn.h"
#include"hesap.h"

void Tablesales::init(QString table_id2)
{
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();
   // modal->setQuery("SELECT * FROM Sales where table_id="+table_id2);
    modal->setQuery("SELECT Products.name,Sales.price,Sales.piece from Sales INNER JOIN Products on Sales.product_id=Products.id where Sales.table_id="+table_id2);
    ui->tableView->setModel(modal);
    conn.connClose();
    table_id=table_id2;
}

Tablesales::Tablesales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tablesales)
{
    ui->setupUi(this);

}

Tablesales::~Tablesales()
{
    delete ui;
}

void Tablesales::on_pushButton_insert_clicked()
{
    Productsales *tblsl=new Productsales(this);
    tblsl->read_id(table_id);
    tblsl->show();
    hide();
}




void Tablesales::on_pushButton_delete_clicked()
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Sales");
     qry.prepare("DELETE FROM Sales WHERE sales_id='"+sales_id+"'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Delete Sales"));


    }
    else
    {
        QMessageBox::critical(this,tr("Not Delete"),tr(" NOT Delete Sales"));
        qDebug()<<qry.lastError();

    }




     conn.connClose();
     init(table_id);
}


void Tablesales::on_tableView_activated(const QModelIndex &index)
{


   Login conn;


   conn.connOpen();
   QSqlQuery qry;

   qry.prepare("SELECT * FROM Sales WHERE table_id='"+table_id+"'");
   if(qry.exec())
   {
       while(qry.next())
       {
           sales_id=qry.value(0).toString();
       }

   }
   else
   {

       QMessageBox::critical(this,tr("error::"),qry.lastError().text());
   }
   conn.connClose();
}


void Tablesales::on_Tablesales_finished(int result)
{
/*
   Enterloginn* entrlgn=new Enterloginn(this);
   entrlgn->showTable();
   */
}


void Tablesales::on_pushButtonHesap_clicked()
{


    hide();
    Hesap* hsp=new Hesap(this);
    hsp->show();
    hsp->read_id(table_id);

}


void Tablesales::on_Tablesales_rejected()
{
    Enterloginn* entrlgn=new Enterloginn(this);
    entrlgn->showTable();
    entrlgn->show();
}

