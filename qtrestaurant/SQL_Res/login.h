#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QGraphicsScene>
#include <QSqlDatabase>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>
#include<QPixmap>
#include<QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    void connClose();
    bool connOpen();
public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_singin_clicked();

    void on_pushButton_adm_clicked();

    void on_pushButton_calculator_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
