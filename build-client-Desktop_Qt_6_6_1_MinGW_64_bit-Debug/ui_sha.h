/********************************************************************************
** Form generated from reading UI file 'sha.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHA_H
#define UI_SHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sha
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayou;
    QLabel *label_error_sha;
    QLineEdit *lineEdit_result_sha;
    QLabel *labe_equation_2;
    QLabel *label_result_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_exit_sha512;
    QPushButton *pushButton_check_sha512;
    QLineEdit *lineEdit_equation_2;
    QLabel *label_login;
    QLabel *label1;

    void setupUi(QWidget *sha)
    {
        if (sha->objectName().isEmpty())
            sha->setObjectName("sha");
        sha->resize(553, 444);
        sha->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayoutWidget = new QWidget(sha);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 130, 491, 251));
        gridLayou = new QGridLayout(gridLayoutWidget);
        gridLayou->setObjectName("gridLayou");
        gridLayou->setContentsMargins(0, 0, 0, 0);
        label_error_sha = new QLabel(gridLayoutWidget);
        label_error_sha->setObjectName("label_error_sha");
        label_error_sha->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou->addWidget(label_error_sha, 3, 0, 1, 2);

        lineEdit_result_sha = new QLineEdit(gridLayoutWidget);
        lineEdit_result_sha->setObjectName("lineEdit_result_sha");
        lineEdit_result_sha->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayou->addWidget(lineEdit_result_sha, 1, 1, 1, 1);

        labe_equation_2 = new QLabel(gridLayoutWidget);
        labe_equation_2->setObjectName("labe_equation_2");
        labe_equation_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou->addWidget(labe_equation_2, 0, 0, 1, 1);

        label_result_2 = new QLabel(gridLayoutWidget);
        label_result_2->setObjectName("label_result_2");
        label_result_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou->addWidget(label_result_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_exit_sha512 = new QPushButton(gridLayoutWidget);
        pushButton_exit_sha512->setObjectName("pushButton_exit_sha512");
        pushButton_exit_sha512->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(pushButton_exit_sha512);

        pushButton_check_sha512 = new QPushButton(gridLayoutWidget);
        pushButton_check_sha512->setObjectName("pushButton_check_sha512");
        pushButton_check_sha512->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(pushButton_check_sha512);


        gridLayou->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        lineEdit_equation_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_equation_2->setObjectName("lineEdit_equation_2");
        lineEdit_equation_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lineEdit_equation_2->setReadOnly(true);

        gridLayou->addWidget(lineEdit_equation_2, 0, 1, 1, 1);

        label_login = new QLabel(sha);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(290, 30, 241, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));
        label1 = new QLabel(sha);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(200, 30, 91, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        retranslateUi(sha);

        QMetaObject::connectSlotsByName(sha);
    } // setupUi

    void retranslateUi(QWidget *sha)
    {
        sha->setWindowTitle(QCoreApplication::translate("sha", "Form", nullptr));
        label_error_sha->setText(QString());
        labe_equation_2->setText(QCoreApplication::translate("sha", "Text", nullptr));
        label_result_2->setText(QCoreApplication::translate("sha", "Result", nullptr));
        pushButton_exit_sha512->setText(QCoreApplication::translate("sha", "Exit", nullptr));
        pushButton_check_sha512->setText(QCoreApplication::translate("sha", "Check", nullptr));
        label_login->setText(QString());
        label1->setText(QCoreApplication::translate("sha", "Login:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sha: public Ui_sha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHA_H
