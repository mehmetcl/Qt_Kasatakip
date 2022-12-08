#include "admpnl.h"
#include "ui_admpnl.h"
#include"singin.h"
#include"login.h"
#include"admpnl.h"
#include<QItemSelectionModel>
#include"stock.h"
Admpnl::Admpnl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admpnl)
{
    ui->setupUi(this);
    setWindowTitle("Admin Panel");
    Singin *sgn=new Singin(this);
    sgn->init_combobox_age(ui->comboBox_admpnl_age);
    sgn->init_combobox_gender(ui->comboBox_ap_gender);
    sgn->init_combobox_job(ui->comboBox_ap_job);
    QPixmap (pixel)(":/sql_icon.png");
    QPixmap pix4=pixel.scaled(100,500,Qt::KeepAspectRatio);
    ui->label_sql->setPixmap(pix4);


}

Admpnl::~Admpnl()
{
    delete ui;
}

void Admpnl::on_pushButton_stocktr_clicked()
{
    Stock *stkc=new Stock(this);
    stkc->show();
}


void Admpnl::on_pushButton_select_clicked()
{
    Login conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    conn.connOpen();
    modal->setQuery("SELECT * FROM customertbl");
    ui->tableView_customers->setModel(modal);
    ui->comboBox_table_select->setModel(modal);


    if(!conn.connOpen())
     {
        ui->label_ap_status->setText("Failed to open the database");
     }
    else
     {
        ui->label_ap_status->setText("Connecting...");
     }

    qDebug()<<(modal->rowCount());
}


void Admpnl::on_pushButton_save_clicked()
{
    Login conn;
    Singin add;

    QMessageBox msgBox;
    conn.connOpen();
    add.addtable(ui->lineEdit_ap_username->text(),ui->lineEdit_ap_firstname->text(),
                 ui->lineEdit_ap_lastname->text(),ui->lineEdit_ap_password->text(),
                 ui->lineEdit_ap_phone->text(),ui->textEdit_address->toPlainText(),
                 ui->comboBox_admpnl_age->currentText(),ui->comboBox_ap_gender->currentText(),
                 ui->comboBox_ap_job->currentText());
        QMessageBox::information(this,tr("Save"),tr("Saved"));
        ui->label_ap_status->setText("Saved");
        QSqlQueryModel* modal=new QSqlQueryModel();
        conn.connOpen();
        modal->setQuery("SELECT * FROM customertbl");
        ui->tableView_customers->setModel(modal);

        conn.connClose();
}


void Admpnl::on_pushButton_update_clicked()
{
    Login conn;


    QString customer_id,user_name,first_name,last_name,password,phone_number,address,age,gender,job;
    customer_id= ui->lineEdit_ap_id->text();
    user_name  = ui->lineEdit_ap_username->text();
    first_name = ui->lineEdit_ap_firstname->text();
    last_name  = ui->lineEdit_ap_lastname->text();
    password   = ui->lineEdit_ap_password->text();
    phone_number = ui->lineEdit_ap_phone->text();
    address   = ui->textEdit_address->toPlainText();
    age       =ui->comboBox_admpnl_age->currentText();
    gender    =ui->comboBox_ap_gender->currentText();
    job       =ui->comboBox_ap_job->currentText();

    conn.connOpen();
    QSqlQuery qry;
     QSqlQueryModel* modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM customertbl");
    qry.prepare("UPDATE customertbl SET user_name='"+user_name+"',first_name='"+first_name+"',last_name='"+last_name+"',password='"+password+"'"
                ",phone_number='"+phone_number+"',address='"+address+"',age='"+age+"',gender='"+gender+"',job='"+job+"' WHERE customer_id='"+customer_id+"'" );
    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated"));
       ui->label_ap_status->setText("UPDATE");

       conn.connOpen();
       modal->setQuery("SELECT * FROM customertbl");
       ui->tableView_customers->setModel(modal);
       conn.connClose();

    }
    else
    {
        QMessageBox::critical(this,tr("Not Edit"),tr(" NOT Updated"));
        ui->label_ap_status->setText("Not UPDATE");
            qDebug()<<qry.lastError();

    }
}


