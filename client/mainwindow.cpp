#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_task1 = new Graf_min;
    ui_task2 = new Halving_method;
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
}


void MainWindow::on_pushButton_task2_clicked()
{
    ui_task2->show();
}


void MainWindow::on_pushButton_result_clicked()
{
    ui_result->show();
}

