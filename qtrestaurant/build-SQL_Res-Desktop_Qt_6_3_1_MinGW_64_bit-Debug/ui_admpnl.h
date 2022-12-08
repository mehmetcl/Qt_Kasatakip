/********************************************************************************
** Form generated from reading UI file 'admpnl.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMPNL_H
#define UI_ADMPNL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Admpnl
{
public:
    QGridLayout *gridLayout_29;
    QGridLayout *gridLayout_28;
    QGridLayout *gridLayout_24;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_ap_id;
    QLineEdit *lineEdit_ap_username;
    QLineEdit *lineEdit_ap_firstname;
    QLineEdit *lineEdit_ap_lastname;
    QLineEdit *lineEdit_ap_password;
    QLineEdit *lineEdit_ap_phone;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QComboBox *comboBox_ap_gender;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QComboBox *comboBox_admpnl_age;
    QGridLayout *gridLayout_7;
    QLabel *label_10;
    QComboBox *comboBox_ap_job;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_10;
    QLabel *label_7;
    QTextEdit *textEdit_address;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_sql;
    QGridLayout *gridLayout_21;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_18;
    QPushButton *pushButton_select;
    QLabel *label_15;
    QGridLayout *gridLayout_15;
    QPushButton *pushButton_save;
    QLabel *label_12;
    QGridLayout *gridLayout_16;
    QPushButton *pushButton_update;
    QLabel *label_13;
    QGridLayout *gridLayout_17;
    QPushButton *pushButton_delete;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_27;
    QGridLayout *gridLayout_26;
    QGridLayout *gridLayout_25;
    QTableView *tableView_customers;
    QGridLayout *gridLayout_22;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_23;
    QLabel *label_16;
    QComboBox *comboBox_table_select;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_20;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_11;
    QPushButton *pushButton_stocktr;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_ap_status;

    void setupUi(QDialog *Admpnl)
    {
        if (Admpnl->objectName().isEmpty())
            Admpnl->setObjectName(QString::fromUtf8("Admpnl"));
        Admpnl->resize(896, 608);
        gridLayout_29 = new QGridLayout(Admpnl);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_28 = new QGridLayout();
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(Admpnl);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Admpnl);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(Admpnl);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(Admpnl);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(Admpnl);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(Admpnl);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_ap_id = new QLineEdit(Admpnl);
        lineEdit_ap_id->setObjectName(QString::fromUtf8("lineEdit_ap_id"));

        gridLayout_2->addWidget(lineEdit_ap_id, 0, 0, 1, 1);

        lineEdit_ap_username = new QLineEdit(Admpnl);
        lineEdit_ap_username->setObjectName(QString::fromUtf8("lineEdit_ap_username"));

        gridLayout_2->addWidget(lineEdit_ap_username, 1, 0, 1, 1);

        lineEdit_ap_firstname = new QLineEdit(Admpnl);
        lineEdit_ap_firstname->setObjectName(QString::fromUtf8("lineEdit_ap_firstname"));

        gridLayout_2->addWidget(lineEdit_ap_firstname, 2, 0, 1, 1);

        lineEdit_ap_lastname = new QLineEdit(Admpnl);
        lineEdit_ap_lastname->setObjectName(QString::fromUtf8("lineEdit_ap_lastname"));

        gridLayout_2->addWidget(lineEdit_ap_lastname, 3, 0, 1, 1);

        lineEdit_ap_password = new QLineEdit(Admpnl);
        lineEdit_ap_password->setObjectName(QString::fromUtf8("lineEdit_ap_password"));

        gridLayout_2->addWidget(lineEdit_ap_password, 4, 0, 1, 1);

        lineEdit_ap_phone = new QLineEdit(Admpnl);
        lineEdit_ap_phone->setObjectName(QString::fromUtf8("lineEdit_ap_phone"));

        gridLayout_2->addWidget(lineEdit_ap_phone, 5, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_9 = new QLabel(Admpnl);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        comboBox_ap_gender = new QComboBox(Admpnl);
        comboBox_ap_gender->setObjectName(QString::fromUtf8("comboBox_ap_gender"));

        gridLayout_5->addWidget(comboBox_ap_gender, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_8 = new QLabel(Admpnl);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        comboBox_admpnl_age = new QComboBox(Admpnl);
        comboBox_admpnl_age->setObjectName(QString::fromUtf8("comboBox_admpnl_age"));

        gridLayout_6->addWidget(comboBox_admpnl_age, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_10 = new QLabel(Admpnl);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_7->addWidget(label_10, 0, 0, 1, 1);

        comboBox_ap_job = new QComboBox(Admpnl);
        comboBox_ap_job->setObjectName(QString::fromUtf8("comboBox_ap_job"));

        gridLayout_7->addWidget(comboBox_ap_job, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_9, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_7 = new QLabel(Admpnl);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        textEdit_address = new QTextEdit(Admpnl);
        textEdit_address->setObjectName(QString::fromUtf8("textEdit_address"));

        gridLayout_10->addWidget(textEdit_address, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_13, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        label_sql = new QLabel(Admpnl);
        label_sql->setObjectName(QString::fromUtf8("label_sql"));
        label_sql->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_sql, 0, 0, 1, 2);


        gridLayout_24->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        pushButton_select = new QPushButton(Admpnl);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setMinimumSize(QSize(50, 50));
        pushButton_select->setMaximumSize(QSize(50, 50));
        pushButton_select->setStyleSheet(QString::fromUtf8("#pushButton_select{\n"
"background-color: transparent;\n"
"border-image: url(:select_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_select:pressed\n"
"{\n"
"   border-image: url(:select_open.png);\n"
"}\n"
""));

        gridLayout_18->addWidget(pushButton_select, 0, 0, 1, 1);

        label_15 = new QLabel(Admpnl);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_15, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        pushButton_save = new QPushButton(Admpnl);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setMinimumSize(QSize(50, 50));
        pushButton_save->setMaximumSize(QSize(50, 50));
        pushButton_save->setFont(font);
        pushButton_save->setStyleSheet(QString::fromUtf8("#pushButton_save{\n"
"background-color: transparent;\n"
"border-image: url(:save_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_save:pressed\n"
"{\n"
"   border-image: url(:save_open.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(pushButton_save, 0, 0, 1, 1);

        label_12 = new QLabel(Admpnl);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_12, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_15, 0, 1, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        pushButton_update = new QPushButton(Admpnl);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setMinimumSize(QSize(50, 50));
        pushButton_update->setMaximumSize(QSize(50, 50));
        pushButton_update->setFont(font);
        pushButton_update->setStyleSheet(QString::fromUtf8("#pushButton_update{\n"
"background-color: transparent;\n"
"border-image: url(:update_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_update:pressed\n"
"{\n"
"   border-image: url(:update_open.png);\n"
"}\n"
""));

        gridLayout_16->addWidget(pushButton_update, 0, 0, 1, 1);

        label_13 = new QLabel(Admpnl);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_13, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_16, 0, 2, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        pushButton_delete = new QPushButton(Admpnl);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setMinimumSize(QSize(50, 50));
        pushButton_delete->setMaximumSize(QSize(50, 50));
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QString::fromUtf8("#pushButton_delete{\n"
"background-color: transparent;\n"
"border-image: url(:delete_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_delete:pressed\n"
"{\n"
"   border-image: url(:delete_open.png);\n"
"}\n"
""));

        gridLayout_17->addWidget(pushButton_delete, 0, 0, 1, 1);

        label_14 = new QLabel(Admpnl);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_14, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_17, 0, 3, 1, 1);


        gridLayout_21->addLayout(gridLayout_19, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_24->addLayout(gridLayout_21, 1, 0, 1, 1);


        gridLayout_28->addLayout(gridLayout_24, 0, 0, 1, 1);

        gridLayout_27 = new QGridLayout();
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        tableView_customers = new QTableView(Admpnl);
        tableView_customers->setObjectName(QString::fromUtf8("tableView_customers"));

        gridLayout_25->addWidget(tableView_customers, 0, 0, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_16 = new QLabel(Admpnl);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_23->addWidget(label_16, 0, 0, 1, 1);

        comboBox_table_select = new QComboBox(Admpnl);
        comboBox_table_select->setObjectName(QString::fromUtf8("comboBox_table_select"));

        gridLayout_23->addWidget(comboBox_table_select, 1, 0, 1, 1);


        gridLayout_22->addLayout(gridLayout_23, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_25->addLayout(gridLayout_22, 1, 0, 1, 1);


        gridLayout_26->addLayout(gridLayout_25, 0, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        label_11 = new QLabel(Admpnl);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(label_11, 0, 1, 1, 1);

        pushButton_stocktr = new QPushButton(Admpnl);
        pushButton_stocktr->setObjectName(QString::fromUtf8("pushButton_stocktr"));
        pushButton_stocktr->setMinimumSize(QSize(50, 50));
        pushButton_stocktr->setMaximumSize(QSize(50, 50));
        pushButton_stocktr->setFont(font);
        pushButton_stocktr->setLayoutDirection(Qt::RightToLeft);
        pushButton_stocktr->setAutoFillBackground(false);
        pushButton_stocktr->setStyleSheet(QString::fromUtf8("#pushButton_stocktr{\n"
"background-color: transparent;\n"
"border-image: url(:stock_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_stocktr:pressed\n"
"{\n"
"   border-image: url(:stock_open.png);\n"
"}\n"
""));

        gridLayout_20->addWidget(pushButton_stocktr, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_11, 0, 3, 1, 1);


        gridLayout_26->addLayout(gridLayout_20, 1, 0, 1, 1);


        gridLayout_27->addLayout(gridLayout_26, 0, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_ap_status = new QLabel(Admpnl);
        label_ap_status->setObjectName(QString::fromUtf8("label_ap_status"));
        label_ap_status->setFont(font);

        gridLayout_14->addWidget(label_ap_status, 0, 1, 1, 1);


        gridLayout_27->addLayout(gridLayout_14, 1, 0, 1, 1);


        gridLayout_28->addLayout(gridLayout_27, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_28, 0, 0, 1, 1);


        retranslateUi(Admpnl);

        QMetaObject::connectSlotsByName(Admpnl);
    } // setupUi

    void retranslateUi(QDialog *Admpnl)
    {
        Admpnl->setWindowTitle(QCoreApplication::translate("Admpnl", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Admpnl", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("Admpnl", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Admpnl", "Firstname:", nullptr));
        label_4->setText(QCoreApplication::translate("Admpnl", "Lastname:", nullptr));
        label_5->setText(QCoreApplication::translate("Admpnl", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("Admpnl", "Phone:", nullptr));
        label_9->setText(QCoreApplication::translate("Admpnl", "Gender:", nullptr));
        label_8->setText(QCoreApplication::translate("Admpnl", "Age:", nullptr));
        label_10->setText(QCoreApplication::translate("Admpnl", "Job:", nullptr));
        label_7->setText(QCoreApplication::translate("Admpnl", "Address:", nullptr));
        label_sql->setText(QString());
        pushButton_select->setText(QString());
        label_15->setText(QCoreApplication::translate("Admpnl", "Select", nullptr));
        pushButton_save->setText(QString());
        label_12->setText(QCoreApplication::translate("Admpnl", "Save", nullptr));
        pushButton_update->setText(QString());
        label_13->setText(QCoreApplication::translate("Admpnl", "Update", nullptr));
        pushButton_delete->setText(QString());
        label_14->setText(QCoreApplication::translate("Admpnl", "Delete", nullptr));
        label_16->setText(QCoreApplication::translate("Admpnl", "Table Select", nullptr));
        label_11->setText(QCoreApplication::translate("Admpnl", "Stock Tracking", nullptr));
        pushButton_stocktr->setText(QString());
        label_ap_status->setText(QCoreApplication::translate("Admpnl", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admpnl: public Ui_Admpnl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMPNL_H
