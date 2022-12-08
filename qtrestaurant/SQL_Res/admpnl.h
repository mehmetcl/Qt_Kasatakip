#ifndef ADMPNL_H
#define ADMPNL_H

#include <QDialog>

namespace Ui {
class Admpnl;
}

class Admpnl : public QDialog
{
    Q_OBJECT

public:
    explicit Admpnl(QWidget *parent = nullptr);
    ~Admpnl();

private slots:
    void on_pushButton_stocktr_clicked();

    void on_pushButton_select_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();



    void on_comboBox_table_select_currentTextChanged();



    void on_tableView_customers_activated(const QModelIndex &index);

private:
    Ui::Admpnl *ui;
};

#endif // ADMPNL_H
