#include "halving_method.h"
#include "ui_halving_method.h"

Halving_method::Halving_method(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Halving_method)
{
    ui->setupUi(this);
    ui->label_error_halving_method->setVisible(false);
    ui->lineEdit_eps->setReadOnly(true);
    ui->lineEdit_f->setReadOnly(true);
}

Halving_method::~Halving_method()
{
    delete ui;
}

void Halving_method::on_pushButton_exit_halving_method_clicked()
{
    this->close();
}


void Halving_method::on_pushButton_check_halving_method_clicked()
{
    QString variant = generate_variant("2");
    QString result_client = ui->lineEdit_result_halving_method->text();
    QString login = ui->label_login->text();
    bool check = check_Task("2", variant, result_client, login);
    if (check) {
        ui->label_error_halving_method->setVisible(true);
        ui->label_error_halving_method->setText("Задание выполнено успешно!");
    } else {
        ui->label_error_halving_method->setVisible(true);
        ui->label_error_halving_method->setText("Задание выполнено неверно!");
    }
}

void Halving_method::task2_login(QString login) {
    ui->label_login->setText(login.toUtf8());
}
