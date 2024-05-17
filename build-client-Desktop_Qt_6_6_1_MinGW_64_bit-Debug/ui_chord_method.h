/********************************************************************************
** Form generated from reading UI file 'chord_method.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHORD_METHOD_H
#define UI_CHORD_METHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chord_method
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_result;
    QLineEdit *lineEdit_equation;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_check;
    QLabel *labe_equation;
    QLabel *label_result;
    QLabel *label_error;
    QLabel *label1;
    QLabel *label_login;

    void setupUi(QWidget *Chord_method)
    {
        if (Chord_method->objectName().isEmpty())
            Chord_method->setObjectName("Chord_method");
        Chord_method->resize(553, 444);
        Chord_method->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayoutWidget = new QWidget(Chord_method);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 140, 491, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_result = new QLineEdit(gridLayoutWidget);
        lineEdit_result->setObjectName("lineEdit_result");
        lineEdit_result->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(lineEdit_result, 1, 1, 1, 1);

        lineEdit_equation = new QLineEdit(gridLayoutWidget);
        lineEdit_equation->setObjectName("lineEdit_equation");
        lineEdit_equation->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(lineEdit_equation, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_exit = new QPushButton(gridLayoutWidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_exit);

        pushButton_check = new QPushButton(gridLayoutWidget);
        pushButton_check->setObjectName("pushButton_check");
        pushButton_check->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_check);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        labe_equation = new QLabel(gridLayoutWidget);
        labe_equation->setObjectName("labe_equation");
        labe_equation->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(labe_equation, 0, 0, 1, 1);

        label_result = new QLabel(gridLayoutWidget);
        label_result->setObjectName("label_result");
        label_result->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_result, 1, 0, 1, 1);

        label_error = new QLabel(gridLayoutWidget);
        label_error->setObjectName("label_error");
        label_error->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_error, 3, 0, 1, 2);

        label1 = new QLabel(Chord_method);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(200, 40, 91, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));
        label_login = new QLabel(Chord_method);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(290, 40, 241, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        retranslateUi(Chord_method);

        QMetaObject::connectSlotsByName(Chord_method);
    } // setupUi

    void retranslateUi(QWidget *Chord_method)
    {
        Chord_method->setWindowTitle(QCoreApplication::translate("Chord_method", "Form", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Chord_method", "Exit", nullptr));
        pushButton_check->setText(QCoreApplication::translate("Chord_method", "Check", nullptr));
        labe_equation->setText(QCoreApplication::translate("Chord_method", "Equation", nullptr));
        label_result->setText(QCoreApplication::translate("Chord_method", "Result", nullptr));
        label_error->setText(QString());
        label1->setText(QCoreApplication::translate("Chord_method", "Login:", nullptr));
        label_login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chord_method: public Ui_Chord_method {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHORD_METHOD_H
