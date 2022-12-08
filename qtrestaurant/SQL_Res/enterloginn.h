#ifndef ENTERLOGINN_H
#define ENTERLOGINN_H

#include <QDialog>
#include<QPalette>
#include <QSqlDatabase>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>
#include<QPixmap>
#include<QMessageBox>
namespace Ui {
class Enterloginn;
}

class Enterloginn : public QDialog
{
    Q_OBJECT

public:
QString m_tableid;
    void addtables(QString table_id,QString table_name,QString table_stateFlag);
    void updatetables(QString table_id, QString table_name,QString table_stateFlag);


    void comboShow();
      void showTable();
public:
    explicit Enterloginn(QWidget *parent = nullptr);

    ~Enterloginn();

private slots:



      void on_masa_1_clicked();

      void on_masa_2_clicked();

      void on_masa_3_clicked();

      void on_masa_4_clicked();

      void on_masa_5_clicked();

      void on_masa_6_clicked();

      void on_masa_7_clicked();

      void on_masa_8_clicked();

      void on_masa_9_clicked();

      void on_masa_10_clicked();

private:
    Ui::Enterloginn *ui;
};

#endif // ENTERLOGINN_H
