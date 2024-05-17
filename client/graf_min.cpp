#include "graf_min.h"
#include "ui_graf_min.h"

Graf_min::Graf_min(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Graf_min)
{
    ui->setupUi(this);
    ui->label_error_graf_min->setVisible(false);
    ui->lineEdit_from->setReadOnly(true);
    ui->lineEdit_to->setReadOnly(true);
    ui->tableWidget_graf->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Graf_min::~Graf_min()
{
    delete ui;
}

void Graf_min::on_pushButton_exit_graf_min_clicked()
{
        this->close();
}


void Graf_min::on_pushButton_check_graf_min_clicked()
{
    QString variant = generate_variant("1");
    QString result_client = ui->lineEdit_result_graf_min->text();
    QString login = ui->label_login->text();
    bool check = check_Task("1", variant, result_client, login);
    if (check) {
        ui->label_error_graf_min->setVisible(true);
        ui->label_error_graf_min->setText("Задание выполнено успешно!");
    } else {
        ui->label_error_graf_min->setVisible(true);
        ui->label_error_graf_min->setText("Задание выполнено неверно!");
    }
}

void Graf_min::task1_login(QString login) {
    ui->label_login->setText(login.toUtf8());
}
