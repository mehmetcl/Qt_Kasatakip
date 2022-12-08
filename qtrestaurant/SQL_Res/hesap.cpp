#include "hesap.h"
#include "ui_hesap.h"
#include"login.h"
#include "tablesales.h"
#include "enterloginn.h"
#include "productsales.h"




void Hesap::show_list()
{
    Login conn;
    conn.connOpen();

    QSqlQueryModel* modal=new QSqlQueryModel();

    modal->setQuery("SELECT product_id FROM Sales WHERE table_id='"+table_id+"'");


        if( modal->rowCount()!=0)
        {

            /*QSqlQueryModel* modal=new QSqlQueryModel();
            modal->setQuery("SELECT * FROM Sales WHERE  table_id='"+table_id+"'");
            ui->tableView_hesap->setModel(modal);*/
            QSqlQuery qry;

            qry.prepare("SELECT Products.name,Sales.price,Sales.piece FROM Sales INNER JOIN Products on Sales.product_id=Products.id WHERE table_id='"+table_id+"'");
            if(qry.exec())
            {
                while(qry.next())
                {
                    ui->listWidget->addItem("Ürün Adı : "+qry.value(0).toString() +"     Ürün Adeti : " +qry.value(2).toString()+ "     Ürün Fiyatı : "+qry.value(1).toString() + " TL");
                    totalPrice+=qry.value(1).toInt();
                }
               ui->listWidget->addItem("Toplam Tutar : "+ QString::number(totalPrice));

            }
            else
            {

                QMessageBox::critical(this,tr("error::"),qry.lastError().text());
            }

        }

conn.connClose();
}
void Hesap::read_id(QString id)
{
    table_id=id;
    show_list();
}
Hesap::Hesap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hesap)
{
    ui->setupUi(this);

}

Hesap::~Hesap()
{
    delete ui;
}



void Hesap::on_tableView_hesap_activated(const QModelIndex &index)
{

}


void Hesap::on_Hesap_accepted()
{

}


void Hesap::on_pushButtonHesap_clicked()
{
    ui->listWidget->clear();
    Login conn;
    conn.connOpen();






            QSqlQuery qry;

            qry.prepare("DELETE FROM Sales where table_id="+table_id);
            if(qry.exec())
            {
                QMessageBox::information(this,tr("Hesap"),tr("Hesap işlemi başarılı."));
                QSqlQuery qry2;

                qry2.prepare("UPDATE Tables SET table_stateFlag=0 WHERE table_id="+table_id);

                if(qry2.exec())
                {

                }
            }
            else
            {

                QMessageBox::critical(this,tr("error::"),qry.lastError().text());
            }


conn.connClose();


 Tablesales* tblsl=new Tablesales(this);
 tblsl->init(table_id);
 Enterloginn* entrlgn=new Enterloginn(this);
 entrlgn->showTable();
 tblsl->init(table_id);
 entrlgn->showTable();
 entrlgn->show();
 hide();
}

