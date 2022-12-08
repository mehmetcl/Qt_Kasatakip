/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_19;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_14;
    QLabel *label_login_gift;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_lgn_password;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_lgn_username;
    QLabel *label;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_login;
    QGridLayout *gridLayout;
    QPushButton *pushButton_singin;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_15;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_adm;
    QPushButton *pushButton_calculator;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_lgn_status;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(271, 431);
        Login->setMinimumSize(QSize(271, 431));
        Login->setMaximumSize(QSize(271, 431));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_20 = new QGridLayout(centralwidget);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_12, 1, 0, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_login_gift = new QLabel(centralwidget);
        label_login_gift->setObjectName(QString::fromUtf8("label_login_gift"));
        label_login_gift->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_login_gift, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_8, 0, 3, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 1, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_lgn_password = new QLineEdit(groupBox);
        lineEdit_lgn_password->setObjectName(QString::fromUtf8("lineEdit_lgn_password"));
        lineEdit_lgn_password->setFont(font);

        gridLayout_4->addWidget(lineEdit_lgn_password, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_lgn_username = new QLineEdit(groupBox);
        lineEdit_lgn_username->setObjectName(QString::fromUtf8("lineEdit_lgn_username"));
        lineEdit_lgn_username->setFont(font);

        gridLayout_3->addWidget(lineEdit_lgn_username, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(50, 50));
        pushButton_login->setMaximumSize(QSize(50, 50));
        pushButton_login->setFont(font);
        pushButton_login->setStyleSheet(QString::fromUtf8("#pushButton_login{\n"
"background-color: transparent;\n"
"border-image: url(:enter_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_login:pressed\n"
"{\n"
"   border-image: url(:enter_open.png);\n"
"}\n"
""));

        gridLayout_2->addWidget(pushButton_login, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_singin = new QPushButton(groupBox);
        pushButton_singin->setObjectName(QString::fromUtf8("pushButton_singin"));
        pushButton_singin->setMinimumSize(QSize(50, 50));
        pushButton_singin->setMaximumSize(QSize(50, 50));
        pushButton_singin->setFont(font);
        pushButton_singin->setStyleSheet(QString::fromUtf8("#pushButton_singin{\n"
"background-color: transparent;\n"
"border-image: url(:singin_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_singin:pressed\n"
"{\n"
"   border-image: url(:singin_open.png);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_singin, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_14->addWidget(groupBox, 1, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_14, 0, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        horizontalSpacer_7 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_7, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_15->addWidget(label_5, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_2);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        pushButton_adm = new QPushButton(groupBox_2);
        pushButton_adm->setObjectName(QString::fromUtf8("pushButton_adm"));
        pushButton_adm->setMinimumSize(QSize(50, 50));
        pushButton_adm->setMaximumSize(QSize(50, 50));
        pushButton_adm->setFont(font);
        pushButton_adm->setStyleSheet(QString::fromUtf8("#pushButton_adm{\n"
"background-color: transparent;\n"
"border-image: url(:admin_one.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_adm:pressed\n"
"{\n"
"   border-image: url(:admin_two.png);\n"
"}\n"
""));

        gridLayout_12->addWidget(pushButton_adm, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBox_2, 0, 1, 1, 1);

        pushButton_calculator = new QPushButton(centralwidget);
        pushButton_calculator->setObjectName(QString::fromUtf8("pushButton_calculator"));
        pushButton_calculator->setMinimumSize(QSize(50, 50));
        pushButton_calculator->setMaximumSize(QSize(50, 50));
        pushButton_calculator->setFont(font);
        pushButton_calculator->setStyleSheet(QString::fromUtf8("#pushButton_calculator{\n"
"background-color: transparent;\n"
"border-image: url(:calculator_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_calculator:pressed\n"
"{\n"
"   border-image: url(:calculator_open.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(pushButton_calculator, 0, 3, 1, 1);


        gridLayout_16->addLayout(gridLayout_15, 2, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_16, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        label_lgn_status = new QLabel(centralwidget);
        label_lgn_status->setObjectName(QString::fromUtf8("label_lgn_status"));
        label_lgn_status->setFont(font);
        label_lgn_status->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_lgn_status, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_9, 0, 2, 1, 1);


        gridLayout_18->addLayout(gridLayout_17, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 1, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_11, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_19, 0, 0, 1, 1);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 271, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_login_gift->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password:  ", nullptr));
        label->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_login->setText(QString());
        pushButton_singin->setText(QString());
        label_4->setText(QCoreApplication::translate("Login", "Sing in", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "Calculator", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Login", "Admin Panel", nullptr));
        pushButton_adm->setText(QString());
        pushButton_calculator->setText(QString());
        label_lgn_status->setText(QCoreApplication::translate("Login", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
