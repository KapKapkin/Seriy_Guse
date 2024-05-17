/********************************************************************************
** Form generated from reading UI file 'graf_min.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAF_MIN_H
#define UI_GRAF_MIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graf_min
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_graf;
    QHBoxLayout *horizontalLayout;
    QLabel *label_from;
    QLineEdit *lineEdit_from;
    QLabel *label_to;
    QLineEdit *lineEdit_to;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_result_graf_min_2;
    QLineEdit *lineEdit_result_graf_min;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_check_graf_min;
    QPushButton *pushButton_exit_graf_min;
    QLabel *label_error_graf_min;
    QLabel *label1;
    QLabel *label_login;

    void setupUi(QWidget *Graf_min)
    {
        if (Graf_min->objectName().isEmpty())
            Graf_min->setObjectName("Graf_min");
        Graf_min->resize(631, 495);
        Graf_min->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayoutWidget = new QWidget(Graf_min);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 60, 591, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_graf = new QTableWidget(verticalLayoutWidget);
        tableWidget_graf->setObjectName("tableWidget_graf");
        tableWidget_graf->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(tableWidget_graf);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_from = new QLabel(verticalLayoutWidget);
        label_from->setObjectName("label_from");
        label_from->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        horizontalLayout->addWidget(label_from);

        lineEdit_from = new QLineEdit(verticalLayoutWidget);
        lineEdit_from->setObjectName("lineEdit_from");
        lineEdit_from->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(lineEdit_from);

        label_to = new QLabel(verticalLayoutWidget);
        label_to->setObjectName("label_to");
        label_to->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        horizontalLayout->addWidget(label_to);

        lineEdit_to = new QLineEdit(verticalLayoutWidget);
        lineEdit_to->setObjectName("lineEdit_to");
        lineEdit_to->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(lineEdit_to);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_result_graf_min_2 = new QLabel(verticalLayoutWidget);
        label_result_graf_min_2->setObjectName("label_result_graf_min_2");
        label_result_graf_min_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        horizontalLayout_2->addWidget(label_result_graf_min_2);

        lineEdit_result_graf_min = new QLineEdit(verticalLayoutWidget);
        lineEdit_result_graf_min->setObjectName("lineEdit_result_graf_min");
        lineEdit_result_graf_min->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(lineEdit_result_graf_min);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_check_graf_min = new QPushButton(verticalLayoutWidget);
        pushButton_check_graf_min->setObjectName("pushButton_check_graf_min");
        pushButton_check_graf_min->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(pushButton_check_graf_min);

        pushButton_exit_graf_min = new QPushButton(verticalLayoutWidget);
        pushButton_exit_graf_min->setObjectName("pushButton_exit_graf_min");
        pushButton_exit_graf_min->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(pushButton_exit_graf_min);


        verticalLayout->addLayout(horizontalLayout_3);

        label_error_graf_min = new QLabel(verticalLayoutWidget);
        label_error_graf_min->setObjectName("label_error_graf_min");
        label_error_graf_min->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_error_graf_min);

        label1 = new QLabel(Graf_min);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(310, 10, 81, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        label_login = new QLabel(Graf_min);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(390, 10, 221, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        retranslateUi(Graf_min);

        QMetaObject::connectSlotsByName(Graf_min);
    } // setupUi

    void retranslateUi(QWidget *Graf_min)
    {
        Graf_min->setWindowTitle(QCoreApplication::translate("Graf_min", "Form", nullptr));
        label_from->setText(QCoreApplication::translate("Graf_min", "Way From  ", nullptr));
        label_to->setText(QCoreApplication::translate("Graf_min", "  To  ", nullptr));
        label_result_graf_min_2->setText(QCoreApplication::translate("Graf_min", "Result", nullptr));
        pushButton_check_graf_min->setText(QCoreApplication::translate("Graf_min", "Check", nullptr));
        pushButton_exit_graf_min->setText(QCoreApplication::translate("Graf_min", "Exit", nullptr));
        label_error_graf_min->setText(QString());
        label1->setText(QCoreApplication::translate("Graf_min", " Login:", nullptr));
        label_login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Graf_min: public Ui_Graf_min {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAF_MIN_H
