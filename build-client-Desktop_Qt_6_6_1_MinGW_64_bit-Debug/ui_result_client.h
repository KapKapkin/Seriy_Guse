/********************************************************************************
** Form generated from reading UI file 'result_client.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_CLIENT_H
#define UI_RESULT_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Result_client
{
public:
    QPushButton *pushButton_exit_result;
    QTableWidget *tableWidget_Stat;
    QLabel *label;
    QLabel *label1;
    QLabel *label_login;

    void setupUi(QWidget *Result_client)
    {
        if (Result_client->objectName().isEmpty())
            Result_client->setObjectName("Result_client");
        Result_client->resize(589, 448);
        Result_client->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_exit_result = new QPushButton(Result_client);
        pushButton_exit_result->setObjectName("pushButton_exit_result");
        pushButton_exit_result->setGeometry(QRect(10, 400, 141, 31));
        pushButton_exit_result->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));
        tableWidget_Stat = new QTableWidget(Result_client);
        if (tableWidget_Stat->columnCount() < 1)
            tableWidget_Stat->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Stat->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget_Stat->rowCount() < 5)
            tableWidget_Stat->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Stat->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Stat->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Stat->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Stat->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Stat->setVerticalHeaderItem(4, __qtablewidgetitem5);
        tableWidget_Stat->setObjectName("tableWidget_Stat");
        tableWidget_Stat->setGeometry(QRect(160, 120, 211, 231));
        tableWidget_Stat->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(Result_client);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 281, 51));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));
        label1 = new QLabel(Result_client);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(130, 70, 71, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        label_login = new QLabel(Result_client);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(200, 70, 211, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        retranslateUi(Result_client);

        QMetaObject::connectSlotsByName(Result_client);
    } // setupUi

    void retranslateUi(QWidget *Result_client)
    {
        Result_client->setWindowTitle(QCoreApplication::translate("Result_client", "Form", nullptr));
        pushButton_exit_result->setText(QCoreApplication::translate("Result_client", "Exit", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Stat->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Result_client", "Correct", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Stat->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Result_client", "Task1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Stat->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Result_client", "Task2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Stat->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Result_client", "Task3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Stat->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Result_client", "Task4", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Stat->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Result_client", "Task5", nullptr));
        label->setText(QCoreApplication::translate("Result_client", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Statistics</span></p></body></html>", nullptr));
        label1->setText(QCoreApplication::translate("Result_client", "Login:", nullptr));
        label_login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Result_client: public Ui_Result_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_CLIENT_H
