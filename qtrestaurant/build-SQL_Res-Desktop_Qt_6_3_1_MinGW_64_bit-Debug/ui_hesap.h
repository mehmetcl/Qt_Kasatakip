/********************************************************************************
** Form generated from reading UI file 'hesap.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HESAP_H
#define UI_HESAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Hesap
{
public:
    QListWidget *listWidget;
    QPushButton *pushButtonHesap;

    void setupUi(QDialog *Hesap)
    {
        if (Hesap->objectName().isEmpty())
            Hesap->setObjectName(QString::fromUtf8("Hesap"));
        Hesap->resize(377, 427);
        listWidget = new QListWidget(Hesap);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 30, 321, 301));
        pushButtonHesap = new QPushButton(Hesap);
        pushButtonHesap->setObjectName(QString::fromUtf8("pushButtonHesap"));
        pushButtonHesap->setGeometry(QRect(30, 370, 80, 24));

        retranslateUi(Hesap);

        QMetaObject::connectSlotsByName(Hesap);
    } // setupUi

    void retranslateUi(QDialog *Hesap)
    {
        Hesap->setWindowTitle(QCoreApplication::translate("Hesap", "Dialog", nullptr));
        pushButtonHesap->setText(QCoreApplication::translate("Hesap", "Hesap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hesap: public Ui_Hesap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HESAP_H
