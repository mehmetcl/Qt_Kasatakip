#include "stock.h"
#include "ui_stock.h"
#include"login.h"
void Stock::addMemberTable(QString member_name, QString member_price, QString member_piece, QString category_name)
{
    Login conn;
    conn.connOpen();
    QString category_id;
    QSqlQuery qry2;

    qry2.prepare("Select category_id from Categories where category_name='"+category_name+"'");
    if(qry2.exec())
    {


        while(qry2.next())
        {
            category_id=qry2.value(0).toString();

        }
    }
    conn.connClose();
    conn.connOpen();
    QSqlQuery qry;
     qry.prepare("INSERT INTO Products(name,price,piece,category_id)"
                 "VALUES(:name,:price,:piece,'"+category_id+"')");
             qry.bindValue(":name",member_name);
             qry.bindValue(":price",member_price);
             qry.bindValue(":piece",member_piece);


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

void Stock::updateMemberable(QString member_id, QString member_name, QString member_price, QString member_piece)
{

    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Foods");
    qry.prepare("UPDATE Products SET name='"+member_name+"',price='"+member_price+"',piece='"+member_piece+"'WHERE id='"+member_id+"'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated product"));
       ui->label_status_food->setText("UPDATE product");


       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Edit"),tr(" NOT Updated product"));
        ui->label_status_food->setText("Not UPDATE product");
            qDebug()<<qry.lastError();

    }




      conn.connClose();
}

void Stock::deleteMemberTable(QString member_id)
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Products");
     qry.prepare("DELETE FROM Products WHERE category_id='"+member_id+"'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Delete Product"));
       //ui->label_status_food->setText("Delete product");

       /*conn.connOpen();
       modal->setQuery("SELECT * FROM Foods");
       ui->tableView_food->setModel(modal);
       conn.connClose();*/
       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Delete"),tr(" NOT Delete Product"));
        ui->label_status_food->setText("Not Delete product");
            qDebug()<<qry.lastError();

    }




      conn.connClose();
      showTable();
}

void Stock::comboShow()
{
    Login conn;

    QSqlQueryModel* modal1=new QSqlQueryModel();
    conn.connOpen();
    modal1->setQuery("Select category_name from Categories");
    ui->comboBox_insert_category->setModel(modal1);
}

void Stock::showTable()
{
    Login conn;
    QSqlQueryModel* modal1=new QSqlQueryModel();
    QSqlQueryModel* modal2=new QSqlQueryModel();
    QSqlQueryModel* modal3=new QSqlQueryModel();
    conn.connOpen();

    modal1->setQuery("SELECT * FROM Products WHERE category_id='1'");
    ui->tableView_food->setModel(modal1);
    ui->comboBox_select_table_food->setModel(modal1);


    modal2->setQuery("SELECT * FROM Products WHERE category_id='2'");
    ui->tableView_drink->setModel(modal2);
    ui->comboBox_select_table_drink->setModel(modal2);



    modal3->setQuery("SELECT * FROM Products WHERE category_id='3'");
    ui->tableView_other->setModel(modal3);
    ui->comboBox_select_table_other->setModel(modal3);


     conn.connClose();
}

Stock::Stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stock)
{
    ui->setupUi(this);
    //----------------------------------TABLE PRODUCTS------------------------------------------
        QString query1= "CREATE TABLE Products ("
                    "id       INTEGER    PRIMARY KEY,"
                    "name     VARCHAR (25) NOT NULL,"
                    "price     INTEGER  NOT NULL,"
                    "piece     INTEGER  NOT NULL,"
                    "category_id    INTEGER  REFERENCES Categories (category_id) "
                     ");";

        QSqlQuery qry1;
          if(!qry1.exec(query1))
          {
              qDebug()<<"Not Create Foods Table";
              qDebug()<<qry1.lastError();
          }
          else
          {
              qDebug()<<"Created Foods table OK!";
          }

          //----------------------------------TABLE Category------------------------------------------
              QString query2= "CREATE TABLE Categories ("
                          "category_id       INTEGER    PRIMARY KEY,"
                          "category_name     VARCHAR (25) NOT NULL"
                           ");";

              QSqlQuery qry2;
                if(!qry2.exec(query2))
                {
                    qDebug()<<"Not Create Foods Table";
                    qDebug()<<qry2.lastError();
                }
                else
                {
                    qDebug()<<"Created Foods table OK!";
                }


    //----------------Table END-----------------------------------------------

    setWindowTitle("Stock");
    QPixmap pxmp(":/stock.png");
    QPixmap pix4=pxmp.scaled(500,500,Qt::KeepAspectRatio);
    //ui->label_stock_image->setPixmap(pxmp);

    //---------------------------------------------------------------------------------
    Login conn;
    showTable();
    comboShow();
}

Stock::~Stock()
{
    delete ui;
}
//--------------------------------------------------Tableadd---------------------------------------------------
void Stock::on_pushButton_prd_add_clicked()
{
    addMemberTable(ui->lineEdit_insert_name->text(),ui->lineEdit_insert_price->text(),ui->lineEdit_insert_piece->text(),ui->comboBox_insert_category->currentText());
    showTable();
}
 //-------------------------------------------------------------------------------------------------------------
