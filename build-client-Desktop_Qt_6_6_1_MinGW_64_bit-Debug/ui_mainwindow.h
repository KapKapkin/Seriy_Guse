/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_task1;
    QPushButton *pushButton_task2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_task3;
    QPushButton *pushButton_task4;
    QPushButton *pushButton_task5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_result;
    QPushButton *pushButton_exit;
    QLabel *label1;
    QLabel *label_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 60, 681, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_task1 = new QPushButton(verticalLayoutWidget);
        pushButton_task1->setObjectName("pushButton_task1");
        pushButton_task1->setBaseSize(QSize(0, 0));
        pushButton_task1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_task1);

        pushButton_task2 = new QPushButton(verticalLayoutWidget);
        pushButton_task2->setObjectName("pushButton_task2");
        pushButton_task2->setBaseSize(QSize(0, 0));
        pushButton_task2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_task2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_task3 = new QPushButton(verticalLayoutWidget);
        pushButton_task3->setObjectName("pushButton_task3");
        pushButton_task3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout_3->addWidget(pushButton_task3);

        pushButton_task4 = new QPushButton(verticalLayoutWidget);
        pushButton_task4->setObjectName("pushButton_task4");
        pushButton_task4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout_3->addWidget(pushButton_task4);

        pushButton_task5 = new QPushButton(verticalLayoutWidget);
        pushButton_task5->setObjectName("pushButton_task5");
        pushButton_task5->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout_3->addWidget(pushButton_task5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_result = new QPushButton(verticalLayoutWidget);
        pushButton_result->setObjectName("pushButton_result");
        pushButton_result->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
""));

        horizontalLayout_2->addWidget(pushButton_result);

        pushButton_exit = new QPushButton(verticalLayoutWidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setBaseSize(QSize(0, 0));
        pushButton_exit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 43, 75);\n"
"\n"
""));

        horizontalLayout_2->addWidget(pushButton_exit);


        verticalLayout->addLayout(horizontalLayout_2);

        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(460, 0, 91, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(550, 0, 201, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_task1->setText(QCoreApplication::translate("MainWindow", "Task1\n"
"graf_min", nullptr));
        pushButton_task2->setText(QCoreApplication::translate("MainWindow", "Task2\n"
"halving_method", nullptr));
        pushButton_task3->setText(QCoreApplication::translate("MainWindow", "Task3\n"
"vigenere_cipher", nullptr));
        pushButton_task4->setText(QCoreApplication::translate("MainWindow", "Task4\n"
"sha-512", nullptr));
        pushButton_task5->setText(QCoreApplication::translate("MainWindow", "Task5\n"
"chord_method", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "  Login:   ", nullptr));
        label_login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
