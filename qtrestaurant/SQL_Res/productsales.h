#ifndef PRODUCTSALES_H
#define PRODUCTSALES_H

#include <QDialog>

namespace Ui {
class Productsales;
}

class Productsales : public QDialog
{
    Q_OBJECT

public:
    void addMemberTable(QString table_id,QString product_id,QString price,QString piece);
    void ShowTable();
    explicit Productsales(QWidget *parent = nullptr);
    QString table_id;
    void read_id(QString id);
    ~Productsales();

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_sell_clicked(bool checked);

    void on_pushButton_sell_clicked();

private:
    Ui::Productsales *ui;
};

#endif // PRODUCTSALES_H
