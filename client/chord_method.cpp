#include "chord_method.h"
#include "ui_chord_method.h"

Chord_method::Chord_method(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chord_method)
{
    ui->setupUi(this);
    ui->lineEdit_equation->setReadOnly(true);
    ui->label_error->setVisible(false);
}

Chord_method::~Chord_method()
{
    delete ui;
}

void Chord_method::task5_login(QString login) {
    ui->label_login->setText(login.toUtf8());
}

void Chord_method::on_pushButton_exit_clicked()
{
    this->close();
}


void Chord_method::on_pushButton_check_clicked()
{
    QString variant = generate_variant("5");
    QString result_client = ui->lineEdit_result->text();
    QString login = ui->label_login->text();
    bool check = check_Task("5", variant, result_client, login);
    if (check) {
        ui->label_error->setVisible(true);
        ui->label_error->setText("Задание выполнено успешно!");
    } else {
        ui->label_error->setVisible(true);
        ui->label_error->setText("Задание выполнено неверно!");
    }
}

