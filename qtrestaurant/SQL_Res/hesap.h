#ifndef HESAP_H
#define HESAP_H

#include <QDialog>

namespace Ui {
class Hesap;
}

class Hesap : public QDialog
{
    Q_OBJECT

public:
    explicit Hesap(QWidget *parent = nullptr);
    ~Hesap();

    void show_list();
    QString table_id;
    void read_id(QString id);
    int totalPrice=0;
private slots:
    void on_tableView_hesap_activated(const QModelIndex &index);

    void on_Hesap_accepted();

    void on_pushButtonHesap_clicked();

private:
    Ui::Hesap *ui;
};

#endif // HESAP_H
