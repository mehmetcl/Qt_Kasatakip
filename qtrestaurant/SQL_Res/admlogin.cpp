#include "admlogin.h"
#include "ui_admlogin.h"
#include<QMessageBox>
#include"admpnl.h"
Admlogin::Admlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admlogin)
{
    ui->setupUi(this);
    setWindowTitle("Admin Login");
    QPixmap (pixel)(":/leader.png");
    QPixmap pix4=pixel.scaled(100,500,Qt::KeepAspectRatio);
    ui->label_image->setPixmap(pix4);
}

Admlogin::~Admlogin()
{
    delete ui;
}

void Admlogin::on_pushButton_adm_ok_clicked()
{
    QMessageBox msj1;
if(!(ui->lineEdit_adm_username->text()=="admin"&&ui->lineEdit_adm_password->text()=="admin"))
{
    msj1.setWindowTitle("Uyarı penceresi");
    msj1.setText("Lutfen gerekli alanları doğru doldurunuz.");
    msj1.setStandardButtons(QMessageBox::Ok);
    msj1.exec();

}
else
{

    Admpnl * admpnl=new Admpnl(this);
    msj1.setText("Bilgiler doğru giriş yapıldı.");
    msj1.setStandardButtons(QMessageBox::Ok);
    Admlogin::hide();
    admpnl->show();

}
}