void Admpnl::on_pushButton_delete_clicked()
{
    //QItemSelectionModel *select = ui->tableView_customers->selectionModel();
    //select->selectedColumns();

    //if(select->hasSelection())
    //{
       Login conn;
       conn.connOpen();
         QSqlQuery qry;
       QSqlQueryModel* modal= new QSqlQueryModel();
       modal->setQuery("SELECT * FROM customertbl");
       ui->tableView_customers->setModel(modal);
       //int satir= modal->rowCount();
        QString customer_id;
        customer_id=ui->lineEdit_ap_id->text();
        qry.prepare("DELETE FROM customertbl WHERE customer_id='"+customer_id+"'");
        if(qry.exec())
        {
           QMessageBox::information(this,tr("Delete"),tr("Deleted"));
           ui->label_ap_status->setText("DELETE");
           QSqlQueryModel* modal=new QSqlQueryModel();
           conn.connOpen();
           modal->setQuery("SELECT * FROM customertbl");
           ui->tableView_customers->setModel(modal);

        }
        else
        {
            QMessageBox::critical(this,tr("Not Delete"),tr("Not Deleted"));
            qDebug()<<qry.lastError();

        }

    //}
}





void Admpnl::on_comboBox_table_select_currentTextChanged()
{
    QString customer_id=ui->comboBox_table_select->currentText();
    Login conn;

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open Database";
    }
    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM customertbl WHERE customer_id='"+customer_id+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ap_id->setText(qry.value(0).toString());
            ui->lineEdit_ap_username->setText(qry.value(1).toString());
            ui->lineEdit_ap_firstname->setText(qry.value(2).toString());
            ui->lineEdit_ap_lastname->setText(qry.value(3).toString());
            ui->lineEdit_ap_password->setText(qry.value(4).toString());
            ui->lineEdit_ap_phone->setText(qry.value(5).toString());
            ui->textEdit_address->setPlainText(qry.value(6).toString());
            ui->comboBox_admpnl_age->setCurrentText(qry.value(7).toString());
            ui->comboBox_ap_gender->setCurrentText(qry.value(8).toString());
            ui->comboBox_ap_job->setCurrentText(qry.value(9).toString());

            conn.connOpen();
        }

        conn.connClose();


    }
    else
    {

        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}





void Admpnl::on_tableView_customers_activated(const QModelIndex &index)
{
    QString val=ui->tableView_customers->model()->data(index).toString();
    //QString val_age=ui->tableView_customers->model()->data(index).toString();
    Login conn;

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open Database";
    }
    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM customertbl WHERE customer_id='"+val+"'or user_name='"+val+"'or first_name='"+val+"'or last_name='"+val+"'or password='"+val+"'"
                                                                                                                                                            "or phone_number='"+val+"'or address='"+val+"'or age='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ap_id->setText(qry.value(0).toString());
            ui->lineEdit_ap_username->setText(qry.value(1).toString());
            ui->lineEdit_ap_firstname->setText(qry.value(2).toString());
            ui->lineEdit_ap_lastname->setText(qry.value(3).toString());
            ui->lineEdit_ap_password->setText(qry.value(4).toString());
            ui->lineEdit_ap_phone->setText(qry.value(5).toString());
            ui->textEdit_address->setPlainText(qry.value(6).toString());
            ui->comboBox_admpnl_age->setCurrentText(qry.value(7).toString());
            ui->comboBox_ap_gender->setCurrentText(qry.value(8).toString());
            ui->comboBox_ap_job->setCurrentText(qry.value(9).toString());


            conn.connOpen();
        }

        conn.connClose();


    }
    else
    {

        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

