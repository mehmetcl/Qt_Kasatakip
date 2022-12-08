/********************************************************************************
** Form generated from reading UI file 'singin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGIN_H
#define UI_SINGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Singin
{
public:
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_15;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_11;
    QLabel *label_sngin_image;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_sngin_username;
    QLineEdit *lineEdit_sngin_firtmane;
    QLineEdit *lineEdit_sngin_lastname;
    QLineEdit *lineEdit_sngin_phone;
    QLineEdit *lineEdit_sngin_password;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGridLayout *gridLayout_5;
    QComboBox *comboBox_sngin_age;
    QComboBox *comboBox_Sngin_gender;
    QComboBox *comboBox_sngin_job;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *textEdit_sngin_address;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_sng_ok;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Singin)
    {
        if (Singin->objectName().isEmpty())
            Singin->setObjectName(QString::fromUtf8("Singin"));
        Singin->resize(400, 456);
        Singin->setMinimumSize(QSize(400, 450));
        Singin->setMaximumSize(QSize(400, 456));
        gridLayout_16 = new QGridLayout(Singin);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_4, 0, 1, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_sngin_image = new QLabel(Singin);
        label_sngin_image->setObjectName(QString::fromUtf8("label_sngin_image"));
        label_sngin_image->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_sngin_image, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Singin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Singin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(Singin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(Singin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(Singin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_sngin_username = new QLineEdit(Singin);
        lineEdit_sngin_username->setObjectName(QString::fromUtf8("lineEdit_sngin_username"));

        gridLayout_3->addWidget(lineEdit_sngin_username, 0, 0, 1, 1);

        lineEdit_sngin_firtmane = new QLineEdit(Singin);
        lineEdit_sngin_firtmane->setObjectName(QString::fromUtf8("lineEdit_sngin_firtmane"));

        gridLayout_3->addWidget(lineEdit_sngin_firtmane, 1, 0, 1, 1);

        lineEdit_sngin_lastname = new QLineEdit(Singin);
        lineEdit_sngin_lastname->setObjectName(QString::fromUtf8("lineEdit_sngin_lastname"));

        gridLayout_3->addWidget(lineEdit_sngin_lastname, 2, 0, 1, 1);

        lineEdit_sngin_phone = new QLineEdit(Singin);
        lineEdit_sngin_phone->setObjectName(QString::fromUtf8("lineEdit_sngin_phone"));

        gridLayout_3->addWidget(lineEdit_sngin_phone, 3, 0, 1, 1);

        lineEdit_sngin_password = new QLineEdit(Singin);
        lineEdit_sngin_password->setObjectName(QString::fromUtf8("lineEdit_sngin_password"));

        gridLayout_3->addWidget(lineEdit_sngin_password, 4, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(Singin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(Singin);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(Singin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        comboBox_sngin_age = new QComboBox(Singin);
        comboBox_sngin_age->setObjectName(QString::fromUtf8("comboBox_sngin_age"));

        gridLayout_5->addWidget(comboBox_sngin_age, 0, 0, 1, 1);

        comboBox_Sngin_gender = new QComboBox(Singin);
        comboBox_Sngin_gender->setObjectName(QString::fromUtf8("comboBox_Sngin_gender"));

        gridLayout_5->addWidget(comboBox_Sngin_gender, 1, 0, 1, 1);

        comboBox_sngin_job = new QComboBox(Singin);
        comboBox_sngin_job->setObjectName(QString::fromUtf8("comboBox_sngin_job"));

        gridLayout_5->addWidget(comboBox_sngin_job, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 2);


        gridLayout_11->addLayout(gridLayout_8, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_6 = new QLabel(Singin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_9->addWidget(label_6, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 2, 1, 1, 1);

        textEdit_sngin_address = new QTextEdit(Singin);
        textEdit_sngin_address->setObjectName(QString::fromUtf8("textEdit_sngin_address"));

        gridLayout_9->addWidget(textEdit_sngin_address, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        pushButton_sng_ok = new QPushButton(Singin);
        pushButton_sng_ok->setObjectName(QString::fromUtf8("pushButton_sng_ok"));
        pushButton_sng_ok->setMinimumSize(QSize(50, 50));
        pushButton_sng_ok->setMaximumSize(QSize(50, 50));
        pushButton_sng_ok->setFont(font);
        pushButton_sng_ok->setStyleSheet(QString::fromUtf8("#pushButton_sng_ok{\n"
"background-color: transparent;\n"
"border-image: url(:ok_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_sng_ok:pressed\n"
"{\n"
"   border-image: url(:ok_open.png);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_sng_ok, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_12, 1, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 1, 1, 2, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_10, 2, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_15, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_16->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(Singin);

        QMetaObject::connectSlotsByName(Singin);
    } // setupUi

    void retranslateUi(QDialog *Singin)
    {
        Singin->setWindowTitle(QCoreApplication::translate("Singin", "Dialog", nullptr));
        label_sngin_image->setText(QCoreApplication::translate("Singin", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Singin", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("Singin", "Firtname:", nullptr));
        label_3->setText(QCoreApplication::translate("Singin", "Lastname:", nullptr));
        label_4->setText(QCoreApplication::translate("Singin", "Phone Number:", nullptr));
        label_5->setText(QCoreApplication::translate("Singin", "Password:", nullptr));
        label_7->setText(QCoreApplication::translate("Singin", "Age:", nullptr));
        label_8->setText(QCoreApplication::translate("Singin", "Gender:", nullptr));
        label_9->setText(QCoreApplication::translate("Singin", "Job:", nullptr));
        label_6->setText(QCoreApplication::translate("Singin", "Adress:", nullptr));
        pushButton_sng_ok->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Singin: public Ui_Singin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGIN_H
