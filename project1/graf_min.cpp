#include "graf_min.h"
#include "ui_graf_min.h"

Graf_min::Graf_min(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Graf_min)
{
    ui->setupUi(this);
    ui->label_error_graf_min->setVisible(false);
}

Graf_min::~Graf_min()
{
    delete ui;
}

void Graf_min::on_pushButton_exit_graf_min_clicked()
{
        this->close();
}


void Graf_min::on_pushButton_result_graf_min_clicked()
{
}

