#include "productsales.h"
#include "ui_productsales.h"
#include"login.h"
#include "enterloginn.h"
#include "productsales.h"
#include"tablesales.h"

int piece=0;
int price=0;
void Productsales::addMemberTable(QString table_id, QString product_id, QString price, QString piece)
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry2;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT product_id FROM Sales WHERE product_id='"+product_id+"' , table_id='"+table_id+"'");
    int oldpiece=0;
    int oldprice=0;
    int newpiece=piece.toInt();


                      if( modal->rowCount()!=0)
                   {
                       QSqlQuery qry3;
                      qry3.prepare("SELECT piece,price FROM Sales WHERE product_id='"+product_id+"'");
                       if(qry3.exec())
                       {
                         while(qry3.next())
                           {
                              oldpiece = qry3.value(0).toInt();
                              oldprice = qry3.value(1).toInt();

                           }
                       }


                          QSqlQuery qry;
                         piece=QString::number(oldpiece+(piece.toInt()));
                         price=QString::number(oldprice+(price.toInt()));
                          qry.prepare("UPDATE Sales SET piece="+QString::number(oldpiece+(piece.toInt()))+",price="+price+" WHERE product_id="+product_id);

                      if(qry.exec())
                      {
                         QMessageBox::information(this,tr("Edit"),tr("Updated product"));

                      }
                  }
                 else
                  {
                   QSqlQuery qry;
                     qry.prepare("INSERT INTO Sales(table_id,product_id,price,piece)"
                           "VALUES(:table_id,:product_id,:price,:piece)");
                         qry.bindValue(":table_id",table_id);
                         qry.bindValue(":product_id",product_id);
                         qry.bindValue(":price",price);
                         qry.bindValue(":piece",piece);


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

                    }
                    QSqlQuery qry4;

                    qry4.prepare("UPDATE Tables SET table_stateFlag=1 WHERE table_id="+table_id);

                    if(qry4.exec())
                    {
                       QMessageBox::information(this,tr("Set table flag"),tr("Updated table flag"));

                    }



                    /*  burda eski stok bilgisini çektik   */

                       QSqlQuery qry6;
                       qry6.prepare("SELECT * FROM Products WHERE id='"+product_id+"'");
                       if(qry6.exec())
                       {
                           while(qry6.next())
                           {
                             oldpiece = qry6.value(3).toInt();

                           }

                       }


                       /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                 /* eski stocktan yeni eklediğimiz ürün adedini çıkarıp products tablosundaki stok bilgisini güncelledik*/
                               QSqlQuery qry5;
                               piece=QString::number(oldpiece-newpiece);
                               qry5.prepare("UPDATE Products SET piece='"+piece+"' WHERE id='"+product_id+"'");
                               qry5.exec();

                               conn.connClose();
                     /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 }



void Productsales::ShowTable()
{
    Login conn;




    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();
    modal->setQuery("SELECT * FROM Products");
    ui->tableView->setModel(modal);
    conn.connClose();
}

Productsales::Productsales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Productsales)
{
    ui->setupUi(this);
    ShowTable();
}

void Productsales::read_id(QString id)
{
table_id=id;
}

Productsales::~Productsales()
{
    delete ui;
}


void Productsales::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
    Login conn;

        if(!conn.connOpen())
        {
            qDebug()<<"Failed to open Products Database";
        }
        conn.connOpen();
        QSqlQuery qry;

        qry.prepare("SELECT * FROM Products WHERE id='"+val+"'or name='"+val+"'or price='"+val+"'or piece='"+val+"'");
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_id->setText(qry.value(0).toString());
                ui->lineEdit_name->setText(qry.value(1).toString());
                piece=qry.value(3).toInt();
                price=qry.value(2).toInt();


            }


        }
        else
        {

            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
        }
        conn.connClose();
}

void Productsales::on_pushButton_sell_clicked()
{
    hide();
    // ui->lineEdit_id->
    piece=ui->lineEdit_piece->text().toInt();
    if((ui->lineEdit_piece->text()).toInt()>piece)
    {
                QMessageBox::critical(this,tr("error::"),"Yetersiz Stock");
    }
    else{
    //QString table_id, QString product_id, QString price, QString piece


    price=price*piece;
    addMemberTable(table_id,ui->lineEdit_id->text(),QString::number(price),QString::number(piece));
    }
    Enterloginn* entrlgn=new Enterloginn(this);
    Tablesales* tblsl=new Tablesales(this);

    entrlgn->clearFocus();
    ShowTable();
    tblsl->init(table_id);
    tblsl->show();
    entrlgn->showTable();

}

