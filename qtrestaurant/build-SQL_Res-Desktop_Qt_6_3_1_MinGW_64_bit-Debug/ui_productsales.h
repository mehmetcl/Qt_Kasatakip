/********************************************************************************
** Form generated from reading UI file 'productsales.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSALES_H
#define UI_PRODUCTSALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Productsales
{
public:
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_piece;
    QPushButton *pushButton_sell;

    void setupUi(QDialog *Productsales)
    {
        if (Productsales->objectName().isEmpty())
            Productsales->setObjectName(QString::fromUtf8("Productsales"));
        Productsales->resize(684, 458);
        tableView = new QTableView(Productsales);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 70, 611, 181));
        widget = new QWidget(Productsales);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 290, 424, 26));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_id = new QLineEdit(widget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));

        gridLayout->addWidget(lineEdit_id, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 1);

        lineEdit_piece = new QLineEdit(widget);
        lineEdit_piece->setObjectName(QString::fromUtf8("lineEdit_piece"));

        gridLayout->addWidget(lineEdit_piece, 0, 2, 1, 1);

        pushButton_sell = new QPushButton(widget);
        pushButton_sell->setObjectName(QString::fromUtf8("pushButton_sell"));

        gridLayout->addWidget(pushButton_sell, 0, 3, 1, 1);


        retranslateUi(Productsales);

        QMetaObject::connectSlotsByName(Productsales);
    } // setupUi

    void retranslateUi(QDialog *Productsales)
    {
        Productsales->setWindowTitle(QCoreApplication::translate("Productsales", "Dialog", nullptr));
        pushButton_sell->setText(QCoreApplication::translate("Productsales", "Sell", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Productsales: public Ui_Productsales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSALES_H
