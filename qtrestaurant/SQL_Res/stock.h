#ifndef STOCK_H
#define STOCK_H

#include <QDialog>

namespace Ui {
class Stock;
}

class Stock : public QDialog
{
    Q_OBJECT
public:

      void addMemberTable(QString member_name,QString member_price,QString member_piece,QString category_name);
      void updateMemberable(QString member_id, QString member_name,QString member_price,QString member_piece);
      void deleteMemberTable(QString member_id);
      void comboShow();
      void showTable();
public:
    explicit Stock(QWidget *parent = nullptr);
    ~Stock();

private slots:
      void on_pushButton_prd_upd_food_clicked();

      void on_pushButton_stkdelete_food_clicked();





      void on_tableView_food_activated(const QModelIndex &index);

      void on_pushButton_prd_add_other_clicked();

      void on_pushButton_prd_add_clicked();



      void on_pushButton_All_tabledelete_food_clicked();

      void on_pushButton_prd_upd_drink_clicked();

      void on_pushButton_stkdelete_drink_clicked();

      void on_pushButton_All_tabledelete_drink_clicked();

      void on_tableView_drink_activated(const QModelIndex &index);

      void on_pushButton_prd_upd_other_clicked();

      void on_pushButton_stkdelete_other_clicked();

      void on_pushButton_All_tabledelete_Other_clicked();

      void on_tableView_other_activated(const QModelIndex &index);

      void on_comboBox_select_table_food_activated();

      void on_comboBox_select_table_drink_activated();

      void on_comboBox_select_table_other_activated();


private:
    Ui::Stock *ui;
};

#endif // STOCK_H
