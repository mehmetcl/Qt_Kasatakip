#ifndef SINGIN_H
#define SINGIN_H

#include <QDialog>
#include<QComboBox>
#include "login.h"
namespace Ui {
class Singin;
}

class Singin : public QDialog
{
    Q_OBJECT
public:
    void init_combobox_job(QComboBox *combo1);
    void init_combobox_age(QComboBox *combo1);
    void init_combobox_gender(QComboBox *combo1);
    bool addtable(QString user_name,QString first_name,QString last_name,QString password,QString phone_number,QString address,QString age,QString gender,QString job);
public:
    explicit Singin(QWidget *parent = nullptr);
    ~Singin();

private slots:
    void on_pushButton_sng_ok_clicked();

private:
    Ui::Singin *ui;
};

#endif // SINGIN_H
