#include "singin.h"
#include "ui_singin.h"

void Singin::init_combobox_job(QComboBox *combo1)
{
    combo1->addItem("Your Choice");
    combo1->addItem("Engineer");
    combo1->addItem("Doctor");
    combo1->addItem("Accountant");
    combo1->addItem("Administrator");
    combo1->addItem("Advertiser");
    combo1->addItem("Carpenter");
    combo1->addItem("Dentist");
    combo1->addItem("Mechanic");
    combo1->addItem("Manager");
    combo1->setCurrentIndex(0);
}

void Singin::init_combobox_age(QComboBox *combo1)
{
    combo1->addItem("Your Choice");
    combo1->addItem("18");
    combo1->addItem("19");
    combo1->addItem("20");
    combo1->addItem("21");
    combo1->addItem("22");
    combo1->addItem("23");
    combo1->addItem("24");
    combo1->addItem("25");
    combo1->addItem("26");
    combo1->addItem("27");
    combo1->addItem("28");
    combo1->addItem("29");
    combo1->addItem("30");
    combo1->setCurrentIndex(0);
}

void Singin::init_combobox_gender(QComboBox *combo1)
{
    combo1->addItem("Your Choice");
    combo1->addItem("Female");
    combo1->addItem("Male");
    combo1->addItem("specified");
    combo1->setCurrentIndex(0);
}

bool Singin::addtable(QString user_name, QString first_name, QString last_name, QString password, QString phone_number, QString address, QString age, QString gender, QString job)
{
    QSqlQuery qry;
    qry.prepare("INSERT INTO customertbl(user_name,first_name,last_name,password,phone_number,address,age,gender,job)"
                "VALUES(:user_name,:first_name,:last_name,:password,:phone_number,:address,:age,:gender,:job)");
    qry.bindValue(":user_name",user_name);
    qry.bindValue(":first_name",first_name);
    qry.bindValue(":last_name",last_name);
    qry.bindValue(":password",password);
    qry.bindValue(":phone_number",phone_number);
    qry.bindValue(":address",address);
    qry.bindValue(":age",age);
    qry.bindValue(":gender",gender);
    qry.bindValue(":job",job);

    bool res_insertion=qry.exec();
        if(!res_insertion)
          {
            qDebug()<<"Add ERROR";
                qDebug()<<qry.lastError();


          }
         else
          {
         qDebug()<<"Add OK!";
          }
    return res_insertion;
}

Singin::Singin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Singin)
{
    ui->setupUi(this);
    setWindowTitle("Singin");
    QPixmap (pixel)(":/edit.png");
    QPixmap pix4=pixel.scaled(100,500,Qt::KeepAspectRatio);
    ui->label_sngin_image->setPixmap(pix4);
    init_combobox_age(ui->comboBox_sngin_age);
    init_combobox_gender(ui->comboBox_Sngin_gender);
    init_combobox_job(ui->comboBox_sngin_job);

}

Singin::~Singin()
{
    delete ui;
}

void Singin::on_pushButton_sng_ok_clicked()
{
    QMessageBox msgBox;
     if(ui->lineEdit_sngin_firtmane->text()==""||ui->lineEdit_sngin_lastname->text()==""||ui->lineEdit_sngin_password->text()==""||ui->lineEdit_sngin_username->text()==""||ui->lineEdit_sngin_phone->text()=="")
     {
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Please Fill In The Required Fields!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

     }
     else
     {

         addtable(ui->lineEdit_sngin_username->text(),ui->lineEdit_sngin_firtmane->text(),
                          ui->lineEdit_sngin_lastname->text(),ui->lineEdit_sngin_password->text(),
                          ui->lineEdit_sngin_phone->text(),ui->textEdit_sngin_address->toPlainText(),
                          ui->comboBox_sngin_age->currentText(),ui->comboBox_Sngin_gender->currentText(),
                          ui->comboBox_sngin_job->currentText());

         msgBox.setWindowTitle("Completed..");
         msgBox.setText("Registration successful.");
         msgBox.setStandardButtons(QMessageBox::Ok);
         msgBox.exec();

      Singin::hide();

}
}

