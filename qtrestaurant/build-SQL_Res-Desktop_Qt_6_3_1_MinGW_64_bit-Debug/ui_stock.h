/********************************************************************************
** Form generated from reading UI file 'stock.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Stock
{
public:
    QGridLayout *gridLayout_51;
    QSpacerItem *verticalSpacer_8;
    QGridLayout *gridLayout_50;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_49;
    QGridLayout *gridLayout_48;
    QGridLayout *gridLayout_43;
    QTableView *tableView_food;
    QTableView *tableView_drink;
    QTableView *tableView_other;
    QGridLayout *gridLayout_47;
    QGridLayout *gridLayout_44;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_41;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_40;
    QGridLayout *gridLayout_39;
    QLabel *label_47;
    QLineEdit *lineEdit_food_id;
    QGridLayout *gridLayout_38;
    QGridLayout *gridLayout_37;
    QGridLayout *gridLayout_36;
    QLabel *label_41;
    QComboBox *comboBox_select_table_food;
    QGridLayout *gridLayout_33;
    QLabel *label_7;
    QSpinBox *spinBox_price_Food;
    QLabel *label_6;
    QGridLayout *gridLayout_34;
    QLabel *label_9;
    QSpinBox *spinBox_piece_Food;
    QGridLayout *gridLayout_35;
    QLabel *label_28;
    QLineEdit *lineEdit_add_food;
    QGridLayout *gridLayout_32;
    QGridLayout *gridLayout_29;
    QPushButton *pushButton_All_tabledelete_food;
    QLabel *label_45;
    QGridLayout *gridLayout_30;
    QPushButton *pushButton_prd_upd_food;
    QLabel *label_10;
    QGridLayout *gridLayout_31;
    QPushButton *pushButton_stkdelete_food;
    QLabel *label_31;
    QLabel *label_8;
    QLabel *label_status_food;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_46;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_28;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_27;
    QGridLayout *gridLayout_26;
    QGridLayout *gridLayout_25;
    QLabel *label_48;
    QLineEdit *lineEdit_drink_id;
    QGridLayout *gridLayout_24;
    QGridLayout *gridLayout_19;
    QLabel *label_43;
    QComboBox *comboBox_select_table_drink;
    QGridLayout *gridLayout_20;
    QLabel *label_26;
    QSpinBox *spinBox_price_Drink;
    QLabel *label_27;
    QGridLayout *gridLayout_21;
    QLabel *label_25;
    QSpinBox *spinBox_piece_Drink;
    QGridLayout *gridLayout_22;
    QLabel *label_24;
    QLineEdit *lineEdit_add_Drink;
    QGridLayout *gridLayout_23;
    QGridLayout *gridLayout_18;
    QPushButton *pushButton_All_tabledelete_drink;
    QLabel *label_42;
    QGridLayout *gridLayout_17;
    QPushButton *pushButton_prd_upd_drink;
    QLabel *label_35;
    QGridLayout *gridLayout_16;
    QLabel *label_32;
    QPushButton *pushButton_stkdelete_drink;
    QLabel *label_29;
    QLabel *label_status_drink;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_45;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QLabel *label_49;
    QLineEdit *lineEdit_other_id;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QLabel *label_44;
    QComboBox *comboBox_select_table_other;
    QGridLayout *gridLayout_7;
    QLabel *label_19;
    QSpinBox *spinBox_price_Other;
    QLabel *label_23;
    QGridLayout *gridLayout_8;
    QLabel *label_21;
    QSpinBox *spinBox_piece_Other;
    QGridLayout *gridLayout_6;
    QLabel *label_22;
    QLineEdit *lineEdit_add_other;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_All_tabledelete_Other;
    QLabel *label_40;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_prd_upd_other;
    QLabel *label_39;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_stkdelete_other;
    QLabel *label_36;
    QLabel *label_30;
    QLabel *label_status_other;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_42;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_insert_name;
    QLabel *label_2;
    QLineEdit *lineEdit_insert_price;
    QLabel *label_3;
    QLineEdit *lineEdit_insert_piece;
    QLabel *label_4;
    QComboBox *comboBox_insert_category;
    QPushButton *pushButton_prd_add;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *Stock)
    {
        if (Stock->objectName().isEmpty())
            Stock->setObjectName(QString::fromUtf8("Stock"));
        Stock->resize(1550, 611);
        Stock->setMinimumSize(QSize(1550, 611));
        Stock->setMaximumSize(QSize(1550, 611));
        gridLayout_51 = new QGridLayout(Stock);
        gridLayout_51->setObjectName(QString::fromUtf8("gridLayout_51"));
        verticalSpacer_8 = new QSpacerItem(20, 266, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_51->addItem(verticalSpacer_8, 0, 0, 1, 1);

        gridLayout_50 = new QGridLayout();
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        gridLayout_49 = new QGridLayout();
        gridLayout_49->setObjectName(QString::fromUtf8("gridLayout_49"));
        gridLayout_48 = new QGridLayout();
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        gridLayout_43 = new QGridLayout();
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        tableView_food = new QTableView(Stock);
        tableView_food->setObjectName(QString::fromUtf8("tableView_food"));
        tableView_food->setMinimumSize(QSize(500, 200));
        tableView_food->setMaximumSize(QSize(500, 200));

        gridLayout_43->addWidget(tableView_food, 0, 0, 1, 1);

        tableView_drink = new QTableView(Stock);
        tableView_drink->setObjectName(QString::fromUtf8("tableView_drink"));
        tableView_drink->setMinimumSize(QSize(500, 200));

        gridLayout_43->addWidget(tableView_drink, 0, 1, 1, 1);

        tableView_other = new QTableView(Stock);
        tableView_other->setObjectName(QString::fromUtf8("tableView_other"));
        tableView_other->setMinimumSize(QSize(500, 200));
        tableView_other->setMaximumSize(QSize(500, 200));

        gridLayout_43->addWidget(tableView_other, 0, 2, 1, 1);


        gridLayout_48->addLayout(gridLayout_43, 0, 0, 1, 1);

        gridLayout_47 = new QGridLayout();
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        gridLayout_44 = new QGridLayout();
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_44->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout_41 = new QGridLayout();
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        groupBox = new QGroupBox(Stock);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        gridLayout_40 = new QGridLayout(groupBox);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        gridLayout_39 = new QGridLayout();
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_39->addWidget(label_47, 0, 0, 1, 1);

        lineEdit_food_id = new QLineEdit(groupBox);
        lineEdit_food_id->setObjectName(QString::fromUtf8("lineEdit_food_id"));

        gridLayout_39->addWidget(lineEdit_food_id, 0, 1, 1, 1);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        gridLayout_37 = new QGridLayout();
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_36->addWidget(label_41, 0, 0, 1, 1);

        comboBox_select_table_food = new QComboBox(groupBox);
        comboBox_select_table_food->setObjectName(QString::fromUtf8("comboBox_select_table_food"));

        gridLayout_36->addWidget(comboBox_select_table_food, 0, 1, 1, 1);


        gridLayout_37->addLayout(gridLayout_36, 0, 0, 1, 1);

        gridLayout_33 = new QGridLayout();
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setBold(true);
        label_7->setFont(font);

        gridLayout_33->addWidget(label_7, 0, 0, 1, 1);

        spinBox_price_Food = new QSpinBox(groupBox);
        spinBox_price_Food->setObjectName(QString::fromUtf8("spinBox_price_Food"));
        spinBox_price_Food->setFont(font);

        gridLayout_33->addWidget(spinBox_price_Food, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_33->addWidget(label_6, 0, 2, 1, 1);


        gridLayout_37->addLayout(gridLayout_33, 1, 0, 1, 1);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_34->addWidget(label_9, 0, 0, 1, 1);

        spinBox_piece_Food = new QSpinBox(groupBox);
        spinBox_piece_Food->setObjectName(QString::fromUtf8("spinBox_piece_Food"));

        gridLayout_34->addWidget(spinBox_piece_Food, 0, 1, 1, 1);


        gridLayout_37->addLayout(gridLayout_34, 2, 0, 1, 1);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_35->addWidget(label_28, 0, 0, 1, 1);

        lineEdit_add_food = new QLineEdit(groupBox);
        lineEdit_add_food->setObjectName(QString::fromUtf8("lineEdit_add_food"));

        gridLayout_35->addWidget(lineEdit_add_food, 0, 1, 1, 1);


        gridLayout_37->addLayout(gridLayout_35, 3, 0, 1, 1);

        gridLayout_32 = new QGridLayout();
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        pushButton_All_tabledelete_food = new QPushButton(groupBox);
        pushButton_All_tabledelete_food->setObjectName(QString::fromUtf8("pushButton_All_tabledelete_food"));
        pushButton_All_tabledelete_food->setMinimumSize(QSize(49, 50));
        pushButton_All_tabledelete_food->setMaximumSize(QSize(50, 50));

        gridLayout_29->addWidget(pushButton_All_tabledelete_food, 0, 0, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_45, 1, 0, 1, 1);


        gridLayout_32->addLayout(gridLayout_29, 0, 0, 1, 1);

        gridLayout_30 = new QGridLayout();
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        pushButton_prd_upd_food = new QPushButton(groupBox);
        pushButton_prd_upd_food->setObjectName(QString::fromUtf8("pushButton_prd_upd_food"));
        pushButton_prd_upd_food->setMinimumSize(QSize(50, 50));
        pushButton_prd_upd_food->setMaximumSize(QSize(50, 50));
        pushButton_prd_upd_food->setFont(font);
        pushButton_prd_upd_food->setStyleSheet(QString::fromUtf8("#pushButton_prd_upd{\n"
"background-color: transparent;\n"
"border-image: url(:update_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_prd_upd:pressed\n"
"{\n"
"   border-image: url(:update_open.png);\n"
"}\n"
""));

        gridLayout_30->addWidget(pushButton_prd_upd_food, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_30->addWidget(label_10, 1, 0, 1, 1);


        gridLayout_32->addLayout(gridLayout_30, 0, 1, 1, 1);

        gridLayout_31 = new QGridLayout();
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        pushButton_stkdelete_food = new QPushButton(groupBox);
        pushButton_stkdelete_food->setObjectName(QString::fromUtf8("pushButton_stkdelete_food"));
        pushButton_stkdelete_food->setMinimumSize(QSize(50, 50));
        pushButton_stkdelete_food->setMaximumSize(QSize(50, 50));
        pushButton_stkdelete_food->setFont(font);
        pushButton_stkdelete_food->setStyleSheet(QString::fromUtf8("#pushButton_stkdelete{\n"
"background-color: transparent;\n"
"border-image: url(:delete_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_stkdelete:pressed\n"
"{\n"
"   border-image: url(:delete_open.png);\n"
"}\n"
""));

        gridLayout_31->addWidget(pushButton_stkdelete_food, 0, 0, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_31, 1, 0, 1, 1);


        gridLayout_32->addLayout(gridLayout_31, 0, 2, 1, 1);


        gridLayout_37->addLayout(gridLayout_32, 4, 0, 1, 1);


        gridLayout_38->addLayout(gridLayout_37, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_38->addWidget(label_8, 1, 0, 1, 1);


        gridLayout_39->addLayout(gridLayout_38, 1, 0, 1, 2);


        gridLayout_40->addLayout(gridLayout_39, 0, 0, 1, 1);


        gridLayout_41->addWidget(groupBox, 0, 0, 1, 1);

        label_status_food = new QLabel(Stock);
        label_status_food->setObjectName(QString::fromUtf8("label_status_food"));
        label_status_food->setAlignment(Qt::AlignCenter);

        gridLayout_41->addWidget(label_status_food, 1, 0, 1, 1);


        gridLayout_44->addLayout(gridLayout_41, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_44->addItem(verticalSpacer_2, 2, 1, 1, 1);


        gridLayout_47->addLayout(gridLayout_44, 0, 0, 1, 1);

        gridLayout_46 = new QGridLayout();
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_46->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_46->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        gridLayout_28 = new QGridLayout();
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        groupBox_2 = new QGroupBox(Stock);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_27 = new QGridLayout(groupBox_2);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        label_48 = new QLabel(groupBox_2);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_25->addWidget(label_48, 0, 0, 1, 1);

        lineEdit_drink_id = new QLineEdit(groupBox_2);
        lineEdit_drink_id->setObjectName(QString::fromUtf8("lineEdit_drink_id"));

        gridLayout_25->addWidget(lineEdit_drink_id, 0, 1, 1, 1);


        gridLayout_26->addLayout(gridLayout_25, 0, 0, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_19->addWidget(label_43, 0, 0, 1, 1);

        comboBox_select_table_drink = new QComboBox(groupBox_2);
        comboBox_select_table_drink->setObjectName(QString::fromUtf8("comboBox_select_table_drink"));

        gridLayout_19->addWidget(comboBox_select_table_drink, 0, 1, 1, 1);


        gridLayout_24->addLayout(gridLayout_19, 0, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);

        gridLayout_20->addWidget(label_26, 0, 0, 1, 1);

        spinBox_price_Drink = new QSpinBox(groupBox_2);
        spinBox_price_Drink->setObjectName(QString::fromUtf8("spinBox_price_Drink"));

        gridLayout_20->addWidget(spinBox_price_Drink, 0, 1, 1, 1);

        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font);

        gridLayout_20->addWidget(label_27, 0, 2, 1, 1);


        gridLayout_24->addLayout(gridLayout_20, 1, 0, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_21->addWidget(label_25, 0, 0, 1, 1);

        spinBox_piece_Drink = new QSpinBox(groupBox_2);
        spinBox_piece_Drink->setObjectName(QString::fromUtf8("spinBox_piece_Drink"));

        gridLayout_21->addWidget(spinBox_piece_Drink, 0, 1, 1, 1);


        gridLayout_24->addLayout(gridLayout_21, 2, 0, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_22->addWidget(label_24, 0, 0, 1, 1);

        lineEdit_add_Drink = new QLineEdit(groupBox_2);
        lineEdit_add_Drink->setObjectName(QString::fromUtf8("lineEdit_add_Drink"));

        gridLayout_22->addWidget(lineEdit_add_Drink, 0, 1, 1, 1);


        gridLayout_24->addLayout(gridLayout_22, 3, 0, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        pushButton_All_tabledelete_drink = new QPushButton(groupBox_2);
        pushButton_All_tabledelete_drink->setObjectName(QString::fromUtf8("pushButton_All_tabledelete_drink"));
        pushButton_All_tabledelete_drink->setMinimumSize(QSize(50, 50));
        pushButton_All_tabledelete_drink->setMaximumSize(QSize(50, 50));

        gridLayout_18->addWidget(pushButton_All_tabledelete_drink, 0, 0, 1, 1);

        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_42, 1, 0, 1, 1);


        gridLayout_23->addLayout(gridLayout_18, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        pushButton_prd_upd_drink = new QPushButton(groupBox_2);
        pushButton_prd_upd_drink->setObjectName(QString::fromUtf8("pushButton_prd_upd_drink"));
        pushButton_prd_upd_drink->setMinimumSize(QSize(50, 50));
        pushButton_prd_upd_drink->setMaximumSize(QSize(50, 50));
        pushButton_prd_upd_drink->setFont(font);
        pushButton_prd_upd_drink->setStyleSheet(QString::fromUtf8("#pushButton_prd_upd{\n"
"background-color: transparent;\n"
"border-image: url(:update_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_prd_upd:pressed\n"
"{\n"
"   border-image: url(:update_open.png);\n"
"}\n"
""));

        gridLayout_17->addWidget(pushButton_prd_upd_drink, 0, 0, 1, 1);

        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_35, 1, 0, 1, 1);


        gridLayout_23->addLayout(gridLayout_17, 0, 1, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_32, 1, 0, 1, 1);

        pushButton_stkdelete_drink = new QPushButton(groupBox_2);
        pushButton_stkdelete_drink->setObjectName(QString::fromUtf8("pushButton_stkdelete_drink"));
        pushButton_stkdelete_drink->setMinimumSize(QSize(50, 50));
        pushButton_stkdelete_drink->setMaximumSize(QSize(50, 50));
        pushButton_stkdelete_drink->setFont(font);
        pushButton_stkdelete_drink->setStyleSheet(QString::fromUtf8("#pushButton_stkdelete{\n"
"background-color: transparent;\n"
"border-image: url(:delete_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_stkdelete:pressed\n"
"{\n"
"   border-image: url(:delete_open.png);\n"
"}\n"
""));

        gridLayout_16->addWidget(pushButton_stkdelete_drink, 0, 0, 1, 1);


        gridLayout_23->addLayout(gridLayout_16, 0, 2, 1, 1);


        gridLayout_24->addLayout(gridLayout_23, 4, 0, 1, 1);

        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(label_29, 5, 0, 1, 1);


        gridLayout_26->addLayout(gridLayout_24, 1, 0, 1, 1);


        gridLayout_27->addLayout(gridLayout_26, 0, 0, 1, 1);


        gridLayout_28->addWidget(groupBox_2, 0, 0, 1, 1);

        label_status_drink = new QLabel(Stock);
        label_status_drink->setObjectName(QString::fromUtf8("label_status_drink"));
        label_status_drink->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_status_drink, 1, 0, 1, 1);


        gridLayout_46->addLayout(gridLayout_28, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_46->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_46->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_47->addLayout(gridLayout_46, 0, 1, 1, 1);

        gridLayout_45 = new QGridLayout();
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        verticalSpacer_6 = new QSpacerItem(18, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_45->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_45->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupBox_3 = new QGroupBox(Stock);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_14 = new QGridLayout(groupBox_3);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_49 = new QLabel(groupBox_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_12->addWidget(label_49, 0, 0, 1, 1);

        lineEdit_other_id = new QLineEdit(groupBox_3);
        lineEdit_other_id->setObjectName(QString::fromUtf8("lineEdit_other_id"));

        gridLayout_12->addWidget(lineEdit_other_id, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_9->addWidget(label_44, 0, 0, 1, 1);

        comboBox_select_table_other = new QComboBox(groupBox_3);
        comboBox_select_table_other->setObjectName(QString::fromUtf8("comboBox_select_table_other"));

        gridLayout_9->addWidget(comboBox_select_table_other, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_7->addWidget(label_19, 0, 0, 1, 1);

        spinBox_price_Other = new QSpinBox(groupBox_3);
        spinBox_price_Other->setObjectName(QString::fromUtf8("spinBox_price_Other"));

        gridLayout_7->addWidget(spinBox_price_Other, 0, 1, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        gridLayout_7->addWidget(label_23, 0, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_8->addWidget(label_21, 0, 0, 1, 1);

        spinBox_piece_Other = new QSpinBox(groupBox_3);
        spinBox_piece_Other->setObjectName(QString::fromUtf8("spinBox_piece_Other"));

        gridLayout_8->addWidget(spinBox_piece_Other, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_8, 2, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_22, 0, 0, 1, 1);

        lineEdit_add_other = new QLineEdit(groupBox_3);
        lineEdit_add_other->setObjectName(QString::fromUtf8("lineEdit_add_other"));

        gridLayout_6->addWidget(lineEdit_add_other, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_6, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_All_tabledelete_Other = new QPushButton(groupBox_3);
        pushButton_All_tabledelete_Other->setObjectName(QString::fromUtf8("pushButton_All_tabledelete_Other"));
        pushButton_All_tabledelete_Other->setMinimumSize(QSize(50, 50));
        pushButton_All_tabledelete_Other->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_All_tabledelete_Other, 0, 0, 1, 1);

        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_40, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_prd_upd_other = new QPushButton(groupBox_3);
        pushButton_prd_upd_other->setObjectName(QString::fromUtf8("pushButton_prd_upd_other"));
        pushButton_prd_upd_other->setMinimumSize(QSize(50, 50));
        pushButton_prd_upd_other->setMaximumSize(QSize(50, 50));
        pushButton_prd_upd_other->setFont(font);
        pushButton_prd_upd_other->setStyleSheet(QString::fromUtf8("#pushButton_prd_upd{\n"
"background-color: transparent;\n"
"border-image: url(:update_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_prd_upd:pressed\n"
"{\n"
"   border-image: url(:update_open.png);\n"
"}\n"
""));

        gridLayout_3->addWidget(pushButton_prd_upd_other, 0, 0, 1, 1);

        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_39, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_stkdelete_other = new QPushButton(groupBox_3);
        pushButton_stkdelete_other->setObjectName(QString::fromUtf8("pushButton_stkdelete_other"));
        pushButton_stkdelete_other->setMinimumSize(QSize(50, 50));
        pushButton_stkdelete_other->setMaximumSize(QSize(50, 50));
        pushButton_stkdelete_other->setFont(font);
        pushButton_stkdelete_other->setStyleSheet(QString::fromUtf8("#pushButton_stkdelete{\n"
"background-color: transparent;\n"
"border-image: url(:delete_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_stkdelete:pressed\n"
"{\n"
"   border-image: url(:delete_open.png);\n"
"}\n"
""));

        gridLayout_4->addWidget(pushButton_stkdelete_other, 0, 0, 1, 1);

        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_36, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_5, 4, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_30, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBox_3, 0, 0, 1, 1);

        label_status_other = new QLabel(Stock);
        label_status_other->setObjectName(QString::fromUtf8("label_status_other"));
        label_status_other->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_status_other, 1, 0, 1, 1);


        gridLayout_45->addLayout(gridLayout_15, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_45->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_45->addItem(verticalSpacer_5, 2, 1, 1, 1);


        gridLayout_47->addLayout(gridLayout_45, 0, 2, 1, 1);


        gridLayout_48->addLayout(gridLayout_47, 1, 0, 1, 1);


        gridLayout_49->addLayout(gridLayout_48, 0, 0, 1, 1);

        gridLayout_42 = new QGridLayout();
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_42->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Stock);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_insert_name = new QLineEdit(Stock);
        lineEdit_insert_name->setObjectName(QString::fromUtf8("lineEdit_insert_name"));

        gridLayout->addWidget(lineEdit_insert_name, 0, 1, 1, 1);

        label_2 = new QLabel(Stock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_insert_price = new QLineEdit(Stock);
        lineEdit_insert_price->setObjectName(QString::fromUtf8("lineEdit_insert_price"));

        gridLayout->addWidget(lineEdit_insert_price, 0, 3, 1, 1);

        label_3 = new QLabel(Stock);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        lineEdit_insert_piece = new QLineEdit(Stock);
        lineEdit_insert_piece->setObjectName(QString::fromUtf8("lineEdit_insert_piece"));

        gridLayout->addWidget(lineEdit_insert_piece, 0, 5, 1, 1);

        label_4 = new QLabel(Stock);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        comboBox_insert_category = new QComboBox(Stock);
        comboBox_insert_category->setObjectName(QString::fromUtf8("comboBox_insert_category"));

        gridLayout->addWidget(comboBox_insert_category, 0, 7, 1, 1);

        pushButton_prd_add = new QPushButton(Stock);
        pushButton_prd_add->setObjectName(QString::fromUtf8("pushButton_prd_add"));
        pushButton_prd_add->setMinimumSize(QSize(100, 20));
        pushButton_prd_add->setMaximumSize(QSize(50, 50));
        pushButton_prd_add->setFont(font);
        pushButton_prd_add->setStyleSheet(QString::fromUtf8("#pushButton_prd_add{\n"
"background-color: transparent;\n"
"border-image: url(:save_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_prd_add:pressed\n"
"{\n"
"   border-image: url(:save_open.png);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_prd_add, 0, 8, 1, 1);


        gridLayout_42->addLayout(gridLayout, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_42->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_49->addLayout(gridLayout_42, 1, 0, 1, 1);


        gridLayout_50->addLayout(gridLayout_49, 0, 1, 2, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_50->addItem(verticalSpacer_7, 2, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_50, 1, 0, 1, 1);


        retranslateUi(Stock);

        QMetaObject::connectSlotsByName(Stock);
    } // setupUi

    void retranslateUi(QDialog *Stock)
    {
        Stock->setWindowTitle(QCoreApplication::translate("Stock", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_47->setText(QCoreApplication::translate("Stock", "Food ID", nullptr));
        label_41->setText(QCoreApplication::translate("Stock", "Table Select", nullptr));
        label_7->setText(QCoreApplication::translate("Stock", "Price Food:     ", nullptr));
        label_6->setText(QCoreApplication::translate("Stock", "TL", nullptr));
        label_9->setText(QCoreApplication::translate("Stock", "Piece of food:", nullptr));
        label_28->setText(QCoreApplication::translate("Stock", "Food:       ", nullptr));
        pushButton_All_tabledelete_food->setText(QString());
        label_45->setText(QCoreApplication::translate("Stock", "All Delete", nullptr));
        pushButton_prd_upd_food->setText(QString());
        label_10->setText(QCoreApplication::translate("Stock", "Delete", nullptr));
        pushButton_stkdelete_food->setText(QString());
        label_31->setText(QCoreApplication::translate("Stock", "Update", nullptr));
        label_8->setText(QCoreApplication::translate("Stock", "TextLabel", nullptr));
        label_status_food->setText(QCoreApplication::translate("Stock", "Status Food", nullptr));
        groupBox_2->setTitle(QString());
        label_48->setText(QCoreApplication::translate("Stock", "Drink ID", nullptr));
        label_43->setText(QCoreApplication::translate("Stock", "Table Select", nullptr));
        label_26->setText(QCoreApplication::translate("Stock", "Price Drink:       ", nullptr));
        label_27->setText(QCoreApplication::translate("Stock", "TL", nullptr));
        label_25->setText(QCoreApplication::translate("Stock", "Piece of Drink:  ", nullptr));
        label_24->setText(QCoreApplication::translate("Stock", "Drink:      ", nullptr));
        pushButton_All_tabledelete_drink->setText(QString());
        label_42->setText(QCoreApplication::translate("Stock", "All Delete", nullptr));
        pushButton_prd_upd_drink->setText(QString());
        label_35->setText(QCoreApplication::translate("Stock", "Update", nullptr));
        label_32->setText(QCoreApplication::translate("Stock", "Delete", nullptr));
        pushButton_stkdelete_drink->setText(QString());
        label_29->setText(QCoreApplication::translate("Stock", "TextLabel", nullptr));
        label_status_drink->setText(QCoreApplication::translate("Stock", "Status Drink", nullptr));
        groupBox_3->setTitle(QString());
        label_49->setText(QCoreApplication::translate("Stock", "Other ID                    ", nullptr));
        label_44->setText(QCoreApplication::translate("Stock", "Table Select          ", nullptr));
        label_19->setText(QCoreApplication::translate("Stock", "Price Other:           ", nullptr));
        label_23->setText(QCoreApplication::translate("Stock", "TL", nullptr));
        label_21->setText(QCoreApplication::translate("Stock", "Piece of other:      ", nullptr));
        label_22->setText(QCoreApplication::translate("Stock", "Other:                   ", nullptr));
        pushButton_All_tabledelete_Other->setText(QString());
        label_40->setText(QCoreApplication::translate("Stock", "All Delete", nullptr));
        pushButton_prd_upd_other->setText(QString());
        label_39->setText(QCoreApplication::translate("Stock", "Update", nullptr));
        pushButton_stkdelete_other->setText(QString());
        label_36->setText(QCoreApplication::translate("Stock", "Delete", nullptr));
        label_30->setText(QCoreApplication::translate("Stock", "TextLabel", nullptr));
        label_status_other->setText(QCoreApplication::translate("Stock", "Status Others", nullptr));
        label->setText(QCoreApplication::translate("Stock", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Stock", "Price", nullptr));
        label_3->setText(QCoreApplication::translate("Stock", "Piece", nullptr));
        label_4->setText(QCoreApplication::translate("Stock", "Select Category", nullptr));
        pushButton_prd_add->setText(QCoreApplication::translate("Stock", "Insert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock: public Ui_Stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
