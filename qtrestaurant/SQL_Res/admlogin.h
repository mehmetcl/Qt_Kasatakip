#ifndef ADMLOGIN_H
#define ADMLOGIN_H

#include <QDialog>

namespace Ui {
class Admlogin;
}

class Admlogin : public QDialog
{
    Q_OBJECT

public:
    explicit Admlogin(QWidget *parent = nullptr);
    ~Admlogin();

private slots:
    void on_pushButton_adm_ok_clicked();

private:
    Ui::Admlogin *ui;
};

#endif // ADMLOGIN_H
