#include "veginire.h"
#include "ui_veginire.h"
#include <iostream>

Veginire::Veginire(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Veginire)
{
    ui->setupUi(this);
    ui->label_error_veginire->setVisible(false);
}

Veginire::~Veginire() {
    delete ui;
}

void Veginire::on_pushButton_exit_veginire_clicked() {
    this->close();
}
void Veginire::on_pushButton_check_veginire_clicked() {
    QString variant =  ui->line_key_veginire->text() + "/" + ui->line_text_veginire->text();
    QString result_client = ui->line_result_veginire->text();
    QString login = ui->label_login->text();
    bool check = check_Task("3", variant, result_client, login);
    if (check) {
        ui->label_error_veginire->setVisible(true);
        ui->label_error_veginire->setText("Задание выполнено успешно!");
    } else {
        ui->label_error_veginire->setVisible(true);
        ui->label_error_veginire->setText("Задание выполнено неверно!");
    }
}

void Veginire::setVariant()
{

    QString variant = generate_variant("3");
    ui->line_text_veginire->setText(variant.split("/")[0]);
    ui->line_key_veginire->setText(variant.split("/")[1]);
    ui->line_result_veginire->setText("");
}

void Veginire::task3_login(QString login) {
    ui->label_login->setText(login.toUtf8());
}
