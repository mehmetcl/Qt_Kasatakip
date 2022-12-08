/********************************************************************************
** Form generated from reading UI file 'admlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMLOGIN_H
#define UI_ADMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Admlogin
{
public:
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_6;
    QLabel *label_image;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_adm_username;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_adm_password;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_adm_ok;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Admlogin)
    {
        if (Admlogin->objectName().isEmpty())
            Admlogin->setObjectName(QString::fromUtf8("Admlogin"));
        Admlogin->resize(250, 250);
        Admlogin->setMinimumSize(QSize(250, 250));
        Admlogin->setMaximumSize(QSize(250, 250));
        gridLayout_9 = new QGridLayout(Admlogin);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_image = new QLabel(Admlogin);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_image, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(Admlogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_adm_username = new QLineEdit(groupBox);
        lineEdit_adm_username->setObjectName(QString::fromUtf8("lineEdit_adm_username"));

        gridLayout_2->addWidget(lineEdit_adm_username, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_adm_password = new QLineEdit(groupBox);
        lineEdit_adm_password->setObjectName(QString::fromUtf8("lineEdit_adm_password"));

        gridLayout_3->addWidget(lineEdit_adm_password, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_adm_ok = new QPushButton(groupBox);
        pushButton_adm_ok->setObjectName(QString::fromUtf8("pushButton_adm_ok"));
        pushButton_adm_ok->setMinimumSize(QSize(50, 50));
        pushButton_adm_ok->setMaximumSize(QSize(50, 50));
        pushButton_adm_ok->setFont(font);
        pushButton_adm_ok->setStyleSheet(QString::fromUtf8("#pushButton_adm_ok{\n"
"background-color: transparent;\n"
"border-image: url(:ok_close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_adm_ok:pressed\n"
"{\n"
"   border-image: url(:ok_open.png);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_adm_ok, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        retranslateUi(Admlogin);

        QMetaObject::connectSlotsByName(Admlogin);
    } // setupUi

    void retranslateUi(QDialog *Admlogin)
    {
        Admlogin->setWindowTitle(QCoreApplication::translate("Admlogin", "Dialog", nullptr));
        label_image->setText(QCoreApplication::translate("Admlogin", "\304\260mage", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Admlogin", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Admlogin", "Password:", nullptr));
        pushButton_adm_ok->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admlogin: public Ui_Admlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMLOGIN_H
