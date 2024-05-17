/********************************************************************************
** Form generated from reading UI file 'veginire.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEGINIRE_H
#define UI_VEGINIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Veginire
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayou_2;
    QLineEdit *line_text_veginire;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_exit_veginire;
    QPushButton *pushButton_check_veginire;
    QLabel *label_error_veginire;
    QLineEdit *line_result_veginire;
    QLabel *labe_equation_3;
    QLabel *label_result_3;
    QLineEdit *line_key_veginire;
    QLabel *label_result_4;
    QLabel *label_login;
    QLabel *label1;

    void setupUi(QWidget *Veginire)
    {
        if (Veginire->objectName().isEmpty())
            Veginire->setObjectName("Veginire");
        Veginire->resize(587, 439);
        Veginire->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayoutWidget = new QWidget(Veginire);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 130, 491, 251));
        gridLayou_2 = new QGridLayout(gridLayoutWidget);
        gridLayou_2->setObjectName("gridLayou_2");
        gridLayou_2->setContentsMargins(0, 0, 0, 0);
        line_text_veginire = new QLineEdit(gridLayoutWidget);
        line_text_veginire->setObjectName("line_text_veginire");
        line_text_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        line_text_veginire->setReadOnly(true);

        gridLayou_2->addWidget(line_text_veginire, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_exit_veginire = new QPushButton(gridLayoutWidget);
        pushButton_exit_veginire->setObjectName("pushButton_exit_veginire");
        pushButton_exit_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(pushButton_exit_veginire);

        pushButton_check_veginire = new QPushButton(gridLayoutWidget);
        pushButton_check_veginire->setObjectName("pushButton_check_veginire");
        pushButton_check_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(pushButton_check_veginire);


        gridLayou_2->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        label_error_veginire = new QLabel(gridLayoutWidget);
        label_error_veginire->setObjectName("label_error_veginire");
        label_error_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou_2->addWidget(label_error_veginire, 4, 0, 1, 2);

        line_result_veginire = new QLineEdit(gridLayoutWidget);
        line_result_veginire->setObjectName("line_result_veginire");
        line_result_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayou_2->addWidget(line_result_veginire, 2, 1, 1, 1);

        labe_equation_3 = new QLabel(gridLayoutWidget);
        labe_equation_3->setObjectName("labe_equation_3");
        labe_equation_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou_2->addWidget(labe_equation_3, 0, 0, 1, 1);

        label_result_3 = new QLabel(gridLayoutWidget);
        label_result_3->setObjectName("label_result_3");
        label_result_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou_2->addWidget(label_result_3, 2, 0, 1, 1);

        line_key_veginire = new QLineEdit(gridLayoutWidget);
        line_key_veginire->setObjectName("line_key_veginire");
        line_key_veginire->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        line_key_veginire->setReadOnly(true);

        gridLayou_2->addWidget(line_key_veginire, 1, 1, 1, 1);

        label_result_4 = new QLabel(gridLayoutWidget);
        label_result_4->setObjectName("label_result_4");
        label_result_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayou_2->addWidget(label_result_4, 1, 0, 1, 1);

        label_login = new QLabel(Veginire);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(300, 30, 241, 41));
        label_login->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));
        label1 = new QLabel(Veginire);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(210, 30, 91, 41));
        label1->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"color: rgb(255, 64, 64);\n"
"background-color: rgb(0, 0, 0);"));

        retranslateUi(Veginire);

        QMetaObject::connectSlotsByName(Veginire);
    } // setupUi

    void retranslateUi(QWidget *Veginire)
    {
        Veginire->setWindowTitle(QCoreApplication::translate("Veginire", "Form", nullptr));
        pushButton_exit_veginire->setText(QCoreApplication::translate("Veginire", "Exit", nullptr));
        pushButton_check_veginire->setText(QCoreApplication::translate("Veginire", "Check", nullptr));
        label_error_veginire->setText(QString());
        labe_equation_3->setText(QCoreApplication::translate("Veginire", "Text", nullptr));
        label_result_3->setText(QCoreApplication::translate("Veginire", "Result", nullptr));
        label_result_4->setText(QCoreApplication::translate("Veginire", "Key", nullptr));
        label_login->setText(QString());
        label1->setText(QCoreApplication::translate("Veginire", "Login:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Veginire: public Ui_Veginire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEGINIRE_H
