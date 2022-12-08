/********************************************************************************
** Form generated from reading UI file 'enterloginn.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERLOGINN_H
#define UI_ENTERLOGINN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enterloginn
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *masa_1;
    QPushButton *masa_2;
    QPushButton *masa_3;
    QPushButton *masa_4;
    QPushButton *masa_5;
    QPushButton *masa_6;
    QPushButton *masa_7;
    QPushButton *masa_8;
    QPushButton *masa_9;
    QPushButton *masa_10;

    void setupUi(QDialog *Enterloginn)
    {
        if (Enterloginn->objectName().isEmpty())
            Enterloginn->setObjectName(QString::fromUtf8("Enterloginn"));
        Enterloginn->resize(855, 646);
        layoutWidget = new QWidget(Enterloginn);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 200, 526, 208));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        masa_1 = new QPushButton(layoutWidget);
        masa_1->setObjectName(QString::fromUtf8("masa_1"));
        masa_1->setMinimumSize(QSize(100, 100));
        masa_1->setMaximumSize(QSize(100, 100));
        masa_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(masa_1, 0, 0, 1, 1);

        masa_2 = new QPushButton(layoutWidget);
        masa_2->setObjectName(QString::fromUtf8("masa_2"));
        masa_2->setMinimumSize(QSize(100, 100));
        masa_2->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_2, 0, 1, 1, 1);

        masa_3 = new QPushButton(layoutWidget);
        masa_3->setObjectName(QString::fromUtf8("masa_3"));
        masa_3->setMinimumSize(QSize(100, 100));
        masa_3->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_3, 0, 2, 1, 1);

        masa_4 = new QPushButton(layoutWidget);
        masa_4->setObjectName(QString::fromUtf8("masa_4"));
        masa_4->setMinimumSize(QSize(100, 100));
        masa_4->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_4, 0, 3, 1, 1);

        masa_5 = new QPushButton(layoutWidget);
        masa_5->setObjectName(QString::fromUtf8("masa_5"));
        masa_5->setMinimumSize(QSize(100, 100));
        masa_5->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_5, 0, 4, 1, 1);

        masa_6 = new QPushButton(layoutWidget);
        masa_6->setObjectName(QString::fromUtf8("masa_6"));
        masa_6->setMinimumSize(QSize(100, 100));
        masa_6->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_6, 1, 0, 1, 1);

        masa_7 = new QPushButton(layoutWidget);
        masa_7->setObjectName(QString::fromUtf8("masa_7"));
        masa_7->setMinimumSize(QSize(100, 100));
        masa_7->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_7, 1, 1, 1, 1);

        masa_8 = new QPushButton(layoutWidget);
        masa_8->setObjectName(QString::fromUtf8("masa_8"));
        masa_8->setMinimumSize(QSize(100, 100));
        masa_8->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_8, 1, 2, 1, 1);

        masa_9 = new QPushButton(layoutWidget);
        masa_9->setObjectName(QString::fromUtf8("masa_9"));
        masa_9->setMinimumSize(QSize(100, 100));
        masa_9->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_9, 1, 3, 1, 1);

        masa_10 = new QPushButton(layoutWidget);
        masa_10->setObjectName(QString::fromUtf8("masa_10"));
        masa_10->setMinimumSize(QSize(100, 100));
        masa_10->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(masa_10, 1, 4, 1, 1);


        retranslateUi(Enterloginn);

        QMetaObject::connectSlotsByName(Enterloginn);
    } // setupUi

    void retranslateUi(QDialog *Enterloginn)
    {
        Enterloginn->setWindowTitle(QCoreApplication::translate("Enterloginn", "Dialog", nullptr));
        masa_1->setText(QCoreApplication::translate("Enterloginn", "Masa_1", nullptr));
        masa_2->setText(QCoreApplication::translate("Enterloginn", "Masa_2", nullptr));
        masa_3->setText(QCoreApplication::translate("Enterloginn", "Masa_3", nullptr));
        masa_4->setText(QCoreApplication::translate("Enterloginn", "Masa_4", nullptr));
        masa_5->setText(QCoreApplication::translate("Enterloginn", "Masa_5", nullptr));
        masa_6->setText(QCoreApplication::translate("Enterloginn", "Masa_6", nullptr));
        masa_7->setText(QCoreApplication::translate("Enterloginn", "Masa_7", nullptr));
        masa_8->setText(QCoreApplication::translate("Enterloginn", "Masa_8", nullptr));
        masa_9->setText(QCoreApplication::translate("Enterloginn", "Masa_9", nullptr));
        masa_10->setText(QCoreApplication::translate("Enterloginn", "Masa_10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enterloginn: public Ui_Enterloginn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERLOGINN_H
