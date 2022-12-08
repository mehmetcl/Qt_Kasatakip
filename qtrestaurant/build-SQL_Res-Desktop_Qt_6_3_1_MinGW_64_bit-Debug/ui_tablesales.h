/********************************************************************************
** Form generated from reading UI file 'tablesales.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLESALES_H
#define UI_TABLESALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Tablesales
{
public:
    QTableView *tableView;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_delete;
    QPushButton *pushButtonHesap;

    void setupUi(QDialog *Tablesales)
    {
        if (Tablesales->objectName().isEmpty())
            Tablesales->setObjectName(QString::fromUtf8("Tablesales"));
        Tablesales->resize(988, 334);
        tableView = new QTableView(Tablesales);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 50, 781, 211));
        pushButton_insert = new QPushButton(Tablesales);
        pushButton_insert->setObjectName(QString::fromUtf8("pushButton_insert"));
        pushButton_insert->setGeometry(QRect(870, 60, 80, 24));
        pushButton_delete = new QPushButton(Tablesales);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(870, 90, 80, 24));
        pushButtonHesap = new QPushButton(Tablesales);
        pushButtonHesap->setObjectName(QString::fromUtf8("pushButtonHesap"));
        pushButtonHesap->setGeometry(QRect(850, 290, 121, 24));

        retranslateUi(Tablesales);

        QMetaObject::connectSlotsByName(Tablesales);
    } // setupUi

    void retranslateUi(QDialog *Tablesales)
    {
        Tablesales->setWindowTitle(QCoreApplication::translate("Tablesales", "Dialog", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("Tablesales", "insert", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Tablesales", "delete", nullptr));
        pushButtonHesap->setText(QCoreApplication::translate("Tablesales", "Hesap G\303\266r\303\274nt\303\274le", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tablesales: public Ui_Tablesales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESALES_H
