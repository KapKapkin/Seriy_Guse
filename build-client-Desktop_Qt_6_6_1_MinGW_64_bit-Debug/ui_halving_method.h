/********************************************************************************
** Form generated from reading UI file 'halving_method.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALVING_METHOD_H
#define UI_HALVING_METHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Halving_method
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_result_halving_method;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_exit_halving_method;
    QPushButton *pushButton_check_halving_method;
    QLabel *label_error_halving_method;
    QLabel *label_eps;
    QLineEdit *lineEdit_f;
    QLineEdit *lineEdit_result_halving_method;
    QLabel *label_f;
    QLineEdit *lineEdit_eps;
    QLabel *label1;
    QLabel *label_login;

    void setupUi(QWidget *Halving_method)
    {
        if (Halving_method->objectName().isEmpty())
            Halving_method->setObjectName("Halving_method");
        Halving_method->resize(619, 445);
        Halving_method->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayoutWidget = new QWidget(Halving_method);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 70, 591, 361));
        gridLayoutWidget->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_result_halving_method = new QLabel(gridLayoutWidget);
        label_result_halving_method->setObjectName("label_result_halving_method");
        label_result_halving_method->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        gridLayout_2->addWidget(label_result_halving_method, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_exit_halving_method = new QPushButton(gridLayoutWidget);
        pushButton_exit_halving_method->setObjectName("pushButton_exit_halving_method");
        pushButton_exit_halving_method->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_exit_halving_method);

        pushButton_check_halving_method = new QPushButton(gridLayoutWidget);
        pushButton_check_halving_method->setObjectName("pushButton_check_halving_method");
        pushButton_check_halving_method->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        horizontalLayout->addWidget(pushButton_check_halving_method);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 3);

        label_error_halving_method = new QLabel(gridLayoutWidget);
        label_error_halving_method->setObjectName("label_error_halving_method");
        label_error_halving_method->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(label_error_halving_method, 5, 0, 1, 3);

        label_eps = new QLabel(gridLayoutWidget);
        label_eps->setObjectName("label_eps");
        label_eps->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        gridLayout_2->addWidget(label_eps, 2, 0, 1, 1);

        lineEdit_f = new QLineEdit(gridLayoutWidget);
        lineEdit_f->setObjectName("lineEdit_f");
        lineEdit_f->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_f, 1, 2, 1, 1);

        lineEdit_result_halving_method = new QLineEdit(gridLayoutWidget);
        lineEdit_result_halving_method->setObjectName("lineEdit_result_halving_method");
        lineEdit_result_halving_method->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_result_halving_method, 3, 2, 1, 1);

        label_f = new QLabel(gridLayoutWidget);
        label_f->setObjectName("label_f");
        label_f->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        gridLayout_2->addWidget(label_f, 1, 0, 1, 1);

        lineEdit_eps = new QLineEdit(gridLayoutWidget);
        lineEdit_eps->setObjectName("lineEdit_eps");
        lineEdit_eps->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_eps, 2, 2, 1, 1);

        label1 = new QLabel(Halving_method);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(260, 10, 71, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        label_login = new QLabel(Halving_method);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(330, 10, 251, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        retranslateUi(Halving_method);

        QMetaObject::connectSlotsByName(Halving_method);
    } // setupUi

    void retranslateUi(QWidget *Halving_method)
    {
        Halving_method->setWindowTitle(QCoreApplication::translate("Halving_method", "Form", nullptr));
        label_result_halving_method->setText(QCoreApplication::translate("Halving_method", "Result", nullptr));
        pushButton_exit_halving_method->setText(QCoreApplication::translate("Halving_method", "Exit", nullptr));
        pushButton_check_halving_method->setText(QCoreApplication::translate("Halving_method", "Check", nullptr));
        label_error_halving_method->setText(QString());
        label_eps->setText(QCoreApplication::translate("Halving_method", "\316\265", nullptr));
        label_f->setText(QCoreApplication::translate("Halving_method", "F(A)", nullptr));
        label1->setText(QCoreApplication::translate("Halving_method", "Login:", nullptr));
        label_login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Halving_method: public Ui_Halving_method {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALVING_METHOD_H
