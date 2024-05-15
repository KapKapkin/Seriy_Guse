#include "result_client.h"
#include "ui_result_client.h"

Result_client::Result_client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Result_client)
{
    ui->setupUi(this);
}

Result_client::~Result_client()
{
    delete ui;
}

void Result_client::on_pushButton_exit_result_clicked()
{
    this->close();
}

