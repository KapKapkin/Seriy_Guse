#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_task1 = new Graf_min;
    ui_task2 = new Halving_method;
    ui_task3 = new Veginire;
    ui_task4 = new SHA512;
    ui_task5 = new Chord_method;
    ui_result = new Result_client;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_task1_clicked()
{
    ui_task1->show();
    ui_task1->task1_login(ui->label_login->text());
}


void MainWindow::on_pushButton_task2_clicked()
{
    ui_task2->show();
    ui_task2->task2_login(ui->label_login->text());
}

void MainWindow::on_pushButton_task3_clicked() {
    ui_task3->show();
    ui_task3->setVariant();
    ui_task3->task3_login(ui->label_login->text());
}

void MainWindow::on_pushButton_task5_clicked()
{
    ui_task5->show();
    ui_task5->task5_login(ui->label_login->text());
}


void MainWindow::on_pushButton_result_clicked()
{
    ui_result->show();
    ui_result->result_login(ui->label_login->text());
}

void MainWindow::main_login(QString login) {
    ui->label_login->setText(login.toUtf8());
}
