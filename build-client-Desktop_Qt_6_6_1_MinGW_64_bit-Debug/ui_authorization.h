/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authorization
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_login;
    QLabel *label_password;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_authorization;
    QPushButton *pushButton_registration;
    QPushButton *pushButton_change;
    QLabel *label_email;
    QLineEdit *lineEdit_email;

    void setupUi(QWidget *authorization)
    {
        if (authorization->objectName().isEmpty())
            authorization->setObjectName("authorization");
        authorization->resize(668, 460);
        authorization->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(authorization);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 110, 572, 156));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(gridLayoutWidget);
        label_login->setObjectName("label_login");
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(label_login, 1, 0, 1, 1);

        label_password = new QLabel(gridLayoutWidget);
        label_password->setObjectName("label_password");
        label_password->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(label_password, 2, 0, 1, 1);

        lineEdit_login = new QLineEdit(gridLayoutWidget);
        lineEdit_login->setObjectName("lineEdit_login");
        lineEdit_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_login, 1, 2, 1, 1);

        lineEdit_password = new QLineEdit(gridLayoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_password, 2, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_authorization = new QPushButton(gridLayoutWidget);
        pushButton_authorization->setObjectName("pushButton_authorization");
        pushButton_authorization->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(pushButton_authorization);

        pushButton_registration = new QPushButton(gridLayoutWidget);
        pushButton_registration->setObjectName("pushButton_registration");
        pushButton_registration->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(pushButton_registration);

        pushButton_change = new QPushButton(gridLayoutWidget);
        pushButton_change->setObjectName("pushButton_change");
        pushButton_change->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(pushButton_change);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 2, 1, 1);

        label_email = new QLabel(gridLayoutWidget);
        label_email->setObjectName("label_email");
        label_email->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(label_email, 0, 0, 1, 1);

        lineEdit_email = new QLineEdit(gridLayoutWidget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_email, 0, 2, 1, 1);


        retranslateUi(authorization);

        QMetaObject::connectSlotsByName(authorization);
    } // setupUi

    void retranslateUi(QWidget *authorization)
    {
        authorization->setWindowTitle(QCoreApplication::translate("authorization", "Form", nullptr));
        label_login->setText(QCoreApplication::translate("authorization", "Login:", nullptr));
        label_password->setText(QCoreApplication::translate("authorization", "Password:", nullptr));
        lineEdit_login->setText(QString());
        lineEdit_password->setText(QString());
        pushButton_authorization->setText(QCoreApplication::translate("authorization", "Authorization", nullptr));
        pushButton_registration->setText(QCoreApplication::translate("authorization", "Registration", nullptr));
        pushButton_change->setText(QCoreApplication::translate("authorization", "Change", nullptr));
        label_email->setText(QCoreApplication::translate("authorization", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authorization: public Ui_authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