//--------------------------------------------------FOOD---------------------------------------------------
void Stock::on_pushButton_prd_upd_food_clicked()
{

    updateMemberable(ui->lineEdit_food_id->text(),ui->lineEdit_add_food->text(),ui->spinBox_price_Food->text(),ui->spinBox_piece_Food->text());
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();

    ui->tableView_food->setModel(modal);
    conn.connClose();
    showTable();
    ui->lineEdit_add_food->clear();
    ui->spinBox_piece_Food->clear();
    ui->spinBox_price_Food->clear();
    ui->lineEdit_food_id->clear();

}


void Stock::on_pushButton_stkdelete_food_clicked()
{

    deleteMemberTable(ui->lineEdit_food_id->text());
      Login conn;
      QSqlQueryModel* modal=new QSqlQueryModel();
      conn.connOpen();
      modal->setQuery("SELECT * FROM Products");
      ui->tableView_food->setModel(modal);
      conn.connClose();
      showTable();
      ui->lineEdit_add_food->clear();
      ui->spinBox_piece_Food->clear();
      ui->spinBox_price_Food->clear();
      ui->lineEdit_food_id->clear();
}


void Stock::on_tableView_food_activated(const QModelIndex &index)
{
    QString val=ui->tableView_food->model()->data(index).toString();

    Login conn;

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open Foods Database";
    }
    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM Products WHERE id='"+val+"'or name='"+val+"'or price='"+val+"'or piece='"+val+"'");
    if(qry.exec())
    {


        while(qry.next())
        {
            ui->lineEdit_food_id->setText(qry.value(0).toString());
            ui->lineEdit_add_food->setText(qry.value(1).toString());
            ui->spinBox_price_Food->setValue(qry.value(2).toInt());
            ui->spinBox_piece_Food->setValue(qry.value(3).toInt());


            conn.connOpen();
        }

        conn.connClose();


    }
    else
    {

        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Stock::on_pushButton_All_tabledelete_food_clicked()
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Foods");
     qry.prepare("DELETE FROM Products WHERE category_id='1'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Delete Product"));
       ui->label_status_food->setText("Delete product");

       /*conn.connOpen();
       modal->setQuery("SELECT * FROM Foods");
       ui->tableView_food->setModel(modal);
       conn.connClose();*/
       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Delete"),tr(" NOT Delete Product"));
        ui->label_status_food->setText("Not Delete product");
            qDebug()<<qry.lastError();

    }




      conn.connClose();
      showTable();
}
void Stock::on_comboBox_select_table_food_activated()
{
    QString id=ui->comboBox_select_table_food->currentText();




   Login conn;


   conn.connOpen();
   QSqlQuery qry;

   qry.prepare("SELECT * FROM Products WHERE id='"+id+"'");
   if(qry.exec())
   {
       while(qry.next())
       {
           ui->lineEdit_food_id->setText(qry.value(0).toString());
           ui->lineEdit_add_food->setText(qry.value(1).toString());
           ui->spinBox_price_Food->setValue(qry.value(2).toInt());
           ui->spinBox_piece_Food->setValue(qry.value(3).toInt());

       }

   }
   else
   {

       QMessageBox::critical(this,tr("error::"),qry.lastError().text());
   }
   conn.connClose();
}

//--------------------------------------------------FOOD END---------------------------------------------------
//--------------------------------------------------DRINK------------------------------------------------------


void Stock::on_pushButton_prd_upd_drink_clicked()
{
    updateMemberable(ui->lineEdit_drink_id->text(),ui->lineEdit_add_Drink->text(),ui->spinBox_price_Drink->text(),ui->spinBox_piece_Drink->text());
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();

    ui->tableView_food->setModel(modal);
    conn.connClose();
    showTable();
    ui->lineEdit_add_Drink->clear();
    ui->spinBox_piece_Drink->clear();
    ui->spinBox_price_Drink->clear();
    ui->lineEdit_drink_id->clear();
}


void Stock::on_pushButton_stkdelete_drink_clicked()
{

    deleteMemberTable(ui->lineEdit_drink_id->text());
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();
    modal->setQuery("SELECT * FROM Prdoucts");
    ui->tableView_drink->setModel(modal);
    conn.connClose();
    showTable();
    ui->lineEdit_add_Drink->clear();
    ui->spinBox_piece_Drink->clear();
    ui->spinBox_price_Drink->clear();
    ui->lineEdit_drink_id->clear();
}


void Stock::on_pushButton_All_tabledelete_drink_clicked()
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Drinks");
     qry.prepare("DELETE FROM Products WHERE category_id='2'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Delete Product"));
       ui->label_status_drink->setText("Delete product");


       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Delete"),tr(" NOT Delete Product"));
        ui->label_status_drink->setText("Not Delete product");
            qDebug()<<qry.lastError();

    }




      conn.connClose();
      showTable();
}


