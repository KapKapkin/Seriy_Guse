#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "halving_method.h"
#include "graf_min.h"
#include "veginire.h"
#include "sha.h"
#include "result_client.h"
#include "chord_method.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void main_login(QString login);

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_task1_clicked();

    void on_pushButton_task2_clicked();

    void on_pushButton_task3_clicked();

    void on_pushButton_task5_clicked();

    void on_pushButton_result_clicked();

private:
    Ui::MainWindow *ui;
    Graf_min *ui_task1;
    Halving_method *ui_task2;
    Veginire *ui_task3;
    SHA512 *ui_task4;
    Chord_method *ui_task5;
    Result_client *ui_result;


};
#endif // MAINWINDOW_H
