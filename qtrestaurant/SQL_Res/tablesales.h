#ifndef TABLESALES_H
#define TABLESALES_H

#include <QDialog>

namespace Ui {
class Tablesales;
}

class Tablesales : public QDialog
{
    Q_OBJECT

public:
   void ShowTable();
   void init(QString table_id2);
   QString table_id;
   QString sales_id;
    explicit Tablesales(QWidget *parent = nullptr);
    explicit Tablesales(QString *tbl_id);
    ~Tablesales();


private slots:
    void on_pushButton_insert_clicked();



    void on_pushButton_delete_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_Tablesales_finished(int result);

    void on_pushButtonHesap_clicked();

    void on_Tablesales_rejected();

private:
    Ui::Tablesales *ui;
};

#endif // TABLESALES_H