void Stock::on_tableView_drink_activated(const QModelIndex &index)
{
    QString val=ui->tableView_drink->model()->data(index).toString();

        Login conn;

        if(!conn.connOpen())
        {
            qDebug()<<"Failed to open Drinks Database";
        }
        conn.connOpen();
        QSqlQuery qry;

        qry.prepare("SELECT * FROM Products WHERE id='"+val+"'or name='"+val+"'or price='"+val+"'or piece='"+val+"'");
        if(qry.exec())
        {


            while(qry.next())
            {
                ui->lineEdit_drink_id->setText(qry.value(0).toString());
                ui->lineEdit_add_Drink->setText(qry.value(1).toString());
                ui->spinBox_price_Drink->setValue(qry.value(2).toInt());
                ui->spinBox_piece_Drink->setValue(qry.value(3).toInt());


                conn.connOpen();
            }

            conn.connClose();


        }
        else
        {

            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
        }
}
void Stock::on_comboBox_select_table_drink_activated()
{
    QString id=ui->comboBox_select_table_drink->currentText();




   Login conn;

   conn.connOpen();
   QSqlQuery qry;

   qry.prepare("SELECT * FROM Products WHERE id='"+id+"'");
   if(qry.exec())
   {
       while(qry.next())
       {
           ui->lineEdit_drink_id->setText(qry.value(0).toString());
           ui->lineEdit_add_Drink->setText(qry.value(1).toString());
           ui->spinBox_price_Drink->setValue(qry.value(2).toInt());
           ui->spinBox_piece_Drink->setValue(qry.value(3).toInt());


           //conn.connOpen();
       }




   }
   else
   {

       QMessageBox::critical(this,tr("error::"),qry.lastError().text());
   }
   conn.connClose();
}

//--------------------------------------------------DRINK END------------------------------------------------------
//--------------------------------------------------OTHERS---------------------------------------------------------
void Stock::on_pushButton_prd_upd_other_clicked()
{
    updateMemberable(ui->lineEdit_other_id->text(),ui->lineEdit_add_other->text(),ui->spinBox_price_Other->text(),ui->spinBox_piece_Other->text());
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();

    ui->tableView_other->setModel(modal);
    conn.connClose();
    showTable();
    ui->lineEdit_add_other->clear();
    ui->spinBox_piece_Other->clear();
    ui->spinBox_price_Other->clear();
    ui->lineEdit_other_id->clear();
}


void Stock::on_pushButton_stkdelete_other_clicked()
{

    deleteMemberTable(ui->lineEdit_other_id->text());
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();
    modal->setQuery("SELECT * FROM Prdoucts");
    ui->tableView_other->setModel(modal);
    conn.connClose();
    showTable();
    ui->lineEdit_add_other->clear();
    ui->spinBox_piece_Other->clear();
    ui->spinBox_price_Other->clear();
    ui->lineEdit_other_id->clear();
}


void Stock::on_pushButton_All_tabledelete_Other_clicked()
{
    Login conn;

    conn.connOpen();
    QSqlQuery qry;
    QSqlQueryModel* modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Others");
     qry.prepare("DELETE FROM Products WHERE category_id='3'");
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Delete Product"));
       ui->label_status_other->setText("Delete product");


       showTable();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Delete"),tr(" NOT Delete Product"));
        ui->label_status_other->setText("Not Delete product");
            qDebug()<<qry.lastError();

    }
}


void Stock::on_tableView_other_activated(const QModelIndex &index)
{
    QString val=ui->tableView_other->model()->data(index).toString();

        Login conn;

        if(!conn.connOpen())
        {
            qDebug()<<"Failed to open Others Database";
        }
        conn.connOpen();
        QSqlQuery qry;

        qry.prepare("SELECT * FROM Products WHERE id='"+val+"'or name='"+val+"'or price='"+val+"'or piece='"+val+"'");
        if(qry.exec())
        {
           while(qry.next())
            {
                ui->lineEdit_other_id->setText(qry.value(0).toString());
                ui->lineEdit_add_other->setText(qry.value(1).toString());
                ui->spinBox_price_Other->setValue(qry.value(2).toInt());
                ui->spinBox_piece_Other->setValue(qry.value(3).toInt());


                conn.connOpen();
            }

            conn.connClose();


        }
        else
        {

            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
        }
}


void Stock::on_comboBox_select_table_other_activated()
{

    QString id=ui->comboBox_select_table_other->currentText();




   Login conn;


   conn.connOpen();
   QSqlQuery qry;

   qry.prepare("SELECT * FROM Products WHERE id='"+id+"'");
   if(qry.exec())
   {
       while(qry.next())
       {
           ui->lineEdit_other_id->setText(qry.value(0).toString());
           ui->lineEdit_add_other->setText(qry.value(1).toString());
           ui->spinBox_price_Other->setValue(qry.value(2).toInt());
           ui->spinBox_piece_Other->setValue(qry.value(3).toInt());



       }




   }
   else
   {

       QMessageBox::critical(this,tr("error::"),qry.lastError().text());
   }
   conn.connClose();
}

//--------------------------------------------------OTHERS END---------------------------------------------------------




