#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
