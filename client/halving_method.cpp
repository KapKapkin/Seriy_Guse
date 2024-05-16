#include "halving_method.h"
#include "ui_halving_method.h"

Halving_method::Halving_method(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Halving_method)
{
    ui->setupUi(this);
    ui->label_error_halving_method->setVisible(false);
}

Halving_method::~Halving_method()
{
    delete ui;
}

void Halving_method::on_pushButton_exit_halving_method_clicked()
{
    this->close();
}


void Halving_method::on_pushButton_result_halving_method_clicked()
{

}

